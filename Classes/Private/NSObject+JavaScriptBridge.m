//
//  NSObject+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/03.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "NSObject+JavaScriptBridge.h"

@implementation NSObject (JavaScriptBridge)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"

- (id)__performSelector:(NSString *)aSelector
{
    return [self performSelector:NSSelectorFromString(aSelector)];
}

- (id)__performSelector:(NSString *)aSelector withObject:(id)object
{
    return [self performSelector:NSSelectorFromString(aSelector) withObject:object];
}

- (id)__performSelector:(NSString *)aSelector withObject:(id)object1 withObject:(id)object2
{
    return [self performSelector:NSSelectorFromString(aSelector) withObject:object1 withObject:object2];
}

#pragma clang diagnostic pop

+ (BOOL)__instancesRespondToSelector:(NSString *)aSelector
{
    return [self instancesRespondToSelector:NSSelectorFromString(aSelector)];
}

- (void)__doesNotRecognizeSelector:(NSString *)aSelector
{
    [self doesNotRecognizeSelector:NSSelectorFromString(aSelector)];
}

- (id)__forwardingTargetForSelector:(NSString *)aSelector
{
    return [self forwardingTargetForSelector:NSSelectorFromString(aSelector)];
}

- (NSMethodSignature *)__methodSignatureForSelector:(NSString *)aSelector
{
    return [self methodSignatureForSelector:NSSelectorFromString(aSelector)];
}

+ (NSMethodSignature *)__instanceMethodSignatureForSelector:(NSString *)aSelector
{
    return [self instanceMethodSignatureForSelector:NSSelectorFromString(aSelector)];
}

+ (BOOL)__resolveClassMethod:(NSString *)sel
{
    return [self resolveClassMethod:NSSelectorFromString(sel)];
}

+ (BOOL)__resolveInstanceMethod:(NSString *)sel
{
    return [self resolveInstanceMethod:NSSelectorFromString(sel)];
}

@end
