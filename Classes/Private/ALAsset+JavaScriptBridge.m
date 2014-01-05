//
//  ALAsset+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/05.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "ALAsset+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation ALAsset (JavaScriptBridge)

- (void)__writeModifiedImageDataToSavedPhotosAlbum:(NSData *)imageData
                                          metadata:(NSDictionary *)metadata
                                   completionBlock:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryWriteImageCompletionBlock completionBlock = NULL;
    if (!completionFunction.isUndefined) {
        completionBlock = ^(NSURL *assetURL, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (assetURL) {
                [parameters addObject:assetURL];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, completionFunction, parameters);
        };
    }
    
    [self writeModifiedImageDataToSavedPhotosAlbum:imageData metadata:metadata completionBlock:completionBlock];
}

- (void)__writeModifiedVideoAtPathToSavedPhotosAlbum:(NSURL *)videoPathURL
                                     completionBlock:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryWriteVideoCompletionBlock completionBlock = NULL;
    if (!completionFunction.isUndefined) {
        completionBlock = ^(NSURL *assetURL, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (assetURL) {
                [parameters addObject:assetURL];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, completionFunction, parameters);
        };
    }
    
    [self writeModifiedVideoAtPathToSavedPhotosAlbum:videoPathURL completionBlock:completionBlock];
}

- (void)__setImageData:(NSData *)imageData
              metadata:(NSDictionary *)metadata
       completionBlock:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryWriteImageCompletionBlock completionBlock = NULL;
    if (!completionFunction.isUndefined) {
        completionBlock = ^(NSURL *assetURL, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (assetURL) {
                [parameters addObject:assetURL];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, completionFunction, parameters);
        };
    }
    
    [self setImageData:imageData metadata:metadata completionBlock:completionBlock];
}

- (void)__setVideoAtPath:(NSURL *)videoPathURL
         completionBlock:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryWriteVideoCompletionBlock completionBlock = NULL;
    if (!completionFunction.isUndefined) {
        completionBlock = ^(NSURL *assetURL, NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (assetURL) {
                [parameters addObject:assetURL];
            } else {
                [parameters addObject:[NSNull null]];
            }
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, completionFunction, parameters);
        };
    }
    
    [self setVideoAtPath:videoPathURL completionBlock:completionBlock];
}

@end
