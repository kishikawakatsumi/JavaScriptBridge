#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIControl <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly, getter = isTracking) BOOL tracking;
@property (nonatomic, getter = isHighlighted) BOOL highlighted;
@property (nonatomic) UIControlContentHorizontalAlignment contentHorizontalAlignment;
@property (nonatomic, getter = isSelected) BOOL selected;
@property (nonatomic) UIControlContentVerticalAlignment contentVerticalAlignment;
@property (nonatomic, readonly, getter = isTouchInside) BOOL touchInside;
@property (nonatomic, readonly) UIControlState state;

- (BOOL)beginTrackingWithTouch:(UITouch *)touch withEvent:(UIEvent *)event;
- (BOOL)continueTrackingWithTouch:(UITouch *)touch withEvent:(UIEvent *)event;
- (void)endTrackingWithTouch:(UITouch *)touch withEvent:(UIEvent *)event;
- (void)cancelTrackingWithEvent:(UIEvent *)event;
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;
- (void)removeTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;
- (NSSet *)allTargets;
- (UIControlEvents)allControlEvents;
- (NSArray *)actionsForTarget:(id)target forControlEvent:(UIControlEvents)controlEvent;
- (void)sendAction:(SEL)action to:(id)target forEvent:(UIEvent *)event;
- (void)sendActionsForControlEvents:(UIControlEvents)controlEvents;

#pragma clang diagnostic pop

@end
