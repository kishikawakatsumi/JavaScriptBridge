#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureSession.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <QuartzCore/CALayer.h>
#import <dispatch/dispatch.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVCaptureFileOutput;

@protocol JSBAVCaptureMovieFileOutput <JSExport, JSBAVCaptureFileOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
