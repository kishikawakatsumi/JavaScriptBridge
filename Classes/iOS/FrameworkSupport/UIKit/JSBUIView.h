#import <Foundation/Foundation.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIInterface.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIAppearance.h>
#import <UIKit/UIDynamicBehavior.h>
#import <UIKit/NSLayoutConstraint.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIResponder;

@protocol JSBUIView <JSExport, JSBUIResponder>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, getter = isOpaque) BOOL opaque;
@property (nonatomic) CGRect frame;
@property (nonatomic, getter = isHidden) BOOL hidden;
@property (nonatomic) BOOL autoresizesSubviews;
@property (nonatomic, readonly, copy) NSArray *subviews;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (copy, nonatomic) NSArray *motionEffects;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) NSInteger tag;
@property (nonatomic, readonly, retain) CALayer *layer;
@property (nonatomic, getter = isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) CGRect bounds;
@property (nonatomic, getter = isExclusiveTouch) BOOL exclusiveTouch;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) CGFloat alpha;
@property (nonatomic) BOOL clearsContextBeforeDrawing;
@property (nonatomic, getter = isMultipleTouchEnabled) BOOL multipleTouchEnabled;
@property (nonatomic) UIViewAutoresizing autoresizingMask;
@property (nonatomic) UIViewContentMode contentMode;
@property (nonatomic) CGRect contentStretch;
@property (nonatomic) UIViewTintAdjustmentMode tintAdjustmentMode;
@property (nonatomic, readonly) UIView *superview;
@property (nonatomic, copy) NSArray *gestureRecognizers;
@property (nonatomic) CGPoint center;
@property (nonatomic, copy) NSString *restorationIdentifier;
@property (nonatomic) CGFloat contentScaleFactor;

