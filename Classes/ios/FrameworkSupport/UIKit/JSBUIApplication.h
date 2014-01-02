#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIInterface.h>
#import <UIKit/UIDevice.h>
#import <UIKit/UIAlert.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIResponder;

@protocol JSBUIApplication <JSExport, JSBUIResponder>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UIUserInterfaceLayoutDirection userInterfaceLayoutDirection;
@property (nonatomic, readonly) UIWindow *keyWindow;
@property (nonatomic, assign) id delegate;
@property (nonatomic, copy) NSArray *scheduledLocalNotifications;
@property (nonatomic, getter = isStatusBarHidden) BOOL statusBarHidden;
@property (nonatomic) UIStatusBarStyle statusBarStyle;
@property (nonatomic, retain) UIWindow *window;
@property (nonatomic) UIInterfaceOrientation statusBarOrientation;
@property (nonatomic, readonly) UIBackgroundRefreshStatus backgroundRefreshStatus;
@property (nonatomic, readonly) CGRect statusBarFrame;
@property (nonatomic, readonly) NSTimeInterval statusBarOrientationAnimationDuration;
@property (nonatomic, getter = isProximitySensingEnabled) BOOL proximitySensingEnabled;
@property (nonatomic, readonly) NSTimeInterval backgroundTimeRemaining;
@property (nonatomic) NSInteger applicationIconBadgeNumber;
@property (nonatomic, readonly) NSArray *windows;
@property (nonatomic, getter = isIdleTimerDisabled) BOOL idleTimerDisabled;
@property (nonatomic) BOOL applicationSupportsShakeToEdit;
@property (nonatomic, readonly) UIApplicationState applicationState;
@property (nonatomic, getter = isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;
@property (nonatomic, readonly, getter = isProtectedDataAvailable) BOOL protectedDataAvailable;
@property (nonatomic, readonly) NSString *preferredContentSizeCategory;

+ (UIApplication *)sharedApplication;
+ (void)registerObjectForStateRestoration:(id <UIStateRestoring>)object restorationIdentifier:(NSString *)restorationIdentifier;

- (void)beginIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (BOOL)isIgnoringInteractionEvents;
- (BOOL)openURL:(NSURL *)url;
- (BOOL)canOpenURL:(NSURL *)url;
- (void)sendEvent:(UIEvent *)event;
- (BOOL)sendAction:(SEL)action to:(id)target from:(id)sender forEvent:(UIEvent *)event;
- (void)setStatusBarStyle:(UIStatusBarStyle)statusBarStyle animated:(BOOL)animated;
- (void)setStatusBarHidden:(BOOL)hidden withAnimation:(UIStatusBarAnimation)animation;
- (void)setStatusBarOrientation:(UIInterfaceOrientation)interfaceOrientation animated:(BOOL)animated;
- (NSUInteger)supportedInterfaceOrientationsForWindow:(UIWindow *)window;
- (UIBackgroundTaskIdentifier)beginBackgroundTaskWithExpirationHandler:(void (^)(void))handler;
- (UIBackgroundTaskIdentifier)beginBackgroundTaskWithName:(NSString *)taskName expirationHandler:(void (^)(void))handler;
- (void)endBackgroundTask:(UIBackgroundTaskIdentifier)identifier;
- (void)setMinimumBackgroundFetchInterval:(NSTimeInterval)minimumBackgroundFetchInterval;
- (BOOL)setKeepAliveTimeout:(NSTimeInterval)timeout handler:(void (^)(void))keepAliveHandler;
- (void)clearKeepAliveTimeout;
- (void)registerForRemoteNotificationTypes:(UIRemoteNotificationType)types;
- (void)unregisterForRemoteNotifications;
- (UIRemoteNotificationType)enabledRemoteNotificationTypes;
- (void)presentLocalNotificationNow:(UILocalNotification *)notification;
- (void)scheduleLocalNotification:(UILocalNotification *)notification;
- (void)cancelLocalNotification:(UILocalNotification *)notification;
- (void)cancelAllLocalNotifications;
- (void)beginReceivingRemoteControlEvents;
- (void)endReceivingRemoteControlEvents;
- (void)setNewsstandIconImage:(UIImage *)image;
- (void)extendStateRestoration;
- (void)completeStateRestoration;
- (void)ignoreSnapshotOnNextApplicationLaunch;
- (void)applicationDidFinishLaunching:(UIApplication *)application;
- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)applicationWillResignActive:(UIApplication *)application;
- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application;
- (void)applicationWillTerminate:(UIApplication *)application;
- (void)applicationSignificantTimeChange:(UIApplication *)application;
- (void)application:(UIApplication *)application willChangeStatusBarOrientation:(UIInterfaceOrientation)newStatusBarOrientation duration:(NSTimeInterval)duration;
- (void)application:(UIApplication *)application didChangeStatusBarOrientation:(UIInterfaceOrientation)oldStatusBarOrientation;
- (void)application:(UIApplication *)application willChangeStatusBarFrame:(CGRect)newStatusBarFrame;
- (void)application:(UIApplication *)application didChangeStatusBarFrame:(CGRect)oldStatusBarFrame;
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo;
- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler;
- (void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler;
- (void)application:(UIApplication *)application handleEventsForBackgroundURLSession:(NSString *)identifier completionHandler:(void (^)())completionHandler;
- (void)applicationDidEnterBackground:(UIApplication *)application;
- (void)applicationWillEnterForeground:(UIApplication *)application;
- (void)applicationProtectedDataWillBecomeUnavailable:(UIApplication *)application;
- (void)applicationProtectedDataDidBecomeAvailable:(UIApplication *)application;
- (NSUInteger)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window;
- (UIViewController *)application:(UIApplication *)application viewControllerWithRestorationIdentifierPath:(NSArray *)identifierComponents coder:(NSCoder *)coder;
- (BOOL)application:(UIApplication *)application shouldSaveApplicationState:(NSCoder *)coder;
- (BOOL)application:(UIApplication *)application shouldRestoreApplicationState:(NSCoder *)coder;
- (void)application:(UIApplication *)application willEncodeRestorableStateWithCoder:(NSCoder *)coder;
- (void)application:(UIApplication *)application didDecodeRestorableStateWithCoder:(NSCoder *)coder;
- (void)setStatusBarHidden:(BOOL)hidden animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
