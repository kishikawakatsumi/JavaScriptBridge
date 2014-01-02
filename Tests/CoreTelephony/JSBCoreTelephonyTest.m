#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBCoreTelephonyTests : XCTestCase

@end

@implementation JSBCoreTelephonyTests

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
    [context addScriptingSupport:@"CoreTelephony"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var ctcall = CTCall.new();"];
    value = context[@"ctcall"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ctcallcenter = CTCallCenter.new();"];
    value = context[@"ctcallcenter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ctcarrier = CTCarrier.new();"];
    value = context[@"ctcarrier"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ctsubscriber = CTSubscriber.new();"];
    value = context[@"ctsubscriber"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ctsubscriberinfo = CTSubscriberInfo.new();"];
    value = context[@"ctsubscriberinfo"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cttelephonynetworkinfo = CTTelephonyNetworkInfo.new();"];
    value = context[@"cttelephonynetworkinfo"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
