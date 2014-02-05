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
