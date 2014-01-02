#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIScrollView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CGPoint contentOffset;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic, readonly, getter = isDecelerating) BOOL decelerating;
@property (nonatomic) CGFloat decelerationRate;
@property (nonatomic, getter = isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property (nonatomic, assign) id delegate;
@property (nonatomic, readonly, getter = isZooming) BOOL zooming;
@property (nonatomic) BOOL alwaysBounceHorizontal;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) BOOL scrollsToTop;
@property (nonatomic) CGFloat maximumZoomScale;
@property (nonatomic) UIScrollViewKeyboardDismissMode keyboardDismissMode;
@property (nonatomic) CGFloat minimumZoomScale;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, getter = isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic, readonly, getter = isDragging) BOOL dragging;
@property (nonatomic) BOOL bounces;
@property (nonatomic, readonly, getter = isZoomBouncing) BOOL zoomBouncing;
@property (nonatomic, getter = isPagingEnabled) BOOL pagingEnabled;
@property (nonatomic) BOOL delaysContentTouches;
@property (nonatomic) UIEdgeInsets scrollIndicatorInsets;
@property (nonatomic) BOOL alwaysBounceVertical;
@property (nonatomic) CGSize contentSize;
@property (nonatomic) UIEdgeInsets contentInset;
@property (nonatomic) BOOL bouncesZoom;
@property (nonatomic, readonly, getter = isTracking) BOOL tracking;
@property (nonatomic) UIScrollViewIndicatorStyle indicatorStyle;
@property (nonatomic) CGFloat zoomScale;
@property (nonatomic) BOOL canCancelContentTouches;

- (void)setContentOffset:(CGPoint)contentOffset animated:(BOOL)animated;
- (void)scrollRectToVisible:(CGRect)rect animated:(BOOL)animated;
- (void)flashScrollIndicators;
- (BOOL)touchesShouldBegin:(NSSet *)touches withEvent:(UIEvent *)event inContentView:(UIView *)view;
- (BOOL)touchesShouldCancelInContentView:(UIView *)view;
- (void)setZoomScale:(CGFloat)scale animated:(BOOL)animated;
- (void)zoomToRect:(CGRect)rect animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