+ (Class)layerClass;
+ (void)beginAnimations:(NSString *)animationID context:(void *)context;
+ (void)commitAnimations;
+ (void)setAnimationDelegate:(id)delegate;
JSExportAs(setAnimationWillStartSelector,
+ (void)__setAnimationWillStartSelector:(NSString *)selector);
JSExportAs(setAnimationDidStopSelector,
+ (void)__setAnimationDidStopSelector:(NSString *)selector);
+ (void)setAnimationDuration:(NSTimeInterval)duration;
+ (void)setAnimationDelay:(NSTimeInterval)delay;
+ (void)setAnimationStartDate:(NSDate *)startDate;
+ (void)setAnimationCurve:(UIViewAnimationCurve)curve;
+ (void)setAnimationRepeatCount:(float)repeatCount;
+ (void)setAnimationRepeatAutoreverses:(BOOL)repeatAutoreverses;
+ (void)setAnimationBeginsFromCurrentState:(BOOL)fromCurrentState;
+ (void)setAnimationTransition:(UIViewAnimationTransition)transition forView:(UIView *)view cache:(BOOL)cache;
+ (void)setAnimationsEnabled:(BOOL)enabled;
+ (BOOL)areAnimationsEnabled;
JSExportAs(performWithoutAnimation,
+ (void)__performWithoutAnimation:(JSValue *)actionsWithoutAnimation);
JSExportAs(animateWithDurationDelayOptionsAnimationsCompletion,
+ (void)__animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewAnimationOptions)options animations:(JSValue *)animations completion:(JSValue *)completion);
JSExportAs(animateWithDurationAnimationsCompletion,
+ (void)__animateWithDuration:(NSTimeInterval)duration animations:(JSValue *)animations completion:(JSValue *)completion);
JSExportAs(animateWithDurationAnimations,
+ (void)__animateWithDuration:(NSTimeInterval)duration animations:(JSValue *)animations);
JSExportAs(animateWithDurationDelayUsingSpringWithDampingInitialSpringVelocityOptionsAnimationsCompletion,
+ (void)__animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay usingSpringWithDamping:(CGFloat)dampingRatio initialSpringVelocity:(CGFloat)velocity options:(UIViewAnimationOptions)options animations:(JSValue *)animations completion:(JSValue *)completion);
JSExportAs(transitionWithViewDurationOptionsAnimationsCompletion,
+ (void)__transitionWithView:(UIView *)view duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(JSValue *)animations completion:(JSValue *)completion);
JSExportAs(transitionFromViewToViewDurationOptionsCompletion,
+ (void)__transitionFromView:(UIView *)fromView toView:(UIView *)toView duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options completion:(JSValue *)completion);
JSExportAs(performSystemAnimationOnViewsOptionsAnimationsCompletion,
+ (void)__performSystemAnimation:(UISystemAnimation)animation onViews:(NSArray *)views options:(UIViewAnimationOptions)options animations:(JSValue *)parallelAnimations completion:(JSValue *)completion);
JSExportAs(animateKeyframesWithDurationDelayOptionsAnimationsCompletion,
+ (void)__animateKeyframesWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewKeyframeAnimationOptions)options animations:(JSValue *)animations completion:(JSValue *)completion);
JSExportAs(addKeyframeWithRelativeStartTimeRelativeDurationAnimations,
+ (void)__addKeyframeWithRelativeStartTime:(double)frameStartTime relativeDuration:(double)frameDuration animations:(JSValue *)animations);
+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithFrame:(CGRect)frame;
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event;
- (CGPoint)convertPoint:(CGPoint)point toView:(UIView *)view;
- (CGPoint)convertPoint:(CGPoint)point fromView:(UIView *)view;
- (CGRect)convertRect:(CGRect)rect toView:(UIView *)view;
- (CGRect)convertRect:(CGRect)rect fromView:(UIView *)view;
- (CGSize)sizeThatFits:(CGSize)size;
- (void)sizeToFit;
- (void)removeFromSuperview;
- (void)insertSubview:(UIView *)view atIndex:(NSInteger)index;
- (void)exchangeSubviewAtIndex:(NSInteger)index1 withSubviewAtIndex:(NSInteger)index2;
- (void)addSubview:(UIView *)view;
- (void)insertSubview:(UIView *)view belowSubview:(UIView *)siblingSubview;
- (void)insertSubview:(UIView *)view aboveSubview:(UIView *)siblingSubview;
- (void)bringSubviewToFront:(UIView *)view;
- (void)sendSubviewToBack:(UIView *)view;
- (void)didAddSubview:(UIView *)subview;
- (void)willRemoveSubview:(UIView *)subview;
- (void)willMoveToSuperview:(UIView *)newSuperview;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(UIWindow *)newWindow;
- (void)didMoveToWindow;
- (BOOL)isDescendantOfView:(UIView *)view;
- (UIView *)viewWithTag:(NSInteger)tag;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)rect;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(CGRect)rect;
- (void)tintColorDidChange;
- (void)addGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer;
- (void)removeGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;
- (void)addMotionEffect:(UIMotionEffect *)effect;
- (void)removeMotionEffect:(UIMotionEffect *)effect;
- (NSArray *)constraints;
- (void)addConstraint:(NSLayoutConstraint *)constraint;
- (void)addConstraints:(NSArray *)constraints;
- (void)removeConstraint:(NSLayoutConstraint *)constraint;
- (void)removeConstraints:(NSArray *)constraints;
- (void)updateConstraintsIfNeeded;
- (void)updateConstraints;
- (BOOL)needsUpdateConstraints;
- (void)setNeedsUpdateConstraints;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)flag;
- (CGRect)alignmentRectForFrame:(CGRect)frame;
- (CGRect)frameForAlignmentRect:(CGRect)alignmentRect;
- (UIEdgeInsets)alignmentRectInsets;
- (UIView *)viewForBaselineLayout;
- (CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (UILayoutPriority)contentHuggingPriorityForAxis:(UILayoutConstraintAxis)axis;
- (void)setContentHuggingPriority:(UILayoutPriority)priority forAxis:(UILayoutConstraintAxis)axis;
- (UILayoutPriority)contentCompressionResistancePriorityForAxis:(UILayoutConstraintAxis)axis;
- (void)setContentCompressionResistancePriority:(UILayoutPriority)priority forAxis:(UILayoutConstraintAxis)axis;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)targetSize;
- (NSArray *)constraintsAffectingLayoutForAxis:(UILayoutConstraintAxis)axis;
- (BOOL)hasAmbiguousLayout;
- (void)exerciseAmbiguityInLayout;
- (void)encodeRestorableStateWithCoder:(NSCoder *)coder;
- (void)decodeRestorableStateWithCoder:(NSCoder *)coder;
- (UIView *)snapshotViewAfterScreenUpdates:(BOOL)afterUpdates;
- (UIView *)resizableSnapshotViewFromRect:(CGRect)rect afterScreenUpdates:(BOOL)afterUpdates withCapInsets:(UIEdgeInsets)capInsets;
- (BOOL)drawViewHierarchyInRect:(CGRect)rect afterScreenUpdates:(BOOL)afterUpdates;
- (UIViewPrintFormatter *)viewPrintFormatter;
- (void)drawRect:(CGRect)rect forViewPrintFormatter:(UIViewPrintFormatter *)formatter;
- (BOOL)endEditing:(BOOL)force;

#pragma clang diagnostic pop

@end
