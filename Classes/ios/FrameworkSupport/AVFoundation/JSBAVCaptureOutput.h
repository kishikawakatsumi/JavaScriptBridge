#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureSession.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <QuartzCore/CALayer.h>
#import <dispatch/dispatch.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVCaptureOutput <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *availableImageDataCVPixelFormatTypes;
@property (nonatomic, readonly, getter = isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (nonatomic, readonly, readonly) dispatch_queue_t sampleBufferCallbackQueue;
@property (nonatomic) CMTime maxRecordedDuration;
@property (nonatomic, readonly) NSArray *connections;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) int64_t maxRecordedFileSize;
@property (nonatomic, readonly) CMTime recordedDuration;
@property (nonatomic, copy) NSDictionary *outputSettings;
@property (nonatomic) int64_t minFreeDiskSpaceLimit;
@property (nonatomic, readonly) NSArray *availableMetadataObjectTypes;
@property (nonatomic, readonly, getter = isStillImageStabilizationActive) BOOL stillImageStabilizationActive;
@property (nonatomic, readonly) int64_t recordedFileSize;
@property (nonatomic, readonly) dispatch_queue_t metadataObjectsCallbackQueue;
@property (readonly, getter = isCapturingStillImage) BOOL capturingStillImage;
@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic, copy) NSArray *metadataObjectTypes;
@property (nonatomic, readonly) id metadataObjectsDelegate;
@property (nonatomic, copy) NSDictionary *videoSettings;
@property (nonatomic) CGRect rectOfInterest;
@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (nonatomic) CMTime movieFragmentInterval;
@property (nonatomic) CMTime minFrameDuration;
@property (nonatomic, readonly) NSArray *availableImageDataCodecTypes;
@property (nonatomic, readonly, getter = isRecording) BOOL recording;
@property (nonatomic, readonly) NSArray *availableVideoCVPixelFormatTypes;
@property (nonatomic, readonly, readonly) id sampleBufferDelegate;

- (AVCaptureConnection *)connectionWithMediaType:(NSString *)mediaType;
- (AVMetadataObject *)transformedMetadataObjectForMetadataObject:(AVMetadataObject *)metadataObject connection:(AVCaptureConnection *)connection;
- (CGRect)metadataOutputRectOfInterestForRect:(CGRect)rectInOutputCoordinates;
- (CGRect)rectForMetadataOutputRectOfInterest:(CGRect)rectInMetadataOutputCoordinates;

#pragma clang diagnostic pop

@end
