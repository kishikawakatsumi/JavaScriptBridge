#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <CoreVideo/CVPixelBuffer.h>
#import <CoreMedia/CMFormatDescription.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetWriterInputPixelBufferAdaptor <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL marksOutputTrackAsEnabled;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (nonatomic, readonly, getter = isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) float preferredVolume;
@property (nonatomic) CMTimeScale mediaTimeScale;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) id pixelBufferPool;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, copy) NSString *extendedLanguageTag;
@property (nonatomic) CGSize naturalSize;
@property (nonatomic, readonly) id sourceFormatHint;
@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;

+ (AVAssetWriterInputPixelBufferAdaptor *)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(AVAssetWriterInput *)input sourcePixelBufferAttributes:(NSDictionary *)sourcePixelBufferAttributes;

- (id)initWithAssetWriterInput:(AVAssetWriterInput *)input sourcePixelBufferAttributes:(NSDictionary *)sourcePixelBufferAttributes;
- (BOOL)appendPixelBuffer:(id)pixelBuffer withPresentationTime:(CMTime)presentationTime;

#pragma clang diagnostic pop

@end
