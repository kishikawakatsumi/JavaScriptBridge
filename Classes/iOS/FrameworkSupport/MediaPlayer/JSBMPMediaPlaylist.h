#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItemCollection.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBMPMediaItemCollection;

@protocol JSBMPMediaPlaylist <JSExport, JSBMPMediaItemCollection>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
