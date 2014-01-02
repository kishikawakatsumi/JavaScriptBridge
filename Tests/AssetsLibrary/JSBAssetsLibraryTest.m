#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBAssetsLibraryTests : XCTestCase

@end

@implementation JSBAssetsLibraryTests

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
    [context addScriptingSupport:@"AssetsLibrary"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var alasset = ALAsset.new();"];
    value = context[@"alasset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var alassetrepresentation = ALAssetRepresentation.new();"];
    value = context[@"alassetrepresentation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var alassetsfilter = ALAssetsFilter.new();"];
    value = context[@"alassetsfilter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var alassetsgroup = ALAssetsGroup.new();"];
    value = context[@"alassetsgroup"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var alassetslibrary = ALAssetsLibrary.new();"];
    value = context[@"alassetslibrary"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
