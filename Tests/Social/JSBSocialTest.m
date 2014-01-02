#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBSocialTests : XCTestCase

@end

@implementation JSBSocialTests

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
    [context addScriptingSupport:@"Social"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var slrequest = SLRequest.alloc();"];
    value = context[@"slrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var slcomposeviewcontroller = SLComposeViewController.new();"];
    value = context[@"slcomposeviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
