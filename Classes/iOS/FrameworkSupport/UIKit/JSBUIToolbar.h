#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIView.h>
#import <UIKit/UIInterface.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIBarButtonItem.h>
#import <UIKit/UIBarCommon.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIToolbar <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id delegate;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, assign, getter = isTranslucent) BOOL translucent;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) UIBarStyle barStyle;

- (void)setItems:(NSArray *)items animated:(BOOL)animated;
- (void)setBackgroundImage:(UIImage *)backgroundImage forToolbarPosition:(UIBarPosition)topOrBottom barMetrics:(UIBarMetrics)barMetrics;
- (UIImage *)backgroundImageForToolbarPosition:(UIBarPosition)topOrBottom barMetrics:(UIBarMetrics)barMetrics;
- (void)setShadowImage:(UIImage *)shadowImage forToolbarPosition:(UIBarPosition)topOrBottom;
- (UIImage *)shadowImageForToolbarPosition:(UIBarPosition)topOrBottom;

#pragma clang diagnostic pop

@end
