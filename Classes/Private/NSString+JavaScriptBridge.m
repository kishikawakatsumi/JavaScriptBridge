//
//  NSString+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/06.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "NSString+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation NSString (JavaScriptBridge)

+ (instancetype)__stringWithFormat:(NSString *)format arguments:(NSArray *)arguments
{
    __unsafe_unretained id *argList = createVariableArgumentListsFromArray(arguments);
    NSString *result = [self stringWithFormat:format, *argList];
    free(argList);
    
    return result;
}

+ (instancetype)__localizedStringWithFormat:(NSString *)format arguments:(NSArray *)arguments
{
    __unsafe_unretained id *argList = createVariableArgumentListsFromArray(arguments);
    NSString *result = [self localizedStringWithFormat:format, *argList];
    free(argList);
    
    return result;
}

- (NSString *)__stringByAppendingFormat:(NSString *)format arguments:(NSArray *)arguments
{
    __unsafe_unretained id *argList = createVariableArgumentListsFromArray(arguments);
    NSString *result = [self stringByAppendingFormat:format, *argList];
    free(argList);
    
    return result;
}

- (instancetype)__initWithFormat:(NSString *)format arguments:(NSArray *)arguments
{
    __unsafe_unretained id *argList = createVariableArgumentListsFromArray(arguments);
    NSString *result = [self initWithFormat:format, *argList];
    free(argList);
    
    return result;
}

- (instancetype)__initWithFormat:(NSString *)format locale:(id)locale arguments:(NSArray *)arguments
{
    __unsafe_unretained id *argList = createVariableArgumentListsFromArray(arguments);
    NSString *result = [self initWithFormat:format locale:locale, *argList];
    free(argList);
    
    return result;
}

@end
