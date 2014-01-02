#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioning.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UITabBar.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBUITabBarController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UITabBar *tabBar;
@property (nonatomic, assign) UIViewController *selectedViewController;
@property (nonatomic, readonly) UINavigationController *moreNavigationController;
@property (nonatomic, readonly, retain) UITabBarController *tabBarController;
@property (nonatomic, retain) UITabBarItem *tabBarItem;
@property (nonatomic, copy) NSArray *customizableViewControllers;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, assign) id delegate;
@property (nonatomic) NSUInteger selectedIndex;

- (void)setViewControllers:(NSArray *)viewControllers animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
