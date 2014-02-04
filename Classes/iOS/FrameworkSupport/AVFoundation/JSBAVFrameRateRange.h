#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMFormatDescription.h>
#include<CoreGraphics/CGBase.h>
#include<CoreGraphics/CGGeometry.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVFrameRateRange <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) float torchLevel;
@property (nonatomic, readonly) id formatDescription;
@property (nonatomic) CGPoint focusPointOfInterest;
@property (nonatomic, readonly) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic) AVCaptureFlashMode flashMode;
@property (nonatomic, readonly, getter = isRampingVideoZoom) BOOL rampingVideoZoom;
@property (nonatomic) AVCaptureTorchMode torchMode;
@property (nonatomic, readonly) CGFloat videoZoomFactorUpscaleThreshold;
@property (nonatomic, readonly, getter = isVideoBinned) BOOL videoBinned;
@property (nonatomic) AVCaptureFocusMode focusMode;
@property (nonatomic, getter = isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;
@property (nonatomic, readonly, getter = isLowLightBoostSupported) BOOL lowLightBoostSupported;
@property (nonatomic) AVCaptureExposureMode exposureMode;
@property (nonatomic, readonly, getter = isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property (nonatomic, readonly) CGFloat videoMaxZoomFactor;
@property (readonly) CMTime minFrameDuration;
@property (nonatomic, readonly, getter = isAdjustingWhiteBalance) BOOL adjustingWhiteBalance;
@property (nonatomic, readonly, getter = isFlashAvailable) BOOL flashAvailable;
@property (nonatomic, readonly) AVCaptureDevicePosition position;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, retain) AVCaptureDeviceFormat *activeFormat;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly, getter = isFocusPointOfInterestSupported) BOOL focusPointOfInterestSupported;
@property (nonatomic, readonly, getter = isConnected) BOOL connected;
@property (nonatomic, readonly, getter = isTorchAvailable) BOOL torchAvailable;
@property (nonatomic, readonly) BOOL hasFlash;
@property (nonatomic) AVCaptureAutoFocusRangeRestriction autoFocusRangeRestriction;
@property (nonatomic) CGPoint exposurePointOfInterest;
@property (nonatomic) BOOL automaticallyEnablesLowLightBoostWhenAvailable;
@property (nonatomic, readonly, getter = isAdjustingExposure) BOOL adjustingExposure;
@property (nonatomic, getter = isSmoothAutoFocusEnabled) BOOL smoothAutoFocusEnabled;
@property (nonatomic) AVCaptureWhiteBalanceMode whiteBalanceMode;
@property (nonatomic, readonly, getter = isLowLightBoostEnabled) BOOL lowLightBoostEnabled;
@property (nonatomic, readonly) BOOL hasTorch;
@property (nonatomic) CGFloat videoZoomFactor;
@property (readonly) CMTime maxFrameDuration;
@property (readonly) Float64 maxFrameRate;
@property (nonatomic, readonly) float videoFieldOfView;
@property (nonatomic, readonly, getter = isFlashActive) BOOL flashActive;
@property (nonatomic, readonly, getter = isAutoFocusRangeRestrictionSupported) BOOL autoFocusRangeRestrictionSupported;
@property (nonatomic) CMTime activeVideoMinFrameDuration;
@property (nonatomic, readonly, getter = isAdjustingFocus) BOOL adjustingFocus;
@property (nonatomic, readonly, getter = isSmoothAutoFocusSupported) BOOL smoothAutoFocusSupported;
@property (nonatomic, readonly) NSArray *formats;
@property (nonatomic, readonly, getter = isExposurePointOfInterestSupported) BOOL exposurePointOfInterestSupported;
@property (nonatomic, readonly, getter = isTorchActive) BOOL torchActive;
@property (nonatomic) CMTime activeVideoMaxFrameDuration;
@property (readonly) Float64 minFrameRate;

#pragma clang diagnostic pop

@end
