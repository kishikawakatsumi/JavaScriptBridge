#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIView.h>
#import <UIKit/UIInterface.h>
#import <UIKit/UIFont.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIBarButtonItem.h>
#import <UIKit/UIBarCommon.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUINavigationBar <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL leftItemsSupplementBackButton;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) id delegate;
@property (nonatomic, retain) UIBarButtonItem *backBarButtonItem;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, assign) BOOL hidesBackButton;
@property (nonatomic, retain) UIImage *backIndicatorTransitionMaskImage;
@property (nonatomic, retain) UIImage *backIndicatorImage;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic, assign, getter = isTranslucent) BOOL translucent;
@property (nonatomic, retain) UIBarButtonItem *rightBarButtonItem;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic, assign) UIBarStyle barStyle;
@property (nonatomic, readonly, retain) UINavigationItem *topItem;
@property (nonatomic, copy) NSArray *leftBarButtonItems;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;
@property (nonatomic, readonly, retain) UINavigationItem *backItem;
@property (nonatomic, retain) UIBarButtonItem *leftBarButtonItem;
@property (nonatomic, copy) NSArray *rightBarButtonItems;

- (void)pushNavigationItem:(UINavigationItem *)item animated:(BOOL)animated;
- (UINavigationItem *)popNavigationItemAnimated:(BOOL)animated;
- (void)setItems:(NSArray *)items animated:(BOOL)animated;
- (void)setBackgroundImage:(UIImage *)backgroundImage forBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;
- (UIImage *)backgroundImageForBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;
- (void)setBackgroundImage:(UIImage *)backgroundImage forBarMetrics:(UIBarMetrics)barMetrics;
- (UIImage *)backgroundImageForBarMetrics:(UIBarMetrics)barMetrics;
- (void)setTitleVerticalPositionAdjustment:(CGFloat)adjustment forBarMetrics:(UIBarMetrics)barMetrics;
- (CGFloat)titleVerticalPositionAdjustmentForBarMetrics:(UIBarMetrics)barMetrics;

#pragma clang diagnostic pop

@end
