#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureSession.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <QuartzCore/CALayer.h>
#import <dispatch/dispatch.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVCaptureOutput;

@protocol JSBAVCaptureVideoDataOutput <JSExport, JSBAVCaptureOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)setSampleBufferDelegate:(id <AVCaptureVideoDataOutputSampleBufferDelegate>)sampleBufferDelegate queue:(dispatch_queue_t)sampleBufferCallbackQueue;
- (NSDictionary *)recommendedVideoSettingsForAssetWriterWithOutputFileType:(NSString *)outputFileType;

#pragma clang diagnostic pop

@end
