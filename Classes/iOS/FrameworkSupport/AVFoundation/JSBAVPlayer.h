#import <AVFoundation/AVBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <CoreMedia/CMSync.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVPlayer <JSExport, JSBNSObject>

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
@property (nonatomic, retain) id masterClock;
@property (nonatomic, getter = isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;
@property (nonatomic) float rate;
@property (nonatomic, readonly) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic, readonly) AVPlayerStatus status;

+ (id)playerWithURL:(NSURL *)URL;
+ (id)playerWithPlayerItem:(AVPlayerItem *)item;

- (id)initWithURL:(NSURL *)URL;
- (id)initWithPlayerItem:(AVPlayerItem *)item;
- (void)play;
- (void)pause;
- (void)replaceCurrentItemWithPlayerItem:(AVPlayerItem *)item;
- (CMTime)currentTime;
- (void)seekToDate:(NSDate *)date;
- (void)seekToDate:(NSDate *)date completionHandler:(void (^)(BOOL finished))completionHandler;
- (void)seekToTime:(CMTime)time;
- (void)seekToTime:(CMTime)time toleranceBefore:(CMTime)toleranceBefore toleranceAfter:(CMTime)toleranceAfter;
- (void)seekToTime:(CMTime)time completionHandler:(void (^)(BOOL finished))completionHandler;
- (void)seekToTime:(CMTime)time toleranceBefore:(CMTime)toleranceBefore toleranceAfter:(CMTime)toleranceAfter completionHandler:(void (^)(BOOL finished))completionHandler;
- (void)setRate:(float)rate time:(CMTime)itemTime atHostTime:(CMTime)hostClockTime;
- (void)prerollAtRate:(float)rate completionHandler:(void (^)(BOOL finished))completionHandler;
- (void)cancelPendingPrerolls;
- (id)addPeriodicTimeObserverForInterval:(CMTime)interval queue:(dispatch_queue_t)queue usingBlock:(void (^)(CMTime time))block;
- (id)addBoundaryTimeObserverForTimes:(NSArray *)times queue:(dispatch_queue_t)queue usingBlock:(void (^)(void))block;
- (void)removeTimeObserver:(id)observer;
- (void)setMediaSelectionCriteria:(AVPlayerMediaSelectionCriteria *)criteria forMediaCharacteristic:(NSString *)mediaCharacteristic;
- (AVPlayerMediaSelectionCriteria *)mediaSelectionCriteriaForMediaCharacteristic:(NSString *)mediaCharacteristic;

#pragma clang diagnostic pop

@end
