//
//  UIMenuItem+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/31.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIMenuItem+JavaScriptBridge.h"

@implementation UIMenuItem (JavaScriptBridge)

- (id)__initWithTitle:(NSString *)title action:(NSString *)action
{
    return [self initWithTitle:title action:NSSelectorFromString(action)];
}

@end
