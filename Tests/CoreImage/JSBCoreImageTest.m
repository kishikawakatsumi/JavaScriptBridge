#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBCoreImageTests : XCTestCase

@end

@implementation JSBCoreImageTests

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
    [context addScriptingSupport:@"CoreImage"];
    [context addScriptingSupport:@"OpenGLES"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var cicolor = CIColor.new();"];
    value = context[@"cicolor"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cicontext = CIContext.contextWithEAGLContext(EAGLContext.alloc().initWithAPI(2));"];
    value = context[@"cicontext"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cidetector = CIDetector.detectorOfTypeContextOptions('CIDetectorTypeFace', cicontext, null);"];
    value = context[@"cidetector"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cifeature = CIFeature.alloc();"];
    value = context[@"cifeature"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cifilter = CIFilter.new();"];
    value = context[@"cifilter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ciimage = CIImage.new();"];
    value = context[@"ciimage"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var civector = CIVector.new();"];
    value = context[@"civector"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cifacefeature = CIFaceFeature.new();"];
    value = context[@"cifacefeature"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
