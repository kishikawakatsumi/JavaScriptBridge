#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>
#import <CoreVideo/CVPixelBuffer.h>
#import <CoreMedia/CMFormatDescription.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetWriterInput <JSExport, JSBNSObject>

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

+ (AVAssetWriterInput *)assetWriterInputWithMediaType:(NSString *)mediaType outputSettings:(NSDictionary *)outputSettings;
+ (AVAssetWriterInput *)assetWriterInputWithMediaType:(NSString *)mediaType outputSettings:(NSDictionary *)outputSettings sourceFormatHint:(id)sourceFormatHint;

- (id)initWithMediaType:(NSString *)mediaType outputSettings:(NSDictionary *)outputSettings;
- (id)initWithMediaType:(NSString *)mediaType outputSettings:(NSDictionary *)outputSettings sourceFormatHint:(id)sourceFormatHint;
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_t)queue usingBlock:(void (^)(void))block;
- (BOOL)appendSampleBuffer:(id)sampleBuffer;
- (void)markAsFinished;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(AVAssetWriterInput *)input type:(NSString *)trackAssociationType;
- (void)addTrackAssociationWithTrackOfInput:(AVAssetWriterInput *)input type:(NSString *)trackAssociationType;

#pragma clang diagnostic pop

@end
