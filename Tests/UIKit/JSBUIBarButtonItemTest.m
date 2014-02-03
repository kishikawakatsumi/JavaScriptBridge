//
//  JSBUIBarButtonItemTest.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/03.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@interface JSBUIBarButtonItemTests : XCTestCase

@end

@implementation JSBUIBarButtonItemTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testInstantiation
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"UIKit"];
    
    JSValue *value = nil;
    
    [context evaluateScript:@"var a = UIBarButtonItem.alloc().initWithImageStyleTargetAction(null, 0, null, null);"];
    value = context[@"a"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var b = UIBarButtonItem.alloc().initWithImageLandscapeImagePhoneStyleTargetAction(null, null, 0, null, null);"];
    value = context[@"b"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var c = UIBarButtonItem.alloc().initWithTitleStyleTargetAction('Title', 0, null, null);"];
    value = context[@"c"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var c = UIBarButtonItem.alloc().initWithBarButtonSystemItemTargetAction(0, null, null);"];
    value = context[@"c"];
    XCTAssertTrue(value && !value.isUndefined);
}

@end
