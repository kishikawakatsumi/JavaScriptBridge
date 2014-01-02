#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIView.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIWindow <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) UIScreen *screen;
@property (nonatomic, readonly, getter = isKeyWindow) BOOL keyWindow;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic) UIWindowLevel windowLevel;

- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (void)makeKeyWindow;
- (void)makeKeyAndVisible;
- (void)sendEvent:(UIEvent *)event;
- (CGPoint)convertPoint:(CGPoint)point toWindow:(UIWindow *)window;
- (CGPoint)convertPoint:(CGPoint)point fromWindow:(UIWindow *)window;
- (CGRect)convertRect:(CGRect)rect toWindow:(UIWindow *)window;
- (CGRect)convertRect:(CGRect)rect fromWindow:(UIWindow *)window;

#pragma clang diagnostic pop

@end
