#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMFormatDescription.h>
#import <CoreMedia/CMSync.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVCaptureConnection <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly, getter = isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;
@property (nonatomic, readonly, getter = isActive) BOOL active;
@property (nonatomic) CMTime videoMinFrameDuration;
@property (nonatomic, getter = isVideoMirrored) BOOL videoMirrored;
@property (nonatomic, readonly, getter = isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;
@property (nonatomic, readonly) NSArray *audioChannels;
@property (nonatomic, readonly, getter = isRunning) BOOL running;
@property (nonatomic, readonly, getter = isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property (nonatomic, copy) NSString *sessionPreset;
@property (nonatomic, readonly, getter = isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;
@property (nonatomic, readonly) float averagePowerLevel;
@property (nonatomic) BOOL usesApplicationAudioSession;
@property (nonatomic, readonly, getter = isVideoMirroringSupported) BOOL supportsVideoMirroring;
@property (nonatomic) AVCaptureVideoOrientation videoOrientation;
@property (nonatomic) BOOL automaticallyConfiguresApplicationAudioSession;
@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (nonatomic, readonly) float peakHoldLevel;
@property (nonatomic, readonly) NSArray *inputPorts;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly, getter = isInterrupted) BOOL interrupted;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic) CMTime videoMaxFrameDuration;
@property (nonatomic, readonly) CGFloat videoMaxScaleAndCropFactor;
@property (nonatomic) BOOL enablesVideoStabilizationWhenAvailable;
@property (nonatomic, readonly) id masterClock;
@property (nonatomic) CGFloat videoScaleAndCropFactor;
@property (nonatomic, readonly, getter = isVideoStabilizationSupported) BOOL supportsVideoStabilization;
@property (nonatomic, readonly) AVCaptureOutput *output;

#pragma clang diagnostic pop

@end
