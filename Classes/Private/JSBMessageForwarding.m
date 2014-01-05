//
//  JSBMessageForwarding.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/05.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSBMessageForwarding.h"
#import "JSBScriptingSupport.h"

@import JavaScriptCore;
@import ObjectiveC;

NSString *mangledNameFromClass(Class cls)
{
    return [NSString stringWithFormat:@"__JSB_%@", NSStringFromClass(cls)];
}

NSString *propertyNameFromSelector(SEL selector)
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

#pragma mark -

void invokeSuper(NSInvocation *inv)
{
    SEL sel = NSSelectorFromString(@"invokeSuper");
    NSMethodSignature *signature = [inv methodSignatureForSelector:sel];
    
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
    invocation.selector = sel;
    invocation.target = inv;
    
    [invocation invoke];
}

void dispatchFunction(id self, JSValue *function, NSArray *parameters)
{
    JSContext *context = [JSBScriptingSupport globalContext];
    context[@"self"] = self;
    
    [function callWithArguments:parameters];
    
    context[@"self"] = nil;
}

NSArray *extractArguments(NSInvocation *invocation)
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
        } else if (strcmp(type, @encode(id)) == 0) {
            id __unsafe_unretained argument = nil;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:argument];
        } else if (strcmp(type, @encode(SEL)) == 0) {
            const char *argument = nil;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:@(argument)];
        } else if (strcmp(type, @encode(Class)) == 0) {
            Class __unsafe_unretained argument = nil;
            [invocation getArgument:&argument atIndex:i];
            [arguments addObject:argument];
        }
    }
    
    return arguments.copy;
}

