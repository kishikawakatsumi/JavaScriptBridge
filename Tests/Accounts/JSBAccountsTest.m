#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBAccountsTests : XCTestCase

@end

@implementation JSBAccountsTests

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
    [context addScriptingSupport:@"Accounts"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var acaccount = ACAccount.new();"];
    value = context[@"acaccount"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var acaccountcredential = ACAccountCredential.new();"];
    value = context[@"acaccountcredential"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var acaccountstore = ACAccountStore.new();"];
    value = context[@"acaccountstore"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var acaccounttype = ACAccountType.new();"];
    value = context[@"acaccounttype"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
