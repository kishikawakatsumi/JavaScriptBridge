#import <Foundation/Foundation.h>
#import <iAd/ADBannerView.h>

@import iAd;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBADInterstitialAd <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isActionInProgress) BOOL actionInProgress;
@property (nonatomic, weak) id delegate;
@property (nonatomic, readonly, getter = isLoaded) BOOL loaded;

- (void)cancelAction;
- (BOOL)presentInView:(UIView *)containerView;
- (void)presentFromViewController:(UIViewController *)viewController;

#pragma clang diagnostic pop

@end
