#import "JSBMediaPlayer.h"
#import "JSBMPMediaEntity.h"
#import "JSBMPMediaItemArtwork.h"
#import "JSBMPMediaLibrary.h"
#import "JSBMPMediaPredicate.h"
#import "JSBMPMediaItem.h"
#import "JSBMPMediaQuery.h"
#import "JSBMPMediaQuerySection.h"
#import "JSBMPMovieAccessLog.h"
#import "JSBMPMovieErrorLog.h"
#import "JSBMPMovieAccessLogEvent.h"
#import "JSBMPMovieErrorLogEvent.h"
#import "JSBMPTimedMetadata.h"
#import "JSBMPMoviePlayerController.h"
#import "JSBUIViewController.h"
#import "JSBMPMusicPlayerController.h"
#import "JSBMPNowPlayingInfoCenter.h"
#import "JSBMPMediaItemCollection.h"
#import "JSBMPMediaPickerController.h"
#import "JSBMPMediaPropertyPredicate.h"
#import "JSBMPMoviePlayerViewController.h"
#import "JSBMPVolumeView.h"
#import "JSBMPMediaPlaylist.h"

@import ObjectiveC;

@implementation JSBMediaPlayer

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([MPMediaEntity class], @protocol(JSBMPMediaEntity));
    context[@"MPMediaEntity"] = [MPMediaEntity class];

    class_addProtocol([MPMediaItemArtwork class], @protocol(JSBMPMediaItemArtwork));
    context[@"MPMediaItemArtwork"] = [MPMediaItemArtwork class];

    class_addProtocol([MPMediaLibrary class], @protocol(JSBMPMediaLibrary));
    context[@"MPMediaLibrary"] = [MPMediaLibrary class];

    class_addProtocol([MPMediaPredicate class], @protocol(JSBMPMediaPredicate));
    context[@"MPMediaPredicate"] = [MPMediaPredicate class];

    class_addProtocol([MPMediaItem class], @protocol(JSBMPMediaItem));
    context[@"MPMediaItem"] = [MPMediaItem class];

    class_addProtocol([MPMediaQuery class], @protocol(JSBMPMediaQuery));
    context[@"MPMediaQuery"] = [MPMediaQuery class];

    class_addProtocol([MPMediaQuerySection class], @protocol(JSBMPMediaQuerySection));
    context[@"MPMediaQuerySection"] = [MPMediaQuerySection class];

    class_addProtocol([MPMovieAccessLog class], @protocol(JSBMPMovieAccessLog));
    context[@"MPMovieAccessLog"] = [MPMovieAccessLog class];

    class_addProtocol([MPMovieErrorLog class], @protocol(JSBMPMovieErrorLog));
    context[@"MPMovieErrorLog"] = [MPMovieErrorLog class];

    class_addProtocol([MPMovieAccessLogEvent class], @protocol(JSBMPMovieAccessLogEvent));
    context[@"MPMovieAccessLogEvent"] = [MPMovieAccessLogEvent class];

    class_addProtocol([MPMovieErrorLogEvent class], @protocol(JSBMPMovieErrorLogEvent));
    context[@"MPMovieErrorLogEvent"] = [MPMovieErrorLogEvent class];

    class_addProtocol([MPTimedMetadata class], @protocol(JSBMPTimedMetadata));
    context[@"MPTimedMetadata"] = [MPTimedMetadata class];

    class_addProtocol([MPMoviePlayerController class], @protocol(JSBMPMoviePlayerController));
    context[@"MPMoviePlayerController"] = [MPMoviePlayerController class];

    class_addProtocol([UIViewController class], @protocol(JSBUIViewController));
    context[@"UIViewController"] = [UIViewController class];

    class_addProtocol([MPMusicPlayerController class], @protocol(JSBMPMusicPlayerController));
    context[@"MPMusicPlayerController"] = [MPMusicPlayerController class];

    class_addProtocol([MPNowPlayingInfoCenter class], @protocol(JSBMPNowPlayingInfoCenter));
    context[@"MPNowPlayingInfoCenter"] = [MPNowPlayingInfoCenter class];

    class_addProtocol([MPMediaItemCollection class], @protocol(JSBMPMediaItemCollection));
    context[@"MPMediaItemCollection"] = [MPMediaItemCollection class];

    class_addProtocol([MPMediaPickerController class], @protocol(JSBMPMediaPickerController));
    context[@"MPMediaPickerController"] = [MPMediaPickerController class];

    class_addProtocol([MPMediaPropertyPredicate class], @protocol(JSBMPMediaPropertyPredicate));
    context[@"MPMediaPropertyPredicate"] = [MPMediaPropertyPredicate class];

    class_addProtocol([MPMoviePlayerViewController class], @protocol(JSBMPMoviePlayerViewController));
    context[@"MPMoviePlayerViewController"] = [MPMoviePlayerViewController class];

    class_addProtocol([MPVolumeView class], @protocol(JSBMPVolumeView));
    context[@"MPVolumeView"] = [MPVolumeView class];

    class_addProtocol([MPMediaPlaylist class], @protocol(JSBMPMediaPlaylist));
    context[@"MPMediaPlaylist"] = [MPMediaPlaylist class];

#pragma clang diagnostic pop
}

@end
