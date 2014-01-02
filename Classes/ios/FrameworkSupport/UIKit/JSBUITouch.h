#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUITouch <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UITouchPhase phase;
@property (nonatomic, readonly) NSTimeInterval timestamp;
@property (nonatomic, readonly, retain) UIView *view;
@property (nonatomic, readonly, copy) NSArray *gestureRecognizers;
@property (nonatomic, readonly) NSUInteger tapCount;
@property (nonatomic, readonly, retain) UIWindow *window;

- (CGPoint)locationInView:(UIView *)view;
- (CGPoint)previousLocationInView:(UIView *)view;

#pragma clang diagnostic pop

@end
