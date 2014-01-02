#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPNowPlayingInfoCenter <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSDictionary *nowPlayingInfo;

+ (MPNowPlayingInfoCenter *)defaultCenter;

#pragma clang diagnostic pop

@end
