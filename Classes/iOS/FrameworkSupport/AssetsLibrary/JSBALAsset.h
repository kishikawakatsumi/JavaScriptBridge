#import <Foundation/Foundation.h>
#import <AssetsLibrary/ALAssetsLibrary.h>
#import <CoreGraphics/CoreGraphics.h>

@import AssetsLibrary;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBALAsset <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isEditable) BOOL editable;
@property (nonatomic, readonly) ALAsset *originalAsset;

- (id)valueForProperty:(NSString *)property;
- (ALAssetRepresentation *)defaultRepresentation;
- (ALAssetRepresentation *)representationForUTI:(NSString *)representationUTI;
- (CGImageRef)thumbnail;
- (CGImageRef)aspectRatioThumbnail;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(NSData *)imageData metadata:(NSDictionary *)metadata completionBlock:(ALAssetsLibraryWriteImageCompletionBlock)completionBlock;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(NSURL *)videoPathURL completionBlock:(ALAssetsLibraryWriteVideoCompletionBlock)completionBlock;
- (void)setImageData:(NSData *)imageData metadata:(NSDictionary *)metadata completionBlock:(ALAssetsLibraryWriteImageCompletionBlock)completionBlock;
- (void)setVideoAtPath:(NSURL *)videoPathURL completionBlock:(ALAssetsLibraryWriteVideoCompletionBlock)completionBlock;

#pragma clang diagnostic pop

@end
