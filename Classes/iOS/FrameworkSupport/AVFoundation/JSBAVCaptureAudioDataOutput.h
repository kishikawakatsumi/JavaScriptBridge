#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureSession.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <QuartzCore/CALayer.h>
#import <dispatch/dispatch.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVCaptureOutput;

@protocol JSBAVCaptureAudioDataOutput <JSExport, JSBAVCaptureOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)setSampleBufferDelegate:(id <AVCaptureAudioDataOutputSampleBufferDelegate>)sampleBufferDelegate queue:(dispatch_queue_t)sampleBufferCallbackQueue;
- (NSDictionary *)recommendedAudioSettingsForAssetWriterWithOutputFileType:(NSString *)outputFileType;

#pragma clang diagnostic pop

@end
