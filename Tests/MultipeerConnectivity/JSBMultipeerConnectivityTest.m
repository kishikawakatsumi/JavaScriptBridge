#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBMultipeerConnectivityTests : XCTestCase

@end

@implementation JSBMultipeerConnectivityTests

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
    [context addScriptingSupport:@"MultipeerConnectivity"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var mcadvertiserassistant = MCAdvertiserAssistant.new();"];
    value = context[@"mcadvertiserassistant"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mcnearbyserviceadvertiser = MCNearbyServiceAdvertiser.alloc();"];
    value = context[@"mcnearbyserviceadvertiser"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mcnearbyservicebrowser = MCNearbyServiceBrowser.alloc();"];
    value = context[@"mcnearbyservicebrowser"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mcpeerid = MCPeerID.new();"];
    value = context[@"mcpeerid"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mcsession = MCSession.new();"];
    value = context[@"mcsession"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mcbrowserviewcontroller = MCBrowserViewController.alloc();"];
    value = context[@"mcbrowserviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
