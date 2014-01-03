//
//  JSBSuperClassProxy.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/04.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "JSBSuperClassProxy.h"

@implementation JSBSuperClassProxy

- (id)initWithTarget:(id)target
{
    _target = target;
    return self;
}

- (void)forwardInvocation:(NSInvocation *)invocation
{
    [invocation performSelector:NSSelectorFromString(@"invokeSuper")];
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel
{
    return [self.target methodSignatureForSelector:sel];
}

@end
