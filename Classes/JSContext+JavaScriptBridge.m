//
//  JSContext+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/04.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSContext+JavaScriptBridge.h"
#import "JSBScriptingSupport+Private.h"

@implementation JSContext (JavaScriptBridge)

- (void)addScriptingSupport:(NSString *)framework
{
    [JSBScriptingSupport setupSupportFunctionsToContext:self];
    
    static NSMapTable *hashTables;
    if (!hashTables) {
        hashTables = [NSMapTable mapTableWithKeyOptions:NSPointerFunctionsWeakMemory valueOptions:NSPointerFunctionsWeakMemory];
    }
    
    NSHashTable *frameworks = [hashTables objectForKey:self];
    if (!frameworks) {
        frameworks = [NSHashTable hashTableWithOptions:NSPointerFunctionsWeakMemory];
        [hashTables setObject:frameworks forKey:self];
    }
    
    NSString *prefix = @"JSB";
    id classObject = NSClassFromString([NSString stringWithFormat:@"%@%@", prefix, framework]);
    if (classObject && ![frameworks containsObject:framework]) {
        SEL selector = NSSelectorFromString(@"addScriptingSupportToContext:");
        
        NSMethodSignature *methodSignature = [classObject methodSignatureForSelector:selector];
        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:methodSignature];
        invocation.target = classObject;
        invocation.selector = selector;
        
        JSContext *context = self;
        [invocation setArgument:&context atIndex:2];
        
        [invocation invoke];
        
        [frameworks addObject:framework];
    }
}

@end
