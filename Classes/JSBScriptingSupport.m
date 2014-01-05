//
//  JSBScriptingSupport.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import "JSBScriptingSupport.h"
#import "JSBNSObject.h"
#import "JSBMessageForwarding.h"
#import "UIControl+JavaScriptBridge.h"
#import "JSContext+JavaScriptBridge.h"

@import ObjectiveC;

static JSContext *globalContext;

@implementation JSBScriptingSupport

+ (void)initialize
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        globalContext = [[JSContext alloc] init];
        globalContext.exceptionHandler = ^(JSContext *context, JSValue *value) {
            
        };
        
        [globalContext addScriptingSupport:@"Foundation"];
        [globalContext addScriptingSupport:@"UIKit"];
        [globalContext addScriptingSupport:@"QuartzCore"];
        
        globalContext[@"__JSB_JSBScriptingSupport"] = [JSBScriptingSupport class];
        [globalContext evaluateScript:
         @"JSB = (function() {\n"
         @"  var namespace = {\n"
         @"    define: function(declaration, instanceMembers, staticMembers) {\n"
         @"      return __JSB_JSBScriptingSupport.defineClass(declaration, instanceMembers, staticMembers);\n"
         @"    },\n"
         @"    require: function(name) {\n"
         @"      return __JSB_JSBScriptingSupport.require(name);\n"
         @"    },\n"
         @"    exports: {},\n"
         @"    selector: function(str) {\n"
         @"      return __JSB_JSBScriptingSupport.selectorFromString(str);\n"
         @"    },\n"
         @"    dispatch_async: function(queue, block) {\n"
         @"      return __JSB_JSBScriptingSupport.dispatch_async(queue, block);\n"
         @"    },\n"
         @"    dispatch_get_global_queue: function(priority, flags) {\n"
         @"      return __JSB_JSBScriptingSupport.dispatch_get_global_queue(priority, flags);\n"
         @"    },\n"
         @"    dispatch_get_main_queue: function() {\n"
         @"      return __JSB_JSBScriptingSupport.dispatch_get_main_queue();\n"
         @"    },\n"
         @"    dump: function(obj) {\n"
         @"      return __JSB_JSBScriptingSupport.dump(obj);\n"
         @"    }\n"
         @"  };\n"
         @"\n"
         @"  return namespace;\n"
         @"})();\n"
         ];
    });
}

#pragma mark -

+ (JSContext *)globalContext
{
    return globalContext;
}

#pragma mark -

+ (id)defineClass:(NSString *)declaration instanceMembers:(JSValue *)instanceMembers staticMembers:(JSValue *)staticMembers
{
    NSScanner *scanner = [NSScanner scannerWithString:declaration];
    
    NSString *className = nil;
    NSString *parentClassName = nil;
    NSString *protocols = nil;
    [scanner scanUpToString:@":" intoString:&className];
    if (!scanner.isAtEnd) {
        scanner.scanLocation = scanner.scanLocation + 1;
    }
    [scanner scanUpToString:@"<" intoString:&parentClassName];
    if (!scanner.isAtEnd) {
        scanner.scanLocation = scanner.scanLocation + 1;
    }
    [scanner scanUpToString:@">" intoString:&protocols];
    
    className = [className stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    parentClassName = [parentClassName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (!parentClassName) {
        parentClassName = @"NSObject";
    }
    
    Class cls = objc_allocateClassPair(NSClassFromString(parentClassName), className.UTF8String, 0);
    objc_registerClassPair(cls);
    
    Class superClass = class_getSuperclass(cls);
    if (superClass) {
        setupForwardingImplementations(cls, superClass, instanceMembers);
    }
    
    NSString *types;
    BOOL result;
    
    types = [NSString stringWithFormat: @"%s%s%s%s", @encode(NSMethodSignature), @encode(id), @encode(SEL), @encode(SEL)];
    result = class_addMethod(cls, @selector(methodSignatureForSelector:), (IMP)methodSignatureForSelector, types.UTF8String);
    
    types = [NSString stringWithFormat: @"%s%s%s%s", @encode(void), @encode(id), @encode(SEL), @encode(NSInvocation)];
    result = class_addMethod(cls, @selector(forwardInvocation:), (IMP)forwardInvocation, types.UTF8String);
    
    types = [NSString stringWithFormat: @"%s%s%s%s", @encode(BOOL), @encode(id), @encode(SEL), @encode(SEL)];
    result = class_addMethod(cls, @selector(respondsToSelector:), (IMP)respondsToSelector, types.UTF8String);
    
    for (NSString *protocol in [protocols componentsSeparatedByString:@","]) {
        class_addProtocol(cls, NSProtocolFromString([protocol stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]]));
    }
    
    class_addProtocol(cls, @protocol(JSBNSObject));
    
    globalContext[mangledNameFromClass(cls)] = cls;
    globalContext[mangledNameFromClass(cls)][@"instanceMembers"] = instanceMembers;
    
    return cls;
}

+ (id)require:(NSString *)name
{
    JSValue *module = nil;
    
    NSBundle *mainBundle = [NSBundle mainBundle];
    NSString *path = [mainBundle pathForResource:name ofType:@"js"];
    
    NSString *script = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
    if (!script) {
        script = [NSString stringWithContentsOfFile:[name stringByAppendingPathExtension:@"js"] encoding:NSUTF8StringEncoding error:nil];
    }
    if (script) {
        NSString *closure = [NSString stringWithFormat:
                             @"(function() {\n"
                             @"  %@\n"
                             @"})();\n", script];
        [globalContext evaluateScript:closure];
        module = globalContext[@"JSB"][@"exports"];
    }
    
    return module;
}

#pragma mark -

+ (void)dispatch_async:(id)queue block:(JSValue *)function
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    dispatch_block_t block = NULL;
    if (!function.isUndefined) {
        block = ^() {
            dispatchFunction(currentSelf, function, nil);
        };
    }
    
    dispatch_async(queue, block);
}

+ (id)dispatch_get_global_queue:(dispatch_queue_priority_t)priority
                          flags:(unsigned long)flags
{
    return dispatch_get_global_queue(priority, flags);
}

+ (id)dispatch_get_main_queue
{
    return dispatch_get_main_queue();
}

#pragma mark - for debug

+ (void)log:(NSString *)format, ...
{
    va_list args;
    va_start(args, format);
    NSString *result = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    
    NSLog(@"%@", result);
}

+ (void)dump:(id)object
{
    NSLog(@"%@", object);
}

@end
