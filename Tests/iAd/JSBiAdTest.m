#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBiAdTests : XCTestCase

@end

@implementation JSBiAdTests

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
    [context addScriptingSupport:@"iAd"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var adbannerview = ADBannerView.new();"];
    value = context[@"adbannerview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var adinterstitialad = ADInterstitialAd.new();"];
    value = context[@"adinterstitialad"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mpmovieplayercontroller = MPMoviePlayerController.new();"];
    value = context[@"mpmovieplayercontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var adbannerview = ADBannerView.new();"];
    value = context[@"adbannerview"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
