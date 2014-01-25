//
//  JSBUIViewTest.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/25.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@interface JSBUIViewTests : XCTestCase

@end

@implementation JSBUIViewTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testBlockAnimations
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"UIKit"];
    
    JSValue *value = nil;
    
    [context evaluateScript:@"var view = UIView.new();"];
    
    [context evaluateScript:@"UIView.performWithoutAnimation(view); var a = UIView.new();"];
    value = context[@"a"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.animateWithDurationDelayOptionsAnimationsCompletion(0.5, 1.0, 0, function() {}, function(finished) {}); var b = UIView.new();"];
    value = context[@"b"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.animateWithDurationAnimationsCompletion(0.5, function() {}, function(finished) {}); var c = UIView.new();"];
    value = context[@"c"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.animateWithDurationAnimations(0.5, function() {}); var d = UIView.new();"];
    value = context[@"d"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.animateWithDurationDelayUsingSpringWithDampingInitialSpringVelocityOptionsAnimationsCompletion(0.5, 1.0, 0.5, 0.5, 0, function() {}, function(finished) {}); var e = UIView.new();"];
    value = context[@"e"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.transitionWithViewDurationOptionsAnimationsCompletion(view, 0.5, 0, function() {}, function(finished) {}); var f = UIView.new();"];
    value = context[@"f"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.transitionFromViewToViewDurationOptionsCompletion(view, UIView.new(), 0.5, 0, function(finished) {}); var g = UIView.new();"];
    value = context[@"g"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.performSystemAnimationOnViewsOptionsAnimationsCompletion(0, [view], 0.5, 0, function(finished) {}); var h = UIView.new();"];
    value = context[@"h"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"UIView.animateKeyframesWithDurationDelayOptionsAnimationsCompletion(0.5, 1.0, 0, function() {}, function(finished) {}); var i = UIView.new();"];
    value = context[@"i"];
    XCTAssertTrue(value && !value.isUndefined);
#if 0
    [context evaluateScript:@"UIView.addKeyframeWithRelativeStartTimeRelativeDurationAnimations(0.0, 1.0, function() {}); var j = UIView.new();"];
    value = context[@"j"];
    XCTAssertTrue(value && !value.isUndefined);
#endif
}

@end
