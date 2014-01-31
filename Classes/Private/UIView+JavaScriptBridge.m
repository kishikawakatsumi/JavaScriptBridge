//
//  UIView+JavaScriptBridge.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/25.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import "UIView+JavaScriptBridge.h"
#import "JSBMessageForwarding.h"

@implementation UIView (JavaScriptBridge)

+ (void)__setAnimationWillStartSelector:(NSString *)selector
{
    [self setAnimationWillStartSelector:NSSelectorFromString(selector)];
}

+ (void)__setAnimationDidStopSelector:(NSString *)selector
{
    [self setAnimationDidStopSelector:NSSelectorFromString(selector)];
}

#pragma mark -

+ (void)__performWithoutAnimation:(JSValue *)function
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^actionsWithoutAnimation)() = NULL;
    if (!function.isUndefined) {
        actionsWithoutAnimation = ^() {
            dispatchFunction(currentSelf, actionsWithoutAnimation, nil);
        };
    }
    
    [self performWithoutAnimation:actionsWithoutAnimation];
}

+ (void)__animateWithDuration:(NSTimeInterval)duration
                        delay:(NSTimeInterval)delay
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
    
    [self animateWithDuration:duration delay:delay options:options animations:animations completion:completion];
}

+ (void)__animateWithDuration:(NSTimeInterval)duration
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
    
    [self animateWithDuration:duration animations:animations completion:completion];
}

+ (void)__animateWithDuration:(NSTimeInterval)duration animations:(JSValue *)animationsFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^animations)() = NULL;
    if (!animationsFunction.isUndefined) {
        animations = ^() {
            dispatchFunction(currentSelf, animationsFunction, nil);
        };
    }
    
    [self animateWithDuration:duration animations:animations];
}

+ (void)__animateWithDuration:(NSTimeInterval)duration
                        delay:(NSTimeInterval)delay
       usingSpringWithDamping:(CGFloat)dampingRatio
        initialSpringVelocity:(CGFloat)velocity
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
    
    [self animateWithDuration:duration delay:delay usingSpringWithDamping:dampingRatio initialSpringVelocity:velocity options:options animations:animations completion:completion];
}

+ (void)__transitionWithView:(UIView *)view
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
    
    [self transitionWithView:view duration:duration options:options animations:animations completion:completion];
}

+ (void)__transitionFromView:(UIView *)fromView
                      toView:(UIView *)toView
                    duration:(NSTimeInterval)duration
                     options:(UIViewAnimationOptions)options
                  completion:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
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
    
    [self transitionFromView:fromView toView:toView duration:duration options:options completion:completion];
}

+ (void)__performSystemAnimation:(UISystemAnimation)animation
                         onViews:(NSArray *)views
                         options:(UIViewAnimationOptions)options
                      animations:(JSValue *)animationsFunction
                      completion:(JSValue *)completionFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^parallelAnimations)() = NULL;
    if (!animationsFunction.isUndefined) {
        parallelAnimations = ^() {
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
    
    [self performSystemAnimation:animation onViews:views options:options animations:parallelAnimations completion:completion];
}

+ (void)__animateKeyframesWithDuration:(NSTimeInterval)duration
                                 delay:(NSTimeInterval)delay
                               options:(UIViewKeyframeAnimationOptions)options
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
    
    [self animateKeyframesWithDuration:duration delay:delay options:options animations:animations completion:completion];
}

+ (void)__addKeyframeWithRelativeStartTime:(double)frameStartTime
                          relativeDuration:(double)frameDuration
                                animations:(JSValue *)animationsFunction
{
    JSContext *context = [JSContext currentContext];
    id currentSelf = context[@"self"];
    
    void(^animations)() = NULL;
    if (!animationsFunction.isUndefined) {
        animations = ^() {
            dispatchFunction(currentSelf, animationsFunction, nil);
        };
    }
    
    [self addKeyframeWithRelativeStartTime:frameDuration relativeDuration:frameDuration animations:animations];
}

@end
