#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVVideoCompositing.h>
#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVVideoComposition <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CMPersistentTrackID passthroughTrackID;
@property (nonatomic, retain) id backgroundColor;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic, retain, readonly) AVVideoCompositionCoreAnimationTool *animationTool;
@property (nonatomic, readonly) CGSize renderSize;
@property (nonatomic, readonly) CMTime frameDuration;
@property (nonatomic, retain, readonly) Class customVideoCompositorClass;
@property (nonatomic, copy, readonly) NSArray *layerInstructions;
@property (nonatomic, assign, readonly) CMTimeRange timeRange;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, assign, readonly) CMPersistentTrackID trackID;
@property (nonatomic, copy, readonly) NSArray *instructions;
@property (nonatomic, assign, readonly) BOOL enablePostProcessing;

//+ (AVVideoComposition *)videoCompositionWithPropertiesOfAsset:(AVAsset *)asset;
+ (AVMutableVideoComposition *)videoComposition;
+ (AVMutableVideoComposition *)videoCompositionWithPropertiesOfAsset:(AVAsset *)asset;
+ (AVMutableVideoCompositionInstruction *)videoCompositionInstruction;
+ (AVMutableVideoCompositionLayerInstruction *)videoCompositionLayerInstructionWithAssetTrack:(AVAssetTrack *)track;
+ (AVMutableVideoCompositionLayerInstruction *)videoCompositionLayerInstruction;
+ (AVVideoCompositionCoreAnimationTool *)videoCompositionCoreAnimationToolWithAdditionalLayer:(CALayer *)layer asTrackID:(CMPersistentTrackID)trackID;
+ (AVVideoCompositionCoreAnimationTool *)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(CALayer *)videoLayer inLayer:(CALayer *)animationLayer;
+ (AVVideoCompositionCoreAnimationTool *)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(NSArray *)videoLayers inLayer:(CALayer *)animationLayer;

- (BOOL)getTransformRampForTime:(CMTime)time startTransform:(CGAffineTransform *)startTransform endTransform:(CGAffineTransform *)endTransform timeRange:(CMTimeRange *)timeRange;
- (BOOL)getOpacityRampForTime:(CMTime)time startOpacity:(float *)startOpacity endOpacity:(float *)endOpacity timeRange:(CMTimeRange *)timeRange;
- (BOOL)getCropRectangleRampForTime:(CMTime)time startCropRectangle:(CGRect *)startCropRectangle endCropRectangle:(CGRect *)endCropRectangle timeRange:(CMTimeRange *)timeRange;
- (void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(CMTimeRange)timeRange;
- (void)setTransform:(CGAffineTransform)transform atTime:(CMTime)time;
- (void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(CMTimeRange)timeRange;
- (void)setOpacity:(float)opacity atTime:(CMTime)time;
- (void)setCropRectangleRampFromStartCropRectangle:(CGRect)startCropRectangle toEndCropRectangle:(CGRect)endCropRectangle timeRange:(CMTimeRange)timeRange;
- (void)setCropRectangle:(CGRect)cropRectangle atTime:(CMTime)time;
- (CMPersistentTrackID)unusedTrackID;
- (BOOL)isValidForAsset:(AVAsset *)asset timeRange:(CMTimeRange)timeRange validationDelegate:(id <AVVideoCompositionValidationHandling>)validationDelegate;

#pragma clang diagnostic pop

@end
