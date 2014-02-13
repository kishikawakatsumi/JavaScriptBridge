//
//  JavaScriptBridgeTests.m
//  JavaScriptBridgeTests
//
//  Created by kishikawa katsumi on 2014/01/02.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import ObjectiveC;

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
    JSContext *globalContext = [JSBScriptingSupport globalContext];
    XCTAssertNotNil(globalContext);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wundeclared-selector"

- (void)testCustomContext
{
    JSContext *globalContext = [JSBScriptingSupport globalContext];
    XCTAssertNotNil(globalContext);
    
    [globalContext evaluateScript:@"var string = 'string';"];
    
    JSValue *value = nil;
    value = globalContext[@"string"];
    XCTAssertTrue(value && !value.isUndefined);
    XCTAssertEqualObjects(value.toObject, @"string");
    
    JSContext *context = [[JSContext alloc] init];
    context.exceptionHandler = ^(JSContext *context, JSValue *value) {
        NSLog(@"%@", value);
    };
    
    [context addScriptingSupport:@"Foundation"];
    [context addScriptingSupport:@"UIKit"];
    [context addScriptingSupport:@"QuartzCore"];
    
    [context evaluateScript:
     @"var window = UIWindow.alloc().initWithFrame(UIScreen.mainScreen().bounds);"
     @"window.backgroundColor = UIColor.whiteColor();"
     @""
     @"var navigationController = UINavigationController.new();"
     @""
     @"var tableViewController = UITableViewController.new();"
     @"tableViewController.navigationItem.title = 'JavaScriptBridge';"
     @"navigationController.viewControllers = [tableViewController];"
     @""
     @"var MyObject = JSB.defineClass('MyObject : NSObject', {"
     @"  myMethod: function() {"
     @"    return 'myMethod';"
     @"  }"
     @"});"
     @""
     @"var myObject = MyObject.new();"
     @""
     @"window.rootViewController = navigationController;"
     ];
    
    XCTAssertNotNil(context);
    
    value = context[@"string"];
    XCTAssertTrue(value && value.isUndefined);
    
    value = context[@"window"];
    XCTAssertTrue(value && !value.isUndefined);
    
    value = context[@"navigationController"];
    XCTAssertTrue(value && !value.isUndefined);
    
    value = context[@"tableViewController"];
    XCTAssertTrue(value && !value.isUndefined);
    
    value = context[@"myObject"];
    XCTAssertTrue(value && !value.isUndefined);
    
    id object = value.toObject;
    NSString *string = [object performSelector:@selector(myMethod) withObject:nil];
    XCTAssertEqualObjects(string, @"myMethod");
}

- (void)testRedefineClass
{
    JSContext *context = [[JSContext alloc] init];
    context.exceptionHandler = ^(JSContext *context, JSValue *value) {
        NSLog(@"%@", value);
    };
    
    [context addScriptingSupport:@"Foundation"];
    [context addScriptingSupport:@"UIKit"];
    [context addScriptingSupport:@"QuartzCore"];
    
    [context evaluateScript:
     @"var MyObject = JSB.defineClass('MyObject : NSObject', {"
     @"  myMethod: function() {"
     @"    return 'myMethod';"
     @"  }"
     @"});"
     @""
     @"var myObject = MyObject.new();"
     ];
    
    XCTAssertNotNil(context);
    
    JSValue *value = nil;
    
    value = context[@"myObject"];
    XCTAssertTrue(value && !value.isUndefined);
    
    id object1 = value.toObject;
    NSString *string1 = [object1 performSelector:@selector(myMethod) withObject:nil];
    XCTAssertEqualObjects(string1, @"myMethod");
    
    [context evaluateScript:
     @"var MyObject = JSB.defineClass('MyObject : NSObject', {"
     @"  myMethod: function() {"
     @"    return 'myMethod2';"
     @"  },"
     @"  anotherMethod: function() {"
     @"    return 'anotherMethod';"
     @"  }"
     @"});"
     @""
     @"var myObject = MyObject.new();"
     ];
    
    value = context[@"myObject"];
    XCTAssertTrue(value && !value.isUndefined);
    
    id object2 = value.toObject;
    NSString *string2 = [object2 performSelector:@selector(myMethod) withObject:nil];
    XCTAssertEqualObjects(string2, @"myMethod2");
    
    NSString *string3 = [object2 performSelector:@selector(anotherMethod) withObject:nil];
    XCTAssertEqualObjects(string3, @"anotherMethod");
}
#pragma clang diagnostic pop

@end
