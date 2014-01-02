#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBQuartzCoreTests : XCTestCase

@end

@implementation JSBQuartzCoreTests

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
    [context addScriptingSupport:@"Foundation"];
    [context addScriptingSupport:@"QuartzCore"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var caanimation = CAAnimation.new();"];
    value = context[@"caanimation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cadisplaylink = CADisplayLink.new();"];
    value = context[@"cadisplaylink"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var caemitterbehavior = CAEmitterBehavior.new();"];
    value = context[@"caemitterbehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var caemittercell = CAEmitterCell.new();"];
    value = context[@"caemittercell"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var calayer = CALayer.new();"];
    value = context[@"calayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var camediatimingfunction = CAMediaTimingFunction.new();"];
    value = context[@"camediatimingfunction"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var calayer = CALayer.new();"];
    value = context[@"calayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var catransaction = CATransaction.new();"];
    value = context[@"catransaction"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cavaluefunction = CAValueFunction.new();"];
    value = context[@"cavaluefunction"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var catransition = CATransition.new();"];
    value = context[@"catransition"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var caanimationgroup = CAAnimationGroup.new();"];
    value = context[@"caanimationgroup"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var capropertyanimation = CAPropertyAnimation.new();"];
    value = context[@"capropertyanimation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var caeagllayer = CAEAGLLayer.new();"];
    value = context[@"caeagllayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var caemitterlayer = CAEmitterLayer.new();"];
    value = context[@"caemitterlayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cagradientlayer = CAGradientLayer.new();"];
    value = context[@"cagradientlayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var careplicatorlayer = CAReplicatorLayer.new();"];
    value = context[@"careplicatorlayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cascrolllayer = CAScrollLayer.new();"];
    value = context[@"cascrolllayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cashapelayer = CAShapeLayer.new();"];
    value = context[@"cashapelayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var catextlayer = CATextLayer.new();"];
    value = context[@"catextlayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var catiledlayer = CATiledLayer.new();"];
    value = context[@"catiledlayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var catransformlayer = CATransformLayer.new();"];
    value = context[@"catransformlayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cabasicanimation = CABasicAnimation.new();"];
    value = context[@"cabasicanimation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cakeyframeanimation = CAKeyframeAnimation.new();"];
    value = context[@"cakeyframeanimation"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
