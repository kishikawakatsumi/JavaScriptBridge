#import <AVFoundation/AVBase.h>
#import <QuartzCore/QuartzCore.h>
#import <AVFoundation/AVCaptureSession.h>
#import <AVFoundation/AVAnimation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBAVCaptureVideoPreviewLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isOrientationSupported) BOOL orientationSupported;
@property (nonatomic, readonly, getter = isMirroringSupported) BOOL mirroringSupported;
@property (nonatomic) BOOL automaticallyAdjustsMirroring;
@property (nonatomic, retain) AVCaptureSession *session;
@property (copy) NSString *videoGravity;
@property (nonatomic) AVCaptureVideoOrientation orientation;
@property (nonatomic, getter = isMirrored) BOOL mirrored;
@property (nonatomic, readonly) AVCaptureConnection *connection;

+ (id)layerWithSession:(AVCaptureSession *)session;

- (id)initWithSession:(AVCaptureSession *)session;
- (CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)pointInLayer;
- (CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)captureDevicePointOfInterest;
- (CGRect)metadataOutputRectOfInterestForRect:(CGRect)rectInLayerCoordinates;
- (CGRect)rectForMetadataOutputRectOfInterest:(CGRect)rectInMetadataOutputCoordinates;
- (AVMetadataObject *)transformedMetadataObjectForMetadataObject:(AVMetadataObject *)metadataObject;

#pragma clang diagnostic pop

@end
