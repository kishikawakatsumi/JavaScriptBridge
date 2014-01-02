#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBOpenGLESTests : XCTestCase

@end

@implementation JSBOpenGLESTests

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
    [context addScriptingSupport:@"OpenGLES"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var eaglsharegroup = EAGLSharegroup.alloc();"];
    value = context[@"eaglsharegroup"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var eaglcontext = EAGLContext.new();"];
    value = context[@"eaglcontext"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var eaglcontext = EAGLContext.new();"];
    value = context[@"eaglcontext"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
