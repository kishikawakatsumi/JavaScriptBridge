#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreVideo/CVPixelBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVPlayerItemOutput <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readwrite) NSTimeInterval advanceIntervalForDelegateInvocation;
@property (nonatomic, readonly, readonly) dispatch_queue_t delegateQueue;
@property (nonatomic, readonly, readonly) id delegate;
@property (nonatomic, readwrite) BOOL suppressesPlayerRendering;
@property (nonatomic, copy) NSString *textStylingResolution;

- (CMTime)itemTimeForHostTime:(CFTimeInterval)hostTimeInSeconds;
- (CMTime)itemTimeForMachAbsoluteTime:(int64_t)machAbsoluteTime;

#pragma clang diagnostic pop

@end
