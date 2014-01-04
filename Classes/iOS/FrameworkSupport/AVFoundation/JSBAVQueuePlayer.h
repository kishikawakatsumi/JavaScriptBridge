#import <AVFoundation/AVBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <CoreMedia/CMSync.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVPlayer;

@protocol JSBAVQueuePlayer <JSExport, JSBAVPlayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;
@property (nonatomic) float volume;
@property (nonatomic, readonly, getter = isExternalPlaybackActive) BOOL externalPlaybackActive;
@property (nonatomic, copy) NSString *externalPlaybackVideoGravity;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (nonatomic) BOOL allowsAirPlayVideo;
@property (nonatomic, readonly, getter = isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;
@property (nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically;
@property (nonatomic, readonly) AVPlayerItem *currentItem;
@property (nonatomic) AVPlayerActionAtItemEnd actionAtItemEnd;
@property (nonatomic, getter = isMuted) BOOL muted;
@property (nonatomic, copy) NSString *audioOutputDeviceUniqueID;
@property (nonatomic, retain) __attribute__ ((NSObject)) CMClockRef masterClock;
@property (nonatomic, getter = isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;
@property (nonatomic) float rate;
@property (nonatomic, readonly) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic, readonly) AVPlayerStatus status;

+ (id)queuePlayerWithItems:(NSArray *)items;

- (id)initWithItems:(NSArray *)items;
- (NSArray *)items;
- (void)advanceToNextItem;
- (BOOL)canInsertItem:(AVPlayerItem *)item afterItem:(AVPlayerItem *)afterItem;
- (void)insertItem:(AVPlayerItem *)item afterItem:(AVPlayerItem *)afterItem;
- (void)removeItem:(AVPlayerItem *)item;
- (void)removeAllItems;

#pragma clang diagnostic pop

@end
