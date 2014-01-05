#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@import AssetsLibrary;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBALAssetsLibrary <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (ALAuthorizationStatus)authorizationStatus;
+ (void)disableSharedPhotoStreamsSupport;

JSExportAs(enumerateGroupsWithTypesUsingBlockFailureBlock,
- (void)__enumerateGroupsWithTypes:(ALAssetsGroupType)types
                        usingBlock:(JSValue *)enumerationBlock
                      failureBlock:(JSValue *)failureBlock);
JSExportAs(assetForURLResultBlockFailureBlock,
- (void)__assetForURL:(NSURL *)assetURL
          resultBlock:(JSValue *)resultBlock
         failureBlock:(JSValue *)failureBlock);
JSExportAs(groupForURLResultBlockFailureBlock,
- (void)__groupForURL:(NSURL *)groupURL
          resultBlock:(JSValue *)resultBlock
         failureBlock:(JSValue *)failureBlock);
JSExportAs(addAssetsGroupAlbumWithNameResultBlockFailureBlock,
- (void)__addAssetsGroupAlbumWithName:(NSString *)name
                          resultBlock:(JSValue *)resultBlock
                         failureBlock:(JSValue *)failureBlock);
JSExportAs(writeImageToSavedPhotosAlbumOrientationCompletionBlock,
- (void)__writeImageToSavedPhotosAlbum:(id)imageRef
                           orientation:(ALAssetOrientation)orientation
                       completionBlock:(JSValue *)completionBlock);
JSExportAs(writeImageToSavedPhotosAlbumMetadataCompletionBlock,
- (void)__writeImageToSavedPhotosAlbum:(id)imageRef
                              metadata:(NSDictionary *)metadata
                       completionBlock:(JSValue *)completionBlock);
JSExportAs(writeImageDataToSavedPhotosAlbumMetadataCompletionBlock,
- (void)__writeImageDataToSavedPhotosAlbum:(NSData *)imageData
                                  metadata:(NSDictionary *)metadata
                           completionBlock:(JSValue *)completionBlock);
JSExportAs(writeVideoAtPathToSavedPhotosAlbumCompletionBlock,
- (void)__writeVideoAtPathToSavedPhotosAlbum:(NSURL *)videoPathURL
                             completionBlock:(JSValue *)completionBlock);
- (BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(NSURL *)videoPathURL;

#pragma clang diagnostic pop

@end
