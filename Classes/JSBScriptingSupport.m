//
//  JSBScriptingSupport.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import "JSBScriptingSupport.h"
#import "JSContext+Helper.h"
#import "JSBNSObject.h"

@import ObjectiveC;

static JSContext *globalContext;

#pragma mark -

static NSString *mangledNameFromClass(Class cls)
{
    return [NSString stringWithFormat:@"__JSB_%@", NSStringFromClass(cls)];
}

static NSString *propertyNameFromSelector(SEL selector)
{
    NSArray *split = [NSStringFromSelector(selector) componentsSeparatedByString:@":"];
    NSMutableString *propertyName = [[NSMutableString alloc] init];
    for (NSInteger i = 0; i < split.count; i++) {
        NSString *string = split[i];
        if (i > 0) {
            if (string.length > 0) {
                NSString *firstCharacter = [string substringWithRange:NSMakeRange(0, 1)];
                [propertyName appendString:[string stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:firstCharacter.uppercaseString]];
            }
        } else {
            [propertyName appendString:string];
        }
    }
    
    return propertyName;
}

static NSArray *extractArguments(NSInvocation *invocation)
{
    NSMethodSignature *methodSignature = invocation.methodSignature;
    NSUInteger numberOfArguments = methodSignature.numberOfArguments;
    NSMutableArray *arguments = [[NSMutableArray alloc] initWithCapacity:numberOfArguments];
    
    for (NSUInteger i = 2; i < numberOfArguments; i++) {
        const char *type = [methodSignature getArgumentTypeAtIndex:i];
        if (strcmp(type, @encode(char)) == 0) {
            char argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(bool)) == 0) {
            bool argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(short)) == 0) {
            short argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(int)) == 0) {
            int argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(long)) == 0) {
            long argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(long long)) == 0) {
            long long argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(unsigned char)) == 0) {
            unsigned char argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(unsigned short)) == 0) {
            unsigned short argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(unsigned int)) == 0) {
            unsigned int argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(unsigned long)) == 0) {
            unsigned long argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(unsigned long long)) == 0) {
            unsigned long long argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(float)) == 0) {
            float argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(double)) == 0) {
            double argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(char *)) == 0) {
            char *argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(BOOL)) == 0) {
            BOOL argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(void *)) == 0) {
            void *argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:(__bridge id)argument];
        } else if (strcmp(type, @encode(SEL)) == 0) {
            const char *argument = nil;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(id)) == 0) {
            id __unsafe_unretained argument = nil;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:argument];
        } else if (strcmp(type, @encode(Class)) == 0) {
            Class __unsafe_unretained argument = nil;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:argument];
        } else if (strcmp(type, @encode(NSInteger)) == 0) {
            NSInteger argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(NSUInteger)) == 0) {
            NSUInteger argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(CGFloat)) == 0) {
            CGFloat argument;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        }
    }
    
    return arguments.copy;
}

static void setReturnValue(JSValue *value, NSInvocation *invocation)
{
    NSMethodSignature *methodSignature = invocation.methodSignature;
    const char *type = methodSignature.methodReturnType;
    
    if (strcmp(type, @encode(void)) == 0) {
        return;
    }
    
    if (strcmp(type, @encode(char)) == 0 ||
        strcmp(type, @encode(short)) == 0 ||
        strcmp(type, @encode(int)) == 0 ||
        strcmp(type, @encode(long)) == 0 ||
        strcmp(type, @encode(long long)) == 0 ||
        strcmp(type, @encode(unsigned char)) == 0 ||
        strcmp(type, @encode(unsigned short)) == 0 ||
        strcmp(type, @encode(unsigned int)) == 0 ||
        strcmp(type, @encode(unsigned long)) == 0 ||
        strcmp(type, @encode(unsigned long long)) == 0 ||
        strcmp(type, @encode(NSInteger)) == 0 ||
        strcmp(type, @encode(NSUInteger)) == 0) {
        int32_t returnValue = value.toInt32;
        [invocation setReturnValue:&returnValue];
    } else if (strcmp(type, @encode(bool)) == 0 ||
               strcmp(type, @encode(BOOL)) == 0) {
        BOOL returnValue = value.toBool;
        [invocation setReturnValue:&returnValue];
    } else if (strcmp(type, @encode(float)) == 0 ||
               strcmp(type, @encode(CGFloat)) == 0) {
        float returnValue = value.toDouble;
        [invocation setReturnValue:&returnValue];
    } else if (strcmp(type, @encode(double)) == 0) {
        double returnValue = value.toDouble;
        [invocation setReturnValue:&returnValue];
    } else {
        id __unsafe_unretained returnValue = value.toObject;
        [invocation setReturnValue:&returnValue];
    }
}

