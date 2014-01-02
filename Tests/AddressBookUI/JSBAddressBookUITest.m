#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBAddressBookUITests : XCTestCase

@end

@implementation JSBAddressBookUITests

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
    [context addScriptingSupport:@"AddressBookUI"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var abnewpersonviewcontroller = ABNewPersonViewController.new();"];
    value = context[@"abnewpersonviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var abpeoplepickernavigationcontroller = ABPeoplePickerNavigationController.new();"];
    value = context[@"abpeoplepickernavigationcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var abpersonviewcontroller = ABPersonViewController.new();"];
    value = context[@"abpersonviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var abunknownpersonviewcontroller = ABUnknownPersonViewController.new();"];
    value = context[@"abunknownpersonviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
