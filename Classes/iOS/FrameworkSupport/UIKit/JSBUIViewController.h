#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIStateRestoration.h>

@import UIKit;
@import iAd;
@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBUIResponder;

@protocol JSBUIViewController <JSExport, JSBUIResponder>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) BOOL providesPresentationContextTransitionStyle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *nibName;
@property (nonatomic, readonly) NSArray *childViewControllers;
@property (nonatomic, readonly) UIViewController *parentViewController;
@property (nonatomic, assign) BOOL wantsFullScreenLayout;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly, retain) UIStoryboard *storyboard;
@property (nonatomic, readonly, retain) NSBundle *nibBundle;
@property (nonatomic, assign) UIRectEdge edgesForExtendedLayout;
@property (nonatomic, assign) BOOL extendedLayoutIncludesOpaqueBars;
@property (nonatomic, readonly) UIInterfaceOrientation interfaceOrientation;
@property (nonatomic, assign) UIModalPresentationStyle modalPresentationStyle;
@property (nonatomic, assign) BOOL modalPresentationCapturesStatusBarAppearance;
@property (nonatomic, readwrite, assign) Class restorationClass;
@property (nonatomic, assign) id transitioningDelegate;
@property (nonatomic, readonly, retain) id topLayoutGuide;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly, retain) id bottomLayoutGuide;
@property (nonatomic, readonly, retain) UISearchDisplayController *searchDisplayController;
@property (nonatomic, getter = isEditing) BOOL editing;
@property (nonatomic, retain) UIView *view;
@property (nonatomic, assign) UIModalTransitionStyle modalTransitionStyle;
@property (nonatomic, readonly) UIViewController *modalViewController;
@property (nonatomic, copy) NSString *restorationIdentifier;
@property (nonatomic, assign) BOOL definesPresentationContext;
@property (nonatomic, assign) BOOL automaticallyAdjustsScrollViewInsets;
@property (nonatomic) CGSize preferredContentSize;

@property (nonatomic, readonly, retain) UINavigationItem *navigationItem;
@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic, readonly, retain) UINavigationController *navigationController;

@property (nonatomic, retain) NSArray *toolbarItems;

+ (void)attemptRotationToDeviceOrientation;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
- (void)loadView;
- (void)viewWillUnload;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (BOOL)isViewLoaded;
- (void)performSegueWithIdentifier:(NSString *)identifier sender:(id)sender;
- (BOOL)shouldPerformSegueWithIdentifier:(NSString *)identifier sender:(id)sender;
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender;
JSExportAs(canPerformUnwindSegueActionFromViewControllerWithSender,
- (BOOL)__canPerformUnwindSegueAction:(NSString *)action fromViewController:(UIViewController *)fromViewController withSender:(id)sender);
JSExportAs(viewControllerForUnwindSegueActionFromViewControllerWithSender,
- (UIViewController *)__viewControllerForUnwindSegueAction:(NSString *)action fromViewController:(UIViewController *)fromViewController withSender:(id)sender);
- (UIStoryboardSegue *)segueForUnwindingToViewController:(UIViewController *)toViewController fromViewController:(UIViewController *)fromViewController identifier:(NSString *)identifier;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (BOOL)isBeingPresented;
- (BOOL)isBeingDismissed;
- (BOOL)isMovingToParentViewController;
- (BOOL)isMovingFromParentViewController;
JSExportAs(presentViewControllerAnimatedCompletion,
- (void)__presentViewController:(UIViewController *)viewControllerToPresent animated:(BOOL)flag completion:(JSValue *)completion);
JSExportAs(dismissViewControllerAnimatedCompletion,
- (void)__dismissViewControllerAnimated:(BOOL)flag completion:(JSValue *)completion);
- (void)presentModalViewController:(UIViewController *)modalViewController animated:(BOOL)animated;
- (void)dismissModalViewControllerAnimated:(BOOL)animated;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (UIStatusBarStyle)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation;
- (void)setNeedsStatusBarAppearanceUpdate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation;
- (BOOL)shouldAutorotate;
- (NSUInteger)supportedInterfaceOrientations;
- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation;
- (UIView *)rotatingHeaderView;
- (UIView *)rotatingFooterView;
- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration;
- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation;
- (void)willAnimateRotationToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation duration:(NSTimeInterval)duration;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (UIBarButtonItem *)editButtonItem;
- (void)addChildViewController:(UIViewController *)childController;
- (void)removeFromParentViewController;
JSExportAs(transitionFromViewControllerToViewControllerDurationOptionsAnimationsCompletion,
- (void)__transitionFromViewController:(UIViewController *)fromViewController toViewController:(UIViewController *)toViewController duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(JSValue *)animations completion:(JSValue *)completion);
- (void)beginAppearanceTransition:(BOOL)isAppearing animated:(BOOL)animated;
- (void)endAppearanceTransition;
- (UIViewController *)childViewControllerForStatusBarStyle;
- (UIViewController *)childViewControllerForStatusBarHidden;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)willMoveToParentViewController:(UIViewController *)parent;
- (void)didMoveToParentViewController:(UIViewController *)parent;
- (void)encodeRestorableStateWithCoder:(NSCoder *)coder;
- (void)decodeRestorableStateWithCoder:(NSCoder *)coder;
- (void)applicationFinishedRestoringState;
- (void)updateViewConstraints;
- (void)setToolbarItems:(NSArray *)toolbarItems animated:(BOOL)animated;
- (id <UIViewControllerTransitionCoordinator>)transitionCoordinator;

#pragma mark - iAd

@property (nonatomic, assign) ADInterstitialPresentationPolicy interstitialPresentationPolicy;
@property (nonatomic, assign) BOOL canDisplayBannerAds;
@property (nonatomic, readonly, getter = isPresentingFullScreenAd) BOOL presentingFullScreenAd;
@property (nonatomic, retain, readonly) UIView *originalContentView;
@property (nonatomic, readonly, getter = isDisplayingBannerAd) BOOL displayingBannerAd;

+ (void)prepareInterstitialAds;

- (BOOL)requestInterstitialAdPresentation;
- (BOOL)shouldPresentInterstitialAd;

#pragma mark - MediaPlayer

@property (nonatomic, readonly) MPMoviePlayerController *moviePlayer;

- (void)presentMoviePlayerViewControllerAnimated:(MPMoviePlayerViewController *)moviePlayerViewController;
- (void)dismissMoviePlayerViewControllerAnimated;

#pragma clang diagnostic pop

@end
