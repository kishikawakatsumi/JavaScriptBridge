#import <MediaPlayer/MediaPlayer.h>

@import iAd;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPMoviePlayerController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (void)preparePrerollAds;

- (void)playPrerollAdWithCompletionHandler:(void (^)(NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
