#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBTwitterTests : XCTestCase

@end

@implementation JSBTwitterTests

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
    [context addScriptingSupport:@"Twitter"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var twrequest = TWRequest.new();"];
    value = context[@"twrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var twtweetcomposeviewcontroller = TWTweetComposeViewController.new();"];
    value = context[@"twtweetcomposeviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
