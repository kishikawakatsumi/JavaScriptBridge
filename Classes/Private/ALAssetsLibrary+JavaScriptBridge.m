//
//  ALAssetsLibrary+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/05.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "ALAssetsLibrary+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation ALAssetsLibrary (JavaScriptBridge)

- (void)__enumerateGroupsWithTypes:(ALAssetsGroupType)types
                        usingBlock:(JSValue *)enumerationFunction
                      failureBlock:(JSValue *)failureFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryGroupsEnumerationResultsBlock enumerationBlock = NULL;
    if (!enumerationFunction.isUndefined) {
        enumerationBlock = ^(ALAssetsGroup *group, BOOL *stop) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (group) {
                [parameters addObject:group];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, enumerationFunction, parameters);
        };
    }
    
    ALAssetsLibraryAccessFailureBlock failureBlock = NULL;
    if (!failureFunction.isUndefined) {
        failureBlock = ^(NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, failureFunction, parameters);
        };
    }
    
    [self enumerateGroupsWithTypes:types usingBlock:enumerationBlock failureBlock:failureBlock];
}

- (void)__assetForURL:(NSURL *)assetURL
          resultBlock:(JSValue *)resultFunction
         failureBlock:(JSValue *)failureFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryAssetForURLResultBlock resultBlock = NULL;
    if (!resultFunction.isUndefined) {
        resultBlock = ^(ALAsset *asset) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (asset) {
                [parameters addObject:asset];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, resultFunction, parameters);
        };
    }
    
    ALAssetsLibraryAccessFailureBlock failureBlock = NULL;
    if (!failureFunction.isUndefined) {
        failureBlock = ^(NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, failureFunction, parameters);
        };
    }
    
    [self assetForURL:assetURL resultBlock:resultBlock failureBlock:failureBlock];
}

- (void)__groupForURL:(NSURL *)groupURL
          resultBlock:(JSValue *)resultFunction
         failureBlock:(JSValue *)failureFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryGroupResultBlock resultBlock = NULL;
    if (!resultFunction.isUndefined) {
        resultBlock = ^(ALAssetsGroup *group) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (group) {
                [parameters addObject:group];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, resultFunction, parameters);
        };
    }
    
    ALAssetsLibraryAccessFailureBlock failureBlock = NULL;
    if (!failureFunction.isUndefined) {
        failureBlock = ^(NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, failureFunction, parameters);
        };
    }
    
    [self groupForURL:groupURL resultBlock:resultBlock failureBlock:failureBlock];
}

- (void)__addAssetsGroupAlbumWithName:(NSString *)name
                          resultBlock:(JSValue *)resultFunction
                         failureBlock:(JSValue *)failureFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    ALAssetsLibraryGroupResultBlock resultBlock = NULL;
    if (!resultFunction.isUndefined) {
        resultBlock = ^(ALAssetsGroup *group) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (group) {
                [parameters addObject:group];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, resultFunction, parameters);
        };
    }
    
    ALAssetsLibraryAccessFailureBlock failureBlock = NULL;
    if (!failureFunction.isUndefined) {
        failureBlock = ^(NSError *error) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (error) {
                [parameters addObject:error];
            } else {
                [parameters addObject:[NSNull null]];
            }
            
            dispatchFunction(currentSelf, failureFunction, parameters);
        };
    }
    
    [self addAssetsGroupAlbumWithName:name resultBlock:resultBlock failureBlock:failureBlock];
}

- (void)__writeImageToSavedPhotosAlbum:(id)imageRef
                           orientation:(ALAssetOrientation)orientation
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
    
    [self writeImageToSavedPhotosAlbum:(CGImageRef)imageRef orientation:orientation completionBlock:completionBlock];
}

- (void)__writeImageToSavedPhotosAlbum:(id)imageRef
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
    
    [self writeImageToSavedPhotosAlbum:(CGImageRef)imageRef metadata:metadata completionBlock:completionBlock];
}

- (void)__writeImageDataToSavedPhotosAlbum:(NSData *)imageData
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
    
    [self writeImageDataToSavedPhotosAlbum:imageData metadata:metadata completionBlock:completionBlock];
}

- (void)__writeVideoAtPathToSavedPhotosAlbum:(NSURL *)videoPathURL
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
    
    [self writeVideoAtPathToSavedPhotosAlbum:videoPathURL completionBlock:completionBlock];
}

@end
