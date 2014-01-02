#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBCoreMotionTests : XCTestCase

@end

@implementation JSBCoreMotionTests

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
    [context addScriptingSupport:@"CoreMotion"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var cmattitude = CMAttitude.new();"];
    value = context[@"cmattitude"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmlogitem = CMLogItem.new();"];
    value = context[@"cmlogitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmmotionactivitymanager = CMMotionActivityManager.new();"];
    value = context[@"cmmotionactivitymanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmmotionmanager = CMMotionManager.new();"];
    value = context[@"cmmotionmanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmstepcounter = CMStepCounter.new();"];
    value = context[@"cmstepcounter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmaccelerometerdata = CMAccelerometerData.new();"];
    value = context[@"cmaccelerometerdata"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmdevicemotion = CMDeviceMotion.new();"];
    value = context[@"cmdevicemotion"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmgyrodata = CMGyroData.new();"];
    value = context[@"cmgyrodata"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmmagnetometerdata = CMMagnetometerData.new();"];
    value = context[@"cmmagnetometerdata"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cmmotionactivity = CMMotionActivity.new();"];
    value = context[@"cmmotionactivity"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
