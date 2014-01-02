#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVMediaSelectionGroup.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetWriter <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *inputGroups;
@property (nonatomic) CMTime movieFragmentInterval;
@property (nonatomic, readonly) NSArray *availableMediaTypes;
@property (nonatomic, copy) NSArray *metadata;
@property (readonly) NSError *error;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (nonatomic, copy, readonly) NSURL *outputURL;
@property (nonatomic, readonly) AVAssetWriterInput *defaultInput;
@property (nonatomic) CMTimeScale movieTimeScale;
@property (nonatomic, readonly, readonly) NSArray *inputs;
@property (readonly) AVAssetWriterStatus status;
@property (nonatomic, copy, readonly) NSString *outputFileType;

+ (AVAssetWriter *)assetWriterWithURL:(NSURL *)outputURL fileType:(NSString *)outputFileType error:(NSError **)outError;

- (id)initWithURL:(NSURL *)outputURL fileType:(NSString *)outputFileType error:(NSError **)outError;
- (BOOL)canApplyOutputSettings:(NSDictionary *)outputSettings forMediaType:(NSString *)mediaType;
- (BOOL)canAddInput:(AVAssetWriterInput *)input;
- (void)addInput:(AVAssetWriterInput *)input;
- (BOOL)startWriting;
- (void)startSessionAtSourceTime:(CMTime)startTime;
- (void)endSessionAtSourceTime:(CMTime)endTime;
- (void)cancelWriting;
- (BOOL)finishWriting;
- (void)finishWritingWithCompletionHandler:(void (^)(void))handler;
- (BOOL)canAddInputGroup:(AVAssetWriterInputGroup *)inputGroup;
- (void)addInputGroup:(AVAssetWriterInputGroup *)inputGroup;

#pragma clang diagnostic pop

@end
