#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreGraphics/CoreGraphics.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetImageGenerator <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CGSize maximumSize;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, copy) NSString *apertureMode;
@property (nonatomic) CMTime requestedTimeToleranceAfter;
@property (nonatomic, copy) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) id customVideoCompositor;
@property (nonatomic) CMTime requestedTimeToleranceBefore;
@property (nonatomic) BOOL appliesPreferredTrackTransform;

+ (AVAssetImageGenerator *)assetImageGeneratorWithAsset:(AVAsset *)asset;

- (id)initWithAsset:(AVAsset *)asset;
- (id)copyCGImageAtTime:(CMTime)requestedTime actualTime:(CMTime *)actualTime error:(NSError **)outError;
- (void)generateCGImagesAsynchronouslyForTimes:(NSArray *)requestedTimes completionHandler:(AVAssetImageGeneratorCompletionHandler)handler;
- (void)cancelAllCGImageGeneration;

#pragma clang diagnostic pop

@end
