#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetTrack <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) float nominalFrameRate;
@property (nonatomic, readonly) long long totalSampleDataLength;
@property (nonatomic, readonly) CMPersistentTrackID trackID;
@property (nonatomic, readonly) float estimatedDataRate;
@property (nonatomic, readonly, getter = isSelfContained) BOOL selfContained;
@property (nonatomic, readonly) CMTimeRange timeRange;
@property (nonatomic, readonly) NSArray *availableTrackAssociationTypes;
@property (nonatomic, readonly) CMTimeScale naturalTimeScale;
@property (nonatomic, readonly) CGSize naturalSize;
@property (nonatomic, copy, readonly) NSArray *segments;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, copy, readonly) NSString *languageCode;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) CGAffineTransform preferredTransform;
@property (nonatomic, readonly, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) CMTime minFrameDuration;
@property (nonatomic, copy, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) NSArray *formatDescriptions;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly, getter = isPlayable) BOOL playable;

- (BOOL)hasMediaCharacteristic:(NSString *)mediaCharacteristic;
- (AVAssetTrackSegment *)segmentForTrackTime:(CMTime)trackTime;
- (CMTime)samplePresentationTimeForTrackTime:(CMTime)trackTime;
- (NSArray *)metadataForFormat:(NSString *)format;
- (NSArray *)associatedTracksOfType:(NSString *)trackAssociationType;

#pragma clang diagnostic pop

@end
