//
//  NSMutableString+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/06.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "NSMutableString+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation NSMutableString (JavaScriptBridge)

- (void)__appendFormat:(NSString *)format arguments:(NSArray *)arguments
{
    __unsafe_unretained id *argList = createVariableArgumentListsFromArray(arguments);
    [self appendFormat:format, *argList];
    free(argList);
}

@end
