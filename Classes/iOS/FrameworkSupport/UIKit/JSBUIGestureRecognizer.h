#import <UIKit/UIGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIGestureRecognizer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readwrite) UIGestureRecognizerState state;

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
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)addTarget:(id)target action:(SEL)action;
- (void)removeTarget:(id)target action:(SEL)action;
- (void)requireGestureRecognizerToFail:(UIGestureRecognizer *)otherGestureRecognizer;
- (CGPoint)locationInView:(UIView *)view;
- (NSUInteger)numberOfTouches;
- (CGPoint)locationOfTouch:(NSUInteger)touchIndex inView:(UIView *)view;

#pragma clang diagnostic pop

@end
