//
//  UIGestureRecognizer+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/31.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIGestureRecognizer+JavaScriptBridge.h"

@implementation UIGestureRecognizer (JavaScriptBridge)

- (id)__initWithTarget:(id)target action:(NSString *)action
{
    return [self initWithTarget:target action:NSSelectorFromString(action)];
}

- (void)__addTarget:(id)target action:(NSString *)action
{
    [self addTarget:target action:NSSelectorFromString(action)];
}

- (void)__removeTarget:(id)target action:(NSString *)action
{
    [self removeTarget:target action:NSSelectorFromString(action)];
}

@end
