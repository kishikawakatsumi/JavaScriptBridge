//
//  JSBNSStringTests.m
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2014/02/06.
//  Copyright (c) 2014年 kishikawa katsumi. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@interface JSBNSStringTests : XCTestCase

@end

@implementation JSBNSStringTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testStringWithFormat
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"Foundation"];
    
    JSValue *value = nil;
    
    [context evaluateScript:@"var a = NSString.stringWithFormat('Hello %@!', ['World']);"];
    value = context[@"a"];
    XCTAssertEqualObjects(value.toString, @"Hello World!");
    
    [context evaluateScript:@"var b = NSString.localizedStringWithFormat('Hello %@!', ['World']);"];
    value = context[@"b"];
    XCTAssertEqualObjects(value.toString, @"Hello World!");
}

@end
