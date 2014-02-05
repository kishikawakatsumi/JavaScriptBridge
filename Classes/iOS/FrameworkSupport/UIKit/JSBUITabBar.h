#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIControl.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUITabBar <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic) UIBarStyle barStyle;
@property (nonatomic, assign) UITabBarItem *selectedItem;
@property (nonatomic, getter = isTranslucent) BOOL translucent;
@property (nonatomic) CGFloat itemWidth;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIColor *selectedImageTintColor;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic, assign) id delegate;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic) UITabBarItemPositioning itemPositioning;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic) CGFloat itemSpacing;

- (void)setItems:(NSArray *)items animated:(BOOL)animated;
- (void)beginCustomizingItems:(NSArray *)items;
- (BOOL)endCustomizingAnimated:(BOOL)animated;
- (BOOL)isCustomizing;

#pragma clang diagnostic pop

@end
