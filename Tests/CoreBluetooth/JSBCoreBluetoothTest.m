#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBCoreBluetoothTests : XCTestCase

@end

@implementation JSBCoreBluetoothTests

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
    [context addScriptingSupport:@"CoreBluetooth"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var cbattrequest = CBATTRequest.new();"];
    value = context[@"cbattrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbcentral = CBCentral.new();"];
    value = context[@"cbcentral"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbcentralmanager = CBCentralManager.new();"];
    value = context[@"cbcentralmanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbcharacteristic = CBCharacteristic.new();"];
    value = context[@"cbcharacteristic"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbdescriptor = CBDescriptor.new();"];
    value = context[@"cbdescriptor"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbperipheral = CBPeripheral.new();"];
    value = context[@"cbperipheral"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbperipheralmanager = CBPeripheralManager.new();"];
    value = context[@"cbperipheralmanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbservice = CBService.new();"];
    value = context[@"cbservice"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbuuid = CBUUID.new();"];
    value = context[@"cbuuid"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbmutablecharacteristic = CBMutableCharacteristic.new();"];
    value = context[@"cbmutablecharacteristic"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbmutabledescriptor = CBMutableDescriptor.new();"];
    value = context[@"cbmutabledescriptor"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cbmutableservice = CBMutableService.new();"];
    value = context[@"cbmutableservice"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
