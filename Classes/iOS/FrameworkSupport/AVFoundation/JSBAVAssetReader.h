#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <CoreMedia/CMSampleBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetReader <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) AVAssetReaderStatus status;
@property (nonatomic) CMTimeRange timeRange;
@property (nonatomic, readonly) NSArray *outputs;
@property (readonly) NSError *error;
@property (nonatomic, retain, readonly) AVAsset *asset;

+ (AVAssetReader *)assetReaderWithAsset:(AVAsset *)asset error:(NSError **)outError;

- (id)initWithAsset:(AVAsset *)asset error:(NSError **)outError;
- (BOOL)canAddOutput:(AVAssetReaderOutput *)output;
- (void)addOutput:(AVAssetReaderOutput *)output;
- (BOOL)startReading;
- (void)cancelReading;

#pragma clang diagnostic pop

@end
