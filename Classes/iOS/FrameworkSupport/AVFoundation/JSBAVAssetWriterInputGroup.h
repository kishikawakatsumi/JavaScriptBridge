#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVMediaSelectionGroup.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVMediaSelectionGroup;

@protocol JSBAVAssetWriterInputGroup <JSExport, JSBAVMediaSelectionGroup>

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

+ (AVAssetWriterInputGroup *)assetWriterInputGroupWithInputs:(NSArray *)inputs defaultInput:(AVAssetWriterInput *)defaultInput;

- (id)initWithInputs:(NSArray *)inputs defaultInput:(AVAssetWriterInput *)defaultInput;

#pragma clang diagnostic pop

@end
