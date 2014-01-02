#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVVideoCompositing.h>
#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVVideoCompositionLayerInstruction;

@protocol JSBAVMutableVideoCompositionLayerInstruction <JSExport, JSBAVVideoCompositionLayerInstruction>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CMPersistentTrackID passthroughTrackID;
@property (nonatomic, retain) __attribute__ ((NSObject)) CGColorRef backgroundColor;
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

+ (AVMutableVideoCompositionLayerInstruction *)videoCompositionLayerInstructionWithAssetTrack:(AVAssetTrack *)track;
+ (AVMutableVideoCompositionLayerInstruction *)videoCompositionLayerInstruction;

- (void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(CMTimeRange)timeRange;
- (void)setTransform:(CGAffineTransform)transform atTime:(CMTime)time;
- (void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(CMTimeRange)timeRange;
- (void)setOpacity:(float)opacity atTime:(CMTime)time;
- (void)setCropRectangleRampFromStartCropRectangle:(CGRect)startCropRectangle toEndCropRectangle:(CGRect)endCropRectangle timeRange:(CMTimeRange)timeRange;
- (void)setCropRectangle:(CGRect)cropRectangle atTime:(CMTime)time;

#pragma clang diagnostic pop

@end
