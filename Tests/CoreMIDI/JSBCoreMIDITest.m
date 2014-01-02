#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBCoreMIDITests : XCTestCase

@end

@implementation JSBCoreMIDITests

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
    [context addScriptingSupport:@"CoreMIDI"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var midinetworkconnection = MIDINetworkConnection.new();"];
    value = context[@"midinetworkconnection"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var midinetworkhost = MIDINetworkHost.new();"];
    value = context[@"midinetworkhost"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var midinetworksession = MIDINetworkSession.defaultSession();"];
    value = context[@"midinetworksession"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
