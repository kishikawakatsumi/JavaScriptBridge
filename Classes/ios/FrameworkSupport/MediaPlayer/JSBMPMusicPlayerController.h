#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItemCollection.h>
#import <MediaPlayer/MPMediaItem.h>
#import <MediaPlayer/MPMediaQuery.h>
#import <MediaPlayer/MPMediaPlayback.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPMusicPlayerController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) MPMusicRepeatMode repeatMode;
@property (nonatomic) MPMusicShuffleMode shuffleMode;
@property (nonatomic) float volume;
@property (nonatomic, readonly) NSUInteger indexOfNowPlayingItem;
@property (nonatomic, readonly) MPMusicPlaybackState playbackState;
@property (nonatomic, copy) MPMediaItem *nowPlayingItem;

+ (MPMusicPlayerController *)applicationMusicPlayer;
+ (MPMusicPlayerController *)iPodMusicPlayer;

- (void)setQueueWithQuery:(MPMediaQuery *)query;
- (void)setQueueWithItemCollection:(MPMediaItemCollection *)itemCollection;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;

#pragma clang diagnostic pop

@end
