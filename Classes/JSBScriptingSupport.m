//
//  JSBScriptingSupport.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import "JSBScriptingSupport.h"
#import "JSBScriptingSupport+Private.h"
#import "JSBNSObject.h"
#import "JSBMessageForwarding.h"
#import "JSContext+JavaScriptBridge.h"

@import ObjectiveC;

@implementation JSBScriptingSupport

+ (JSContext *)globalContext
{
    static JSContext *globalContext;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        globalContext = [[JSContext alloc] init];
        globalContext.exceptionHandler = ^(JSContext *context, JSValue *value) {
            NSLog(@"%@", value);
        };
        
        [globalContext addScriptingSupport:@"Foundation"];
        [globalContext addScriptingSupport:@"UIKit"];
        [globalContext addScriptingSupport:@"QuartzCore"];
    });
    
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
    className = [NSString stringWithFormat:@"%@$%@", className, [[[NSUUID UUID] UUIDString] stringByReplacingOccurrencesOfString:@"-" withString:@""]];
    parentClassName = [parentClassName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (!parentClassName) {
        parentClassName = @"NSObject";
    }
    
    Class cls = objc_getClass(className.UTF8String);
    if (cls) {
        objc_disposeClassPair(cls);
    }
    cls = objc_allocateClassPair(NSClassFromString(parentClassName), className.UTF8String, 0);
    objc_registerClassPair(cls);
    
    Class superClass = class_getSuperclass(cls);
    if (superClass) {
        setupForwardingImplementations(cls, superClass, instanceMembers, staticMembers);
    }
    
    NSString *types;
    BOOL result;
    
    Class metaClass = object_getClass(cls);
    
    types = [NSString stringWithFormat:@"%s%s%s%s", @encode(NSMethodSignature), @encode(id), @encode(SEL), @encode(SEL)];
    result = class_addMethod(cls, @selector(methodSignatureForSelector:), (IMP)methodSignatureForSelector, types.UTF8String);
    result = class_addMethod(metaClass, @selector(methodSignatureForSelector:), (IMP)methodSignatureForSelector, types.UTF8String);
    
    types = [NSString stringWithFormat:@"%s%s%s%s", @encode(void), @encode(id), @encode(SEL), @encode(NSInvocation)];
    result = class_addMethod(cls, @selector(forwardInvocation:), (IMP)forwardInvocation, types.UTF8String);
    result = class_addMethod(metaClass, @selector(forwardInvocation:), (IMP)forwardInvocation, types.UTF8String);
    
    types = [NSString stringWithFormat:@"%s%s%s%s", @encode(BOOL), @encode(id), @encode(SEL), @encode(SEL)];
    result = class_addMethod(cls, @selector(respondsToSelector:), (IMP)respondsToSelector, types.UTF8String);
    result = class_addMethod(metaClass, @selector(respondsToSelector:), (IMP)respondsToSelector, types.UTF8String);
    
    for (NSString *protocol in [protocols componentsSeparatedByString:@","]) {
        class_addProtocol(cls, NSProtocolFromString([protocol stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]]));
    }
    
    class_addProtocol(cls, @protocol(JSBNSObject));
    
    JSContext *context = [self currentContext];
    
    NSString *key = mangledNameFromClass(cls);
    context[key] = cls;
    context[key][JSBInstanceMembersKey] = instanceMembers;
    context[key][JSBStaticMembersKey] = staticMembers;
    
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
        JSContext *context = [self currentContext];
        
        JSValue *function = context[@"Function"];
        JSValue *value = [function constructWithArguments:@[script]];
        [value callWithArguments:nil];
        module = context[@"JSB"][@"exports"];
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

+ (void)log:(NSString *)format arguments:(NSArray *)arguments
{
    __unsafe_unretained id *argList = createVariableArgumentListsFromArray(arguments);
    NSString *result = [[NSString alloc] initWithFormat:format, *argList];
    free(argList);
    
    NSLog(@"%@", result);
}

+ (void)dump:(id)object
{
    NSLog(@"%@", object);
}

@end
