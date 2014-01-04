//
//  UIControl+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/04.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIControl+JavaScriptBridge.h"

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
