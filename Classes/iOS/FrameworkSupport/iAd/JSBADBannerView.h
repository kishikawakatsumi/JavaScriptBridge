#import <UIKit/UIKit.h>

@import iAd;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBADBannerView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, weak) id delegate;
@property (nonatomic, readonly, getter = isBannerViewActionInProgress) BOOL bannerViewActionInProgress;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, readonly) ADAdType adType;
@property (nonatomic, readonly, getter = isBannerLoaded) BOOL bannerLoaded;

+ (CGSize)sizeFromBannerContentSizeIdentifier:(NSString *)contentSizeIdentifier;

- (id)initWithAdType:(ADAdType)type;
- (void)cancelBannerViewAction;

#pragma clang diagnostic pop

@end
