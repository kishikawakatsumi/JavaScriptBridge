#import <UIKit/UIViewController.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBUIPageViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, getter = isDoubleSided) BOOL doubleSided;
@property (nonatomic, readonly) UIPageViewControllerNavigationOrientation navigationOrientation;
@property (nonatomic, readonly) UIPageViewControllerSpineLocation spineLocation;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (nonatomic, readonly) UIPageViewControllerTransitionStyle transitionStyle;
@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, assign) id delegate;
@property (nonatomic, assign) id dataSource;

- (id)initWithTransitionStyle:(UIPageViewControllerTransitionStyle)style navigationOrientation:(UIPageViewControllerNavigationOrientation)navigationOrientation options:(NSDictionary *)options;
- (void)setViewControllers:(NSArray *)viewControllers direction:(UIPageViewControllerNavigationDirection)direction animated:(BOOL)animated completion:(void (^)(BOOL finished))completion;

#pragma clang diagnostic pop

@end