void setReturnValue(JSValue *value, NSInvocation *invocation)
{
    NSMethodSignature *methodSignature = invocation.methodSignature;
    const char *type = methodSignature.methodReturnType;
    
    if (strcmp(type, @encode(void)) == 0) {
        return;
    }
    
    if (strcmp(type, @encode(char)) == 0 ||
        strcmp(type, @encode(short)) == 0 ||
        strcmp(type, @encode(int)) == 0 ||
        strcmp(type, @encode(unsigned char)) == 0 ||
        strcmp(type, @encode(unsigned short)) == 0 ||
        strcmp(type, @encode(unsigned int)) == 0) {
        int32_t returnValue = value.toInt32;
        [invocation setReturnValue:&returnValue];
    } else if (strcmp(type, @encode(long)) == 0 ||
               strcmp(type, @encode(unsigned long)) == 0 ||
               strcmp(type, @encode(long long)) == 0 ||
               strcmp(type, @encode(unsigned long long)) == 0) {
        int64_t returnValue = value.toInt32;
        [invocation setReturnValue:&returnValue];
    } else if (strcmp(type, @encode(bool)) == 0 ||
               strcmp(type, @encode(BOOL)) == 0) {
        BOOL returnValue = value.toBool;
        [invocation setReturnValue:&returnValue];
    } else if (strcmp(type, @encode(float)) == 0) {
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

#pragma mark -

CGFloat tableViewHeightForRowAtIndexPath(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath)
{
    JSContext *context = [JSBScriptingSupport globalContext];
    
    NSString *propertyName = propertyNameFromSelector(_cmd);
    JSValue *function = context[mangledNameFromClass([self class])][@"instanceMembers"][propertyName];
    
    if (!function.isUndefined) {
        JSValue *returnValue = [function callWithArguments:@[tableView, indexPath]];
        return returnValue.toDouble;
    }
    
    return 0.0f;
}

CGFloat tableViewHeightForHeaderInSection(id self, SEL _cmd, UITableView *tableView, NSInteger section)
{
    JSContext *context = [JSBScriptingSupport globalContext];
    
    NSString *propertyName = propertyNameFromSelector(_cmd);
    JSValue *function = context[mangledNameFromClass([self class])][@"instanceMembers"][propertyName];
    
    if (!function.isUndefined) {
        JSValue *returnValue = [function callWithArguments:@[tableView, @(section)]];
        return returnValue.toDouble;
    }
    
    return 0.0f;
}

CGFloat tableViewHeightForFooterInSection(id self, SEL _cmd, UITableView *tableView, NSInteger section)
{
    JSContext *context = [JSBScriptingSupport globalContext];
    
    NSString *propertyName = propertyNameFromSelector(_cmd);
    JSValue *function = context[mangledNameFromClass([self class])][@"instanceMembers"][propertyName];
    
    if (!function.isUndefined) {
        JSValue *returnValue = [function callWithArguments:@[tableView, @(section)]];
        return returnValue.toDouble;
    }
    
    return 0.0f;
}

#pragma mark -

void setupForwardingImplementations(Class targetClass, Class cls, JSValue *functions)
{
    unsigned int count = 0;
    Method *methods = class_copyMethodList(cls, &count);
    for (unsigned int i = 0; i < count; i++) {
        Method m = methods[i];
        struct objc_method_description *description = method_getDescription(m);
        
        NSString *propertyName = propertyNameFromSelector(description->name);
        JSValue *function = functions[propertyName];
        if (!function.isUndefined) {
            if (strcmp(@encode(NSInteger), "q") == 0) { // for 64bit devices
                if (description->name == @selector(tableView:heightForRowAtIndexPath:)) {
                    class_addMethod(targetClass, description->name, (IMP)tableViewHeightForRowAtIndexPath, description->types);
                    continue;
                } else if (description->name == @selector(tableView:heightForHeaderInSection:)) {
                    class_addMethod(targetClass, description->name, (IMP)tableViewHeightForHeaderInSection, description->types);
                    continue;
                } else if (description->name == @selector(tableView:heightForFooterInSection:)) {
                    class_addMethod(targetClass, description->name, (IMP)tableViewHeightForFooterInSection, description->types);
                    continue;
                } else if (description->name == @selector(tableView:estimatedHeightForRowAtIndexPath:)) {
                    class_addMethod(targetClass, description->name, (IMP)tableViewHeightForRowAtIndexPath, description->types);
                    continue;
                } else if (description->name == @selector(tableView:estimatedHeightForHeaderInSection:)) {
                    class_addMethod(targetClass, description->name, (IMP)tableViewHeightForHeaderInSection, description->types);
                    continue;
                } else if (description->name == @selector(tableView:estimatedHeightForFooterInSection:)) {
                    class_addMethod(targetClass, description->name, (IMP)tableViewHeightForFooterInSection, description->types);
                    continue;
                }
            }
            
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

#pragma mark -

void forwardInvocation(id self, SEL _cmd, NSInvocation *invocation)
{
    JSContext *context = [JSBScriptingSupport globalContext];
    
    if ([[self superclass] instancesRespondToSelector:invocation.selector]) {
        invokeSuper(invocation);
    }
    
    id currentSelf = context[@"self"];
    context[@"self"] = self;
    
    NSString *propertyName = propertyNameFromSelector(invocation.selector);
    JSValue *function = context[mangledNameFromClass([self class])][@"instanceMembers"][propertyName];
    
    if (!function.isUndefined) {
        NSArray *arguments = extractArguments(invocation);
        JSValue *returnValue = [function callWithArguments:arguments];
        
        setReturnValue(returnValue, invocation);
    }
    
    context[@"self"] = currentSelf;
}

NSMethodSignature *methodSignatureForSelector(id self, SEL _cmd, SEL selector)
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

BOOL respondsToSelector(id self, SEL _cmd, SEL selector)
{
    JSContext *context = [JSBScriptingSupport globalContext];
    
    NSString *propertyName = propertyNameFromSelector(selector);
    JSValue *value = context[mangledNameFromClass([self class])][@"instanceMembers"][propertyName];
    
    return !value.isUndefined;
}
