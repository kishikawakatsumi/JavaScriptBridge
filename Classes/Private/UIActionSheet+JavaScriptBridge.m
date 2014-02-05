//
//  UIActionSheet+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/06.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIActionSheet+JavaScriptBridge.h"

@implementation UIActionSheet (JavaScriptBridge)

- (id)__initWithTitle:(NSString *)title delegate:(id <UIActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles
{
    self = [self initWithTitle:title delegate:delegate cancelButtonTitle:cancelButtonTitle destructiveButtonTitle:destructiveButtonTitle otherButtonTitles:nil];
    [otherButtonTitles enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [self addButtonWithTitle:obj];
    }];
    
    return self;
}

@end
