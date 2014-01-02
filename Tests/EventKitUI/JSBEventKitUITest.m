#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBEventKitUITests : XCTestCase

@end

@implementation JSBEventKitUITests

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
    [context addScriptingSupport:@"EventKitUI"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var ekcalendarchooser = EKCalendarChooser.new();"];
    value = context[@"ekcalendarchooser"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekeventeditviewcontroller = EKEventEditViewController.new();"];
    value = context[@"ekeventeditviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekeventviewcontroller = EKEventViewController.new();"];
    value = context[@"ekeventviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
