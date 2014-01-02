#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBMessageUITests : XCTestCase

@end

@implementation JSBMessageUITests

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
    [context addScriptingSupport:@"MessageUI"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var mfmailcomposeviewcontroller = MFMailComposeViewController.new();"];
    value = context[@"mfmailcomposeviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mfmessagecomposeviewcontroller = MFMessageComposeViewController.alloc();"];
    value = context[@"mfmessagecomposeviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
