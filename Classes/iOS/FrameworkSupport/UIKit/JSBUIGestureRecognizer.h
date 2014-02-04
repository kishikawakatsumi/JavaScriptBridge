#import <UIKit/UIGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIGestureRecognizer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readwrite) UIGestureRecognizerState state;
@property(nonatomic, assign) id <UIGestureRecognizerDelegate> delegate;
@property(nonatomic, getter = isEnabled) BOOL enabled;
@property(nonatomic, readonly) UIView *view;
@property(nonatomic) BOOL cancelsTouchesInView;
@property(nonatomic) BOOL delaysTouchesBegan;
@property(nonatomic) BOOL delaysTouchesEnded;

- (void)ignoreTouch:(UITouch *)touch forEvent:(UIEvent *)event;
- (void)reset;
- (BOOL)canPreventGestureRecognizer:(UIGestureRecognizer *)preventedGestureRecognizer;
- (BOOL)canBePreventedByGestureRecognizer:(UIGestureRecognizer *)preventingGestureRecognizer;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;
JSExportAs(initWithTargetAction,
- (id)__initWithTarget:(id)target action:(NSString *)action);
JSExportAs(addTargetAction,
- (void)__addTarget:(id)target action:(NSString *)action);
JSExportAs(removeTargetAction,
- (void)__removeTarget:(id)target action:(NSString *)action);
- (void)requireGestureRecognizerToFail:(UIGestureRecognizer *)otherGestureRecognizer;
- (CGPoint)locationInView:(UIView *)view;
- (NSUInteger)numberOfTouches;
- (CGPoint)locationOfTouch:(NSUInteger)touchIndex inView:(UIView *)view;

#pragma clang diagnostic pop

@end
