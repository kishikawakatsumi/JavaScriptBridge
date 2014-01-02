#import <Foundation/Foundation.h>
#import <MediaPlayer/MPMediaPlayback.h>
#import <UIKit/UIKit.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPTimedMetadata <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSUInteger numberOfServerAddressChanges;
@property (nonatomic, readonly) NSInteger errorStatusCode;
@property (nonatomic, readonly) MPMovieLoadState loadState;
@property (nonatomic) BOOL shouldAutoplay;
@property (nonatomic, readonly) MPMovieAccessLog *accessLog;
@property (nonatomic) MPMovieControlStyle controlStyle;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) BOOL allowsAirPlay;
@property (nonatomic, readonly) NSDictionary *allMetadata;
@property (nonatomic, readonly) NSInteger numberOfDroppedVideoFrames;
@property (nonatomic, readonly) NSString *errorComment;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSString *keyspace;
@property (nonatomic, readonly) NSTimeInterval playableDuration;
@property (nonatomic, readonly, readonly) NSString *URI;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) MPMoviePlaybackState playbackState;
@property (nonatomic) MPMovieSourceType movieSourceType;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic) MPMovieRepeatMode repeatMode;
@property (nonatomic, readonly) id value;
@property (nonatomic) NSTimeInterval initialPlaybackTime;
@property (nonatomic, readonly, getter = isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (nonatomic) MPMovieScalingMode scalingMode;
@property (nonatomic, readonly) CGSize naturalSize;
@property (nonatomic, readonly, readonly) NSData *extendedLogData;
@property (nonatomic, readonly, readonly) NSString *serverAddress;
@property (nonatomic, readonly) NSTimeInterval segmentsDownloadedDuration;
@property (nonatomic, readonly) NSInteger numberOfStalls;
@property (nonatomic, readonly) int64_t numberOfBytesTransferred;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic) BOOL useApplicationAudioSession;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly) MPMovieMediaTypeMask movieMediaTypes;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) NSTimeInterval playbackStartOffset;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, readonly) NSArray *events;
@property (nonatomic) NSTimeInterval endPlaybackTime;
@property (nonatomic, readonly, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSTimeInterval durationWatched;
@property (nonatomic, readonly) NSUInteger numberOfSegmentsDownloaded;
@property (nonatomic, getter = isFullscreen) BOOL fullscreen;
@property (nonatomic, readonly, readonly) NSStringEncoding extendedLogDataStringEncoding;
@property (nonatomic, readonly) MPMovieErrorLog *errorLog;
@property (nonatomic, readonly) BOOL readyForDisplay;
@property (nonatomic, readonly) NSTimeInterval timestamp;

#pragma clang diagnostic pop

@end
