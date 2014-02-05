//
//  UIAlertView+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/06.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIAlertView+JavaScriptBridge.h"

@implementation UIAlertView (JavaScriptBridge)

- (id)__initWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles
{
    self = [self initWithTitle:title message:message delegate:delegate cancelButtonTitle:cancelButtonTitle otherButtonTitles:nil];
    [otherButtonTitles enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [self addButtonWithTitle:obj];
    }];
    
    return self;
}

@end
