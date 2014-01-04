//
//  JSContext+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/04.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSContext+JavaScriptBridge.h"

@implementation JSContext (JavaScriptBridge)

- (void)addScriptingSupport:(NSString *)framework
{
    NSString *prefix = @"JSB";
    id classObject = NSClassFromString([NSString stringWithFormat:@"%@%@", prefix, framework]);
    if (classObject) {
        SEL selector = NSSelectorFromString(@"addScriptingSupportToContext:");
        
        NSMethodSignature *methodSignature = [classObject methodSignatureForSelector:selector];
        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:methodSignature];
        invocation.target = classObject;
        invocation.selector = selector;
        
        JSContext *context = self;
        [invocation setArgument:&context atIndex:2];
        
        [invocation invoke];
    }
}

@end
