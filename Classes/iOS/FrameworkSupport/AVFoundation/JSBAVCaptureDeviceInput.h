#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMFormatDescription.h>
#import <CoreMedia/CMSync.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVCaptureInput;

@protocol JSBAVCaptureDeviceInput <JSExport, JSBAVCaptureInput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)deviceInputWithDevice:(AVCaptureDevice *)device error:(NSError **)outError;

- (id)initWithDevice:(AVCaptureDevice *)device error:(NSError **)outError;

#pragma clang diagnostic pop

@end
