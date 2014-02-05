#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureSession.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <QuartzCore/CALayer.h>
#import <dispatch/dispatch.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVCaptureOutput;

@protocol JSBAVCaptureFileOutput <JSExport, JSBAVCaptureOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)startRecordingToOutputFileURL:(NSURL *)outputFileURL recordingDelegate:(id <AVCaptureFileOutputRecordingDelegate>)delegate;
- (void)stopRecording;

#pragma clang diagnostic pop

@end
