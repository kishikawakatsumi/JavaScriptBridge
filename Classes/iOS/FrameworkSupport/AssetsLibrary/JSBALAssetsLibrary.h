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

- (void)enumerateGroupsWithTypes:(ALAssetsGroupType)types usingBlock:(ALAssetsLibraryGroupsEnumerationResultsBlock)enumerationBlock failureBlock:(ALAssetsLibraryAccessFailureBlock)failureBlock;
- (void)assetForURL:(NSURL *)assetURL resultBlock:(ALAssetsLibraryAssetForURLResultBlock)resultBlock failureBlock:(ALAssetsLibraryAccessFailureBlock)failureBlock;
- (void)groupForURL:(NSURL *)groupURL resultBlock:(ALAssetsLibraryGroupResultBlock)resultBlock failureBlock:(ALAssetsLibraryAccessFailureBlock)failureBlock;
- (void)addAssetsGroupAlbumWithName:(NSString *)name resultBlock:(ALAssetsLibraryGroupResultBlock)resultBlock failureBlock:(ALAssetsLibraryAccessFailureBlock)failureBlock;
- (void)writeImageToSavedPhotosAlbum:(CGImageRef)imageRef orientation:(ALAssetOrientation)orientation completionBlock:(ALAssetsLibraryWriteImageCompletionBlock)completionBlock;
- (void)writeImageToSavedPhotosAlbum:(CGImageRef)imageRef metadata:(NSDictionary *)metadata completionBlock:(ALAssetsLibraryWriteImageCompletionBlock)completionBlock;
- (void)writeImageDataToSavedPhotosAlbum:(NSData *)imageData metadata:(NSDictionary *)metadata completionBlock:(ALAssetsLibraryWriteImageCompletionBlock)completionBlock;
- (void)writeVideoAtPathToSavedPhotosAlbum:(NSURL *)videoPathURL completionBlock:(ALAssetsLibraryWriteVideoCompletionBlock)completionBlock;
- (BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(NSURL *)videoPathURL;

#pragma clang diagnostic pop

@end
