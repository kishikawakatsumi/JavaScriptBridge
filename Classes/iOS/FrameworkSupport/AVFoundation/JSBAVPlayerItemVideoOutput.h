#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreVideo/CVPixelBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVPlayerItemOutput;

@protocol JSBAVPlayerItemVideoOutput <JSExport, JSBAVPlayerItemOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithPixelBufferAttributes:(NSDictionary *)pixelBufferAttributes;
- (BOOL)hasNewPixelBufferForItemTime:(CMTime)itemTime;
- (id)copyPixelBufferForItemTime:(CMTime)itemTime itemTimeForDisplay:(CMTime *)outItemTimeForDisplay;
- (void)setDelegate:(id <AVPlayerItemOutputPullDelegate>)delegate queue:(dispatch_queue_t)delegateQueue;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(NSTimeInterval)interval;

#pragma clang diagnostic pop

@end
