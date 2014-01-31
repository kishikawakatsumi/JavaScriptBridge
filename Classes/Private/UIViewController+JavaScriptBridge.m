//
//  UIViewController+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/25.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIViewController+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation UIViewController (JavaScriptBridge)

- (BOOL)__canPerformUnwindSegueAction:(NSString *)action fromViewController:(UIViewController *)fromViewController withSender:(id)sender
{
    return [self canPerformUnwindSegueAction:NSSelectorFromString(action) fromViewController:fromViewController withSender:sender];
}

- (UIViewController *)__viewControllerForUnwindSegueAction:(NSString *)action fromViewController:(UIViewController *)fromViewController withSender:(id)sender
{
    return [self viewControllerForUnwindSegueAction:NSSelectorFromString(action) fromViewController:fromViewController withSender:sender];
}

#pragma mark -

- (void)__presentViewController:(UIViewController *)viewControllerToPresent
                       animated:(BOOL)flag
                     completion:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^completion)() = NULL;
    if (!completionFunction.isUndefined) {
        completion = ^() {
            dispatchFunction(currentSelf, completionFunction, nil);
        };
    }
    
    [self presentViewController:viewControllerToPresent animated:flag completion:completion];
}

- (void)__dismissViewControllerAnimated:(BOOL)flag completion:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^completion)() = NULL;
    if (!completionFunction.isUndefined) {
        completion = ^() {
            dispatchFunction(currentSelf, completionFunction, nil);
        };
    }
    
    [self dismissViewControllerAnimated:flag completion:completion];
}

- (void)__transitionFromViewController:(UIViewController *)fromViewController
                      toViewController:(UIViewController *)toViewController
                              duration:(NSTimeInterval)duration
                               options:(UIViewAnimationOptions)options
                            animations:(JSValue *)animationsFunction
                            completion:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^animations)() = NULL;
    if (!animationsFunction.isUndefined) {
        animations = ^() {
            dispatchFunction(currentSelf, animationsFunction, nil);
        };
    }
    
    void(^completion)(BOOL) = NULL;
    if (!completionFunction.isUndefined) {
        completion = ^(BOOL finished) {
            NSMutableArray *parameters = [[NSMutableArray alloc] init];
            if (finished) {
                [parameters addObject:@YES];
            } else {
                [parameters addObject:@NO];
            }
            
            dispatchFunction(currentSelf, completionFunction, parameters);
        };
    }
    
    [self transitionFromViewController:fromViewController toViewController:toViewController duration:duration options:options animations:animations completion:completion];
}

@end
