//
//  JSBMessageForwarding.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/05.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSBMessageForwarding.h"
#import "JSBScriptingSupport+Private.h"

NSString * const JSBInstanceMembersKey = @"instanceMembers";
NSString * const JSBStaticMembersKey = @"staticMembers";

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

JSValue *propertyForObject(id obj, NSString *propertyName)
{
    JSContext *context = [JSBScriptingSupport currentContext];
    
    JSValue *properties = nil;
    
    Class cls = object_getClass(obj);
    if (class_isMetaClass(cls)) {
        properties = context[mangledNameFromClass(obj)][JSBStaticMembersKey];
    } else {
        properties = context[mangledNameFromClass(cls)][JSBInstanceMembersKey];
    }
    
    return properties[propertyName];
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
    JSContext *context = [JSBScriptingSupport currentContext];
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
    JSContext *context = [JSBScriptingSupport currentContext];
    
    NSString *propertyName = propertyNameFromSelector(_cmd);
    JSValue *function = context[mangledNameFromClass(object_getClass(self))][JSBInstanceMembersKey][propertyName];
    
    if (!function.isUndefined) {
        id currentSelf = context[@"self"];
        context[@"self"] = self;
        
        JSValue *returnValue = [function callWithArguments:@[tableView, indexPath]];
        
        context[@"self"] = currentSelf;
        
        return returnValue.toDouble;
    }
    
    return 0.0f;
}

CGFloat tableViewHeightForHeaderInSection(id self, SEL _cmd, UITableView *tableView, NSInteger section)
{
    JSContext *context = [JSBScriptingSupport currentContext];
    
    NSString *propertyName = propertyNameFromSelector(_cmd);
    JSValue *function = context[mangledNameFromClass(object_getClass(self))][JSBInstanceMembersKey][propertyName];
    
    if (!function.isUndefined) {
        id currentSelf = context[@"self"];
        context[@"self"] = self;
        
        JSValue *returnValue = [function callWithArguments:@[tableView, @(section)]];
        
        context[@"self"] = currentSelf;
        
        return returnValue.toDouble;
    }
    
    return 0.0f;
}

CGFloat tableViewHeightForFooterInSection(id self, SEL _cmd, UITableView *tableView, NSInteger section)
{
    JSContext *context = [JSBScriptingSupport currentContext];
    
    NSString *propertyName = propertyNameFromSelector(_cmd);
    JSValue *function = context[mangledNameFromClass(object_getClass(self))][JSBInstanceMembersKey][propertyName];
    
    if (!function.isUndefined) {
        id currentSelf = context[@"self"];
        context[@"self"] = self;
        
        JSValue *returnValue = [function callWithArguments:@[tableView, @(section)]];
        
        context[@"self"] = currentSelf;
        
        return returnValue.toDouble;
    }
    
    return 0.0f;
}

#pragma mark -

void setupForwardingImplementations(Class targetClass, Class cls, JSValue *instanceFunctions, JSValue *staticFunctions)
{
    unsigned int numberOfInstanceMethods = 0;
    Method *instanceMethods = class_copyMethodList(cls, &numberOfInstanceMethods);
    for (unsigned int i = 0; i < numberOfInstanceMethods; i++) {
        Method method = instanceMethods[i];
        struct objc_method_description *description = method_getDescription(method);
        
        NSString *propertyName = propertyNameFromSelector(description->name);
        JSValue *function = instanceFunctions[propertyName];
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
    if (instanceMethods) {
        free(instanceMethods);
    }
    
    unsigned int numberOfClassMethods = 0;
    Class metaClass = objc_getMetaClass(class_getName(cls));
    Class targetMetaClass = objc_getMetaClass(class_getName(targetClass));
    Method *classMethods = class_copyMethodList(metaClass, &numberOfClassMethods);
    for (unsigned int i = 0; i < numberOfClassMethods; i++) {
        Method method = classMethods[i];
        struct objc_method_description *description = method_getDescription(method);
        
        NSString *propertyName = propertyNameFromSelector(description->name);
        JSValue *function = staticFunctions[propertyName];
        if (!function.isUndefined) {
            class_addMethod(targetMetaClass, description->name, _objc_msgForward, description->types);
        }
    }
    if (classMethods) {
        free(classMethods);
    }
    
    Class superClass = class_getSuperclass(cls);
    if (superClass) {
        setupForwardingImplementations(targetClass, superClass, instanceFunctions, staticFunctions);
    }
}

#pragma mark -

void forwardInvocation(id self, SEL _cmd, NSInvocation *invocation)
{
    JSContext *context = [JSBScriptingSupport currentContext];
    
    if ([[self superclass] instancesRespondToSelector:invocation.selector]) {
        invokeSuper(invocation);
    }
    
    id currentSelf = context[@"self"];
    context[@"self"] = self;
    
    NSString *propertyName = propertyNameFromSelector(invocation.selector);
    JSValue *function = propertyForObject(self, propertyName);
    
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
    Class cls = object_getClass(self);
    
    methodSignature = [cls instanceMethodSignatureForSelector:selector];
    if (methodSignature) {
        return methodSignature;
    }
    
    NSUInteger numberOfArguments = [[NSStringFromSelector(selector) componentsSeparatedByString:@":"] count] - 1;
    return [NSMethodSignature signatureWithObjCTypes:[[@"@@:" stringByPaddingToLength:numberOfArguments + 3 withString:@"@" startingAtIndex:0] UTF8String]];
}

BOOL respondsToSelector(id self, SEL _cmd, SEL selector)
{
    NSString *propertyName = propertyNameFromSelector(selector);
    JSValue *function = propertyForObject(self, propertyName);
    
    return !function.isUndefined;
}

#pragma mark -

__unsafe_unretained id *createVariableArgumentListsFromArray(NSArray *arguments)
{
    __unsafe_unretained id *argList = (__unsafe_unretained id *) calloc(1UL, sizeof(id) * arguments.count);
    for (NSInteger i = 0; i < arguments.count; i++) {
        argList[i] = arguments[i];
    }
    
    return argList;
}