static void setupForwardingImplementations(Class targetClass, Class cls, JSValue *functions)
{
    unsigned int count = 0;
    Method *methods = class_copyMethodList(cls, &count);
    for (unsigned int i = 0; i < count; i++) {
        Method m = methods[i];
        struct objc_method_description *description = method_getDescription(m);
        
        NSString *propertyName = propertyNameFromSelector(description->name);
        JSValue *function = functions[propertyName];
        if (!function.isUndefined) {
            class_addMethod(targetClass, description->name, _objc_msgForward, description->types);
        }
    }
    if (methods) {
        free(methods);
    }
    
    Class superClass = class_getSuperclass(cls);
    if (superClass) {
        setupForwardingImplementations(targetClass, superClass, functions);
    }
}

static void forwardInvocation(id self, SEL _cmd, NSInvocation *invocation)
{
    JSContext *context = globalContext;
    context[@"self"] = self;
    
    NSString *propertyName = propertyNameFromSelector(invocation.selector);
    JSValue *value = globalContext[mangledNameFromClass([self class])][@"instanceMembers"][propertyName];
    
    if (!value.isUndefined) {
        NSArray *arguments = extractArguments(invocation);
        JSValue *returnValue = [value callWithArguments:arguments];
        
        setReturnValue(returnValue, invocation);
    }
    
    context[@"self"] = [NSNull null];
}

static NSMethodSignature *methodSignatureForSelector(id self, SEL _cmd, SEL selector)
{
    NSMethodSignature *methodSignature = nil;
    
    Class cls = [self class];
    methodSignature = [cls instanceMethodSignatureForSelector:selector];
    if (methodSignature) {
        return methodSignature;
    }
    
    NSUInteger numberOfArguments = [[NSStringFromSelector(selector) componentsSeparatedByString:@":"] count] - 1;
    return [NSMethodSignature signatureWithObjCTypes:[[@"@@:" stringByPaddingToLength:numberOfArguments + 3 withString:@"@" startingAtIndex:0] UTF8String]];
}

static BOOL respondsToSelector(id self, SEL _cmd, SEL selector)
{
    NSString *propertyName = propertyNameFromSelector(selector);
    JSValue *value = globalContext[mangledNameFromClass([self class])][@"instanceMembers"][propertyName];
    
    return !value.isUndefined;
}

#pragma mark -

@interface UIControl (JavaScriptBridge)

@end

@implementation UIControl (JavaScriptBridge)

- (void)__addTarget:(id)target action:(NSString *)action forControlEvents:(UIControlEvents)controlEvents
{
    [self addTarget:target action:NSSelectorFromString(action) forControlEvents:controlEvents];
}

- (void)__removeTarget:(id)target action:(NSString *)action forControlEvents:(UIControlEvents)controlEvents
{
    [self removeTarget:target action:NSSelectorFromString(action) forControlEvents:controlEvents];
}

- (void)__sendAction:(NSString *)action to:(id)target forEvent:(UIEvent *)event
{
    [self sendAction:NSSelectorFromString(action) to:target forEvent:event];
}

@end

#pragma mark -

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

+ (id)defineClass:(NSString *)declaration
  instanceMembers:(JSValue *)instanceMembers
    staticMembers:(JSValue *)staticMembers
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
