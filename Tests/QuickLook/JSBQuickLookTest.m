#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBQuickLookTests : XCTestCase

@end

@implementation JSBQuickLookTests

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
    [context addScriptingSupport:@"QuickLook"];

    JSValue *value = nil;

    [context evaluateScript:@"var qlpreviewcontroller = QLPreviewController.new();"];
    value = context[@"qlpreviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
