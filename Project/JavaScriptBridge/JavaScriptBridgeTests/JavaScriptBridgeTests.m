//
//  JavaScriptBridgeTests.m
//  JavaScriptBridgeTests
//
//  Created by kishikawa katsumi on 2014/01/02.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@interface JavaScriptBridgeTests : XCTestCase

@end

@implementation JavaScriptBridgeTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testGlobalContext
{
    JSContext *context = [JSBScriptingSupport globalContext];
    XCTAssertNotNil(context);
}

@end
