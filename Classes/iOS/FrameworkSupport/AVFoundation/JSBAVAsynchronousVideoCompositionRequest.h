#import <Foundation/Foundation.h>
#import <AVFoundation/AVBase.h>
#import <CoreVideo/CVPixelBufferPool.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAsynchronousVideoCompositionRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) id videoCompositionInstruction;
@property (nonatomic, readonly) NSArray *sourceTrackIDs;
@property (nonatomic, readonly) BOOL highQualityRendering;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) CMPersistentTrackID passthroughTrackID;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic, readonly) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic, readonly) AVPixelAspectRatio pixelAspectRatio;
@property (nonatomic, readonly) CGSize size;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) BOOL containsTweening;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) CMTimeRange timeRange;
@property (nonatomic, readonly) CMTime compositionTime;
@property (nonatomic, readonly) CGAffineTransform renderTransform;
@property (nonatomic, readonly) BOOL enablePostProcessing;
@property (nonatomic, readonly) AVEdgeWidths edgeWidths;

- (id)sourceFrameByTrackID:(CMPersistentTrackID)trackID;
- (void)finishWithComposedVideoFrame:(id)composedVideoFrame;
- (void)finishWithError:(NSError *)error;
- (void)finishCancelledRequest;

#pragma clang diagnostic pop

@end
