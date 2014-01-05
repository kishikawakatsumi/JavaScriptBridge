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
- (id)thumbnail;
- (id)aspectRatioThumbnail;
JSExportAs(writeModifiedImageDataToSavedPhotosAlbumMetadataCompletionBlock,
- (void)__writeModifiedImageDataToSavedPhotosAlbum:(NSData *)imageData
                                          metadata:(NSDictionary *)metadata
                                   completionBlock:(JSValue *)completionBlock);
JSExportAs(writeModifiedVideoAtPathToSavedPhotosAlbumCompletionBlock,
- (void)__writeModifiedVideoAtPathToSavedPhotosAlbum:(NSURL *)videoPathURL
                                     completionBlock:(JSValue *)completionBlock);
JSExportAs(setImageDataMetadataCompletionBlock,
- (void)__setImageData:(NSData *)imageData
              metadata:(NSDictionary *)metadata
       completionBlock:(JSValue *)completionBlock);
JSExportAs(setVideoAtPathCompletionBlock,
- (void)__setVideoAtPath:(NSURL *)videoPathURL
         completionBlock:(JSValue *)completionBlock);

#pragma clang diagnostic pop

@end
