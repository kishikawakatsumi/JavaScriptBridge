//
//  UIBarButtonItem+JavaScriptCore.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/03.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIBarButtonItem+JavaScriptCore.h"

@implementation UIBarButtonItem (JavaScriptCore)

- (id)__initWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style target:(id)target action:(NSString *)action
{
    return [self initWithImage:image style:style target:target action:NSSelectorFromString(action)];
}

- (id)__initWithImage:(UIImage *)image landscapeImagePhone:(UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style target:(id)target action:(NSString *)action
{
    return [self initWithImage:image landscapeImagePhone:landscapeImagePhone style:style target:target action:NSSelectorFromString(action)];
}

- (id)__initWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style target:(id)target action:(NSString *)action
{
    return [self initWithTitle:title style:style target:self action:NSSelectorFromString(action)];
}

- (id)__initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem target:(id)target action:(NSString *)action
{
    return [self initWithBarButtonSystemItem:systemItem target:target action:NSSelectorFromString(action)];
}

@end
