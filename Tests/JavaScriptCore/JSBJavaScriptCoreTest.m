#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBJavaScriptCoreTests : XCTestCase

@end

@implementation JSBJavaScriptCoreTests

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
    [context addScriptingSupport:@"JavaScriptCore"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var jscontext = JSContext.new();"];
    value = context[@"jscontext"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var jsmanagedvalue = JSManagedValue.new();"];
    value = context[@"jsmanagedvalue"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var jsvirtualmachine = JSVirtualMachine.new();"];
    value = context[@"jsvirtualmachine"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
