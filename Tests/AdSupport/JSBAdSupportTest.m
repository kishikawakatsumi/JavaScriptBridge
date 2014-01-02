#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBAdSupportTests : XCTestCase

@end

@implementation JSBAdSupportTests

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
    [context addScriptingSupport:@"AdSupport"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var asidentifiermanager = ASIdentifierManager.new();"];
    value = context[@"asidentifiermanager"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
