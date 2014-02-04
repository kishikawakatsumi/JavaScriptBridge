#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <CoreMedia/CMSync.h>
#import <CoreGraphics/CGGeometry.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVPlayerItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSTimeInterval durationWatched;
@property (nonatomic, readonly, getter = isPlaybackBufferFull) BOOL playbackBufferFull;
@property (nonatomic, readonly) NSArray *automaticallyLoadedAssetKeys;
@property (nonatomic, readonly) NSTimeInterval startupTime;
@property (nonatomic, readonly) NSInteger mediaRequestsWWAN;
@property (nonatomic, readonly) long long numberOfBytesTransferred;
@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly) id customVideoCompositor;
@property (nonatomic, readonly, readonly) NSArray *events;
@property (nonatomic, readonly) NSInteger downloadOverdue;
@property (nonatomic, readonly) BOOL canPlayReverse;
@property (nonatomic) CMTime forwardPlaybackEndTime;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) double observedBitrateStandardDeviation;
@property (nonatomic, readonly) id timebase;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, getter = isPlaybackBufferEmpty) BOOL playbackBufferEmpty;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly, getter = isPlaybackLikelyToKeepUp) BOOL playbackLikelyToKeepUp;
@property (nonatomic, readonly) AVPlayerItemStatus status;
@property (nonatomic, readonly, readonly) NSString *serverAddress;
@property (nonatomic, readonly) BOOL canStepForward;
@property (nonatomic, readonly) BOOL canPlaySlowReverse;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic, readonly) NSInteger numberOfServerAddressChanges;
@property (nonatomic, readonly) NSInteger numberOfSegmentsDownloaded;
@property (nonatomic, copy) NSArray *textStyleRules;
@property (nonatomic, readonly) BOOL canPlayFastReverse;
@property (nonatomic, readonly) BOOL canStepBackward;
@property (nonatomic, readonly) double observedMaxBitrate;
@property (nonatomic, readonly) NSArray *seekableTimeRanges;
@property (nonatomic, readonly, readonly) NSString *URI;
@property (nonatomic, readonly) NSInteger numberOfStalls;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) double switchBitrate;
@property (nonatomic, readonly, readonly) NSString *playbackSessionID;
@property (nonatomic, copy) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) NSArray *loadedTimeRanges;
@property (nonatomic) CMTime reversePlaybackEndTime;
@property (nonatomic, readonly) BOOL canPlaySlowForward;
@property (nonatomic, readonly) CGSize presentationSize;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) CMTime duration;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) NSTimeInterval segmentsDownloadedDuration;
@property (nonatomic) BOOL seekingWaitsForVideoCompositionRendering;
@property (nonatomic, readonly) NSInteger errorStatusCode;
@property (nonatomic, readonly) NSTimeInterval transferDuration;
@property (nonatomic, readonly) double observedMinBitrate;
@property (nonatomic, readonly) NSTimeInterval playbackStartOffset;
@property (nonatomic, readonly) BOOL canPlayFastForward;
@property (nonatomic, copy) AVAudioMix *audioMix;
@property (nonatomic, readonly) NSString *errorComment;
@property (nonatomic, readonly) NSArray *timedMetadata;
@property (nonatomic, readonly) NSInteger numberOfDroppedVideoFrames;
@property (nonatomic, readonly) NSString *playbackType;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic, readonly) NSInteger numberOfMediaRequests;

+ (AVPlayerItem *)playerItemWithURL:(NSURL *)URL;
+ (AVPlayerItem *)playerItemWithAsset:(AVAsset *)asset;
+ (AVPlayerItem *)playerItemWithAsset:(AVAsset *)asset automaticallyLoadedAssetKeys:(NSArray *)automaticallyLoadedAssetKeys;

- (id)initWithURL:(NSURL *)URL;
- (id)initWithAsset:(AVAsset *)asset;
- (id)initWithAsset:(AVAsset *)asset automaticallyLoadedAssetKeys:(NSArray *)automaticallyLoadedAssetKeys;
- (CMTime)currentTime;
- (void)seekToTime:(CMTime)time;
- (void)seekToTime:(CMTime)time completionHandler:(void (^)(BOOL finished))completionHandler;
- (void)seekToTime:(CMTime)time toleranceBefore:(CMTime)toleranceBefore toleranceAfter:(CMTime)toleranceAfter;
- (void)seekToTime:(CMTime)time toleranceBefore:(CMTime)toleranceBefore toleranceAfter:(CMTime)toleranceAfter completionHandler:(void (^)(BOOL finished))completionHandler;
- (void)cancelPendingSeeks;
- (NSDate *)currentDate;
- (BOOL)seekToDate:(NSDate *)date;
- (BOOL)seekToDate:(NSDate *)date completionHandler:(void (^)(BOOL finished))completionHandler;
- (void)stepByCount:(NSInteger)stepCount;
- (void)selectMediaOption:(AVMediaSelectionOption *)mediaSelectionOption inMediaSelectionGroup:(AVMediaSelectionGroup *)mediaSelectionGroup;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(AVMediaSelectionGroup *)mediaSelectionGroup;
- (AVMediaSelectionOption *)selectedMediaOptionInMediaSelectionGroup:(AVMediaSelectionGroup *)mediaSelectionGroup;
- (AVPlayerItemAccessLog *)accessLog;
- (AVPlayerItemErrorLog *)errorLog;
- (void)addOutput:(AVPlayerItemOutput *)output;
- (void)removeOutput:(AVPlayerItemOutput *)output;

#pragma clang diagnostic pop

@end
