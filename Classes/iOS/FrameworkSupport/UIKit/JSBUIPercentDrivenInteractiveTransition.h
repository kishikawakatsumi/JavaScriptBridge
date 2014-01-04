#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIPercentDrivenInteractiveTransition <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) UIViewAnimationCurve completionCurve;
@property (nonatomic, assign) CGFloat completionSpeed;
@property (readonly) CGFloat percentComplete;
@property (readonly) CGFloat duration;

- (void)updateInteractiveTransition:(CGFloat)percentComplete;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;

#pragma clang diagnostic pop

@end
