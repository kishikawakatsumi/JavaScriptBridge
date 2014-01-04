#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIGestureRecognizer;

@protocol JSBUIPanGestureRecognizer <JSExport, JSBUIGestureRecognizer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) NSUInteger minimumNumberOfTouches;
@property (nonatomic) NSUInteger maximumNumberOfTouches;

- (CGPoint)translationInView:(UIView *)view;
- (void)setTranslation:(CGPoint)translation inView:(UIView *)view;
- (CGPoint)velocityInView:(UIView *)view;

#pragma clang diagnostic pop

@end
