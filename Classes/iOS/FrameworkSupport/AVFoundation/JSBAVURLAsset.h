#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>
#import <CoreGraphics/CGAffineTransform.h>
#import <CoreMedia/CMTime.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAsset;

@protocol JSBAVURLAsset <JSExport, JSBAVAsset>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) BOOL hasProtectedContent;
@property (nonatomic, readonly) CMTime duration;
@property (readonly) NSArray *availableChapterLocales;
@property (nonatomic, readonly) BOOL providesPreciseDurationAndTiming;
@property (nonatomic, readonly) AVAssetResourceLoader *resourceLoader;
@property (nonatomic, readonly, getter = isReadable) BOOL readable;
@property (nonatomic, readonly) CGSize naturalSize;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly, getter = isComposable) BOOL composable;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSArray *trackGroups;
@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly) CGAffineTransform preferredTransform;
@property (nonatomic, readonly) AVAssetReferenceRestrictions referenceRestrictions;
@property (nonatomic, readonly, getter = isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;
@property (nonatomic, readonly) AVMetadataItem *creationDate;
@property (nonatomic, readonly, getter = isExportable) BOOL exportable;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) NSArray *availableMediaCharacteristicsWithMediaSelectionOptions;
@property (nonatomic, readonly, getter = isPlayable) BOOL playable;
@property (nonatomic, readonly) NSArray *commonMetadata;

+ (NSArray *)audiovisualTypes;
+ (NSArray *)audiovisualMIMETypes;
+ (BOOL)isPlayableExtendedMIMEType:(NSString *)extendedMIMEType;
+ (AVURLAsset *)URLAssetWithURL:(NSURL *)URL options:(NSDictionary *)options;

- (id)initWithURL:(NSURL *)URL options:(NSDictionary *)options;
- (AVAssetTrack *)compatibleTrackForCompositionTrack:(AVCompositionTrack *)compositionTrack;

#pragma clang diagnostic pop

@end
