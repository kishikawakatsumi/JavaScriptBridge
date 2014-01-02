#import "JSBiAd.h"
#import "JSBADBannerView.h"
#import "JSBADInterstitialAd.h"
#import "JSBMPMoviePlayerController.h"
#import "JSBUIViewController.h"

@import ObjectiveC;

@implementation JSBiAd

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([ADBannerView class], @protocol(JSBADBannerView));
    context[@"ADBannerView"] = [ADBannerView class];

    class_addProtocol([ADInterstitialAd class], @protocol(JSBADInterstitialAd));
    context[@"ADInterstitialAd"] = [ADInterstitialAd class];

    class_addProtocol([MPMoviePlayerController class], @protocol(JSBMPMoviePlayerController));
    context[@"MPMoviePlayerController"] = [MPMoviePlayerController class];

    class_addProtocol([UIViewController class], @protocol(JSBUIViewController));
    context[@"UIViewController"] = [UIViewController class];

#pragma clang diagnostic pop
}

@end
