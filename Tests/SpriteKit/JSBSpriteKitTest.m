#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBSpriteKitTests : XCTestCase

@end

@implementation JSBSpriteKitTests

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
    context.exceptionHandler = ^(JSContext *context, JSValue *value) {
        NSLog(@"%@", value);
    };
    [context addScriptingSupport:@"SpriteKit"];
    
    JSValue *value = nil;
    
    [context evaluateScript:@"var skaction = SKAction.new();"];
    value = context[@"skaction"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skkeyframesequence = SKKeyframeSequence.new();"];
    value = context[@"skkeyframesequence"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var uitouch = UITouch.new();"];
    value = context[@"uitouch"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsbody = SKPhysicsBody.new();"];
    value = context[@"skphysicsbody"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicscontact = SKPhysicsContact.new();"];
    value = context[@"skphysicscontact"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsjoint = SKPhysicsJoint.new();"];
    value = context[@"skphysicsjoint"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsworld = SKPhysicsWorld.new();"];
    value = context[@"skphysicsworld"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var sktexture = SKTexture.new();"];
    value = context[@"sktexture"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var sktextureatlas = SKTextureAtlas.new();"];
    value = context[@"sktextureatlas"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var sktransition = SKTransition.new();"];
    value = context[@"sktransition"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var sknode = SKNode.new();"];
    value = context[@"sknode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsjointpin = SKPhysicsJointPin.new();"];
    value = context[@"skphysicsjointpin"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsjointspring = SKPhysicsJointSpring.new();"];
    value = context[@"skphysicsjointspring"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsjointfixed = SKPhysicsJointFixed.new();"];
    value = context[@"skphysicsjointfixed"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsjointsliding = SKPhysicsJointSliding.new();"];
    value = context[@"skphysicsjointsliding"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skphysicsjointlimit = SKPhysicsJointLimit.new();"];
    value = context[@"skphysicsjointlimit"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skview = SKView.new();"];
    value = context[@"skview"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skcropnode = SKCropNode.new();"];
    value = context[@"skcropnode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skeffectnode = SKEffectNode.new();"];
    value = context[@"skeffectnode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skemitternode = SKEmitterNode.new();"];
    value = context[@"skemitternode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var sklabelnode = SKLabelNode.new();"];
    value = context[@"sklabelnode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skshapenode = SKShapeNode.new();"];
    value = context[@"skshapenode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skspritenode = SKSpriteNode.new();"];
    value = context[@"skspritenode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skvideonode = SKVideoNode.new();"];
    value = context[@"skvideonode"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var skscene = SKScene.new();"];
    value = context[@"skscene"];
    XCTAssertTrue(value && !value.isUndefined);
    
}

@end
