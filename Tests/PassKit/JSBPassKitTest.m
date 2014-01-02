#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBPassKitTests : XCTestCase

@end

@implementation JSBPassKitTests

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
    [context addScriptingSupport:@"PassKit"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var pkpass = PKPass.new();"];
    value = context[@"pkpass"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var pkpasslibrary = PKPassLibrary.new();"];
    value = context[@"pkpasslibrary"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var pkaddpassesviewcontroller = PKAddPassesViewController.new();"];
    value = context[@"pkaddpassesviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
