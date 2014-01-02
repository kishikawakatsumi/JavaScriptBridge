#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBSafariServicesTests : XCTestCase

@end

@implementation JSBSafariServicesTests

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
    [context addScriptingSupport:@"SafariServices"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var ssreadinglist = SSReadingList.defaultReadingList();"];
    value = context[@"ssreadinglist"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
