//
//  JSContext+Helper.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import "JSContext+Helper.h"

@implementation JSContext (Helper)

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
