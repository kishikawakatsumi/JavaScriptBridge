#import <UIKit/UIKit.h>

@import iAd;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIViewController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) ADInterstitialPresentationPolicy interstitialPresentationPolicy;
@property (nonatomic, assign) BOOL canDisplayBannerAds;
@property (nonatomic, readonly, getter = isPresentingFullScreenAd) BOOL presentingFullScreenAd;
@property (nonatomic, retain, readonly) UIView *originalContentView;
@property (nonatomic, readonly, getter = isDisplayingBannerAd) BOOL displayingBannerAd;

+ (void)prepareInterstitialAds;

- (BOOL)requestInterstitialAdPresentation;
- (BOOL)shouldPresentInterstitialAd;

#pragma clang diagnostic pop

@end
