#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <CoreGraphics/CoreGraphics.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetExportSession <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic, readonly) CMTime maxDuration;
@property (nonatomic, copy) AVVideoComposition *videoComposition;
@property (nonatomic) long long fileLengthLimit;
@property (nonatomic, retain) AVMetadataItemFilter *metadataItemFilter;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain, readonly) AVAsset *asset;
@property (nonatomic, copy) AVAudioMix *audioMix;
@property (nonatomic, readonly) float progress;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (nonatomic, copy) NSURL *outputURL;
@property (nonatomic) CMTimeRange timeRange;
@property (nonatomic, readonly) NSArray *supportedFileTypes;
@property (nonatomic, readonly) long long estimatedOutputFileLength;
@property (nonatomic, readonly) NSString *presetName;
@property (nonatomic, readonly) id customVideoCompositor;
@property (nonatomic, readonly) AVAssetExportSessionStatus status;
@property (nonatomic, copy) NSString *outputFileType;

+ (NSArray *)allExportPresets;
+ (NSArray *)exportPresetsCompatibleWithAsset:(AVAsset *)asset;
+ (void)determineCompatibilityOfExportPreset:(NSString *)presetName withAsset:(AVAsset *)asset outputFileType:(NSString *)outputFileType completionHandler:(void (^)(BOOL compatible))handler;
+ (AVAssetExportSession *)exportSessionWithAsset:(AVAsset *)asset presetName:(NSString *)presetName;

- (id)initWithAsset:(AVAsset *)asset presetName:(NSString *)presetName;
- (void)determineCompatibleFileTypesWithCompletionHandler:(void (^)(NSArray *compatibleFileTypes))handler;
- (void)exportAsynchronouslyWithCompletionHandler:(void (^)(void))handler;
- (void)cancelExport;

#pragma clang diagnostic pop

@end
