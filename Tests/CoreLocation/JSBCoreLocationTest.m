#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBCoreLocationTests : XCTestCase

@end

@implementation JSBCoreLocationTests

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
    [context addScriptingSupport:@"CoreLocation"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var clbeacon = CLBeacon.new();"];
    value = context[@"clbeacon"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var clgeocoder = CLGeocoder.new();"];
    value = context[@"clgeocoder"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var clheading = CLHeading.new();"];
    value = context[@"clheading"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cllocation = CLLocation.new();"];
    value = context[@"cllocation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cllocationmanager = CLLocationManager.new();"];
    value = context[@"cllocationmanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var clplacemark = CLPlacemark.new();"];
    value = context[@"clplacemark"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var clregion = CLRegion.new();"];
    value = context[@"clregion"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var clbeaconregion = CLBeaconRegion.new();"];
    value = context[@"clbeaconregion"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var clcircularregion = CLCircularRegion.new();"];
    value = context[@"clcircularregion"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
