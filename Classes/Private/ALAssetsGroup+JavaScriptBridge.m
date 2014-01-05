//
//  ALAssetsGroup+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/05.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "ALAssetsGroup+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation ALAssetsGroup (JavaScriptBridge)

- (void)__enumerateAssetsUsingBlock:(JSValue *)enumerationFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsGroupEnumerationResultsBlock enumerationBlock = NULL;
    if (!enumerationFunction.isUndefined) {
        enumerationBlock = ^(ALAsset *result, NSUInteger index, BOOL *stop) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (result) {
                [parameters addObject:result];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (index != NSNotFound) {
                [parameters addObject:@(index)];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, enumerationFunction, parameters);
        };
    }
    
    [self enumerateAssetsUsingBlock:enumerationBlock];
}

- (void)__enumerateAssetsWithOptions:(NSEnumerationOptions)options
                          usingBlock:(JSValue *)enumerationFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsGroupEnumerationResultsBlock enumerationBlock = NULL;
    if (!enumerationFunction.isUndefined) {
        enumerationBlock = ^(ALAsset *result, NSUInteger index, BOOL *stop) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (result) {
                [parameters addObject:result];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (index != NSNotFound) {
                [parameters addObject:@(index)];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, enumerationFunction, parameters);
        };
    }
    
    [self enumerateAssetsWithOptions:options usingBlock:enumerationBlock];
}

- (void)__enumerateAssetsAtIndexes:(NSIndexSet *)indexSet
                           options:(NSEnumerationOptions)options
                        usingBlock:(JSValue *)enumerationFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsGroupEnumerationResultsBlock enumerationBlock = NULL;
    if (!enumerationFunction.isUndefined) {
        enumerationBlock = ^(ALAsset *result, NSUInteger index, BOOL *stop) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (result) {
                [parameters addObject:result];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (index != NSNotFound) {
                [parameters addObject:@(index)];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, enumerationFunction, parameters);
        };
    }
    
    [self enumerateAssetsAtIndexes:indexSet options:options usingBlock:enumerationBlock];
}

@end
