//
//  JSBUIViewControllerTest.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/01/25.
//  Copyright (c) 2014年 kishikawa katsumi. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@interface JSBUIViewControllerTest : XCTestCase

@end

@implementation JSBUIViewControllerTest

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
    
    [context evaluateScript:@"var parentViewController = UIViewController.new();"];
    [context evaluateScript:@"var fromViewController = UIViewController.new();"];
    [context evaluateScript:@"var toViewController = UIViewController.new();"];
    
    [context evaluateScript:@"var window = UIWindow.new();"];
    [context evaluateScript:@"window.rootViewController = parentViewController;"];
    
    [context evaluateScript:@"parentViewController.presentViewControllerAnimatedCompletion(fromViewController, true, function () {}); var a = UIViewController.new();"];
    value = context[@"a"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"fromViewController.dismissViewControllerAnimatedCompletion(true, function () {}); var b = UIViewController.new();"];
    value = context[@"b"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"parentViewController.addChildViewController(fromViewController);"];
    [context evaluateScript:@"parentViewController.addChildViewController(toViewController);"];
    [context evaluateScript:@"parentViewController.transitionFromViewControllerToViewControllerDurationOptionsAnimationsCompletion(fromViewController, toViewController, 1.0, 0, function() {}, function(finished) {}); var c = UIViewController.new();"];
    value = context[@"c"];
    XCTAssertTrue(value && !value.isUndefined);
}

@end
