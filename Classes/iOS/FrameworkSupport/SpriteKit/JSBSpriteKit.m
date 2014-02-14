#import "JSBSpriteKit.h"
#import "JSBSKAction.h"
#import "JSBSKKeyframeSequence.h"
#import "JSBUITouch.h"
#import "JSBSKPhysicsBody.h"
#import "JSBSKPhysicsContact.h"
#import "JSBSKPhysicsJoint.h"
#import "JSBSKPhysicsWorld.h"
#import "JSBSKTexture.h"
#import "JSBSKTextureAtlas.h"
#import "JSBSKTransition.h"
#import "JSBSKNode.h"
#import "JSBSKPhysicsJointPin.h"
#import "JSBSKPhysicsJointSpring.h"
#import "JSBSKPhysicsJointFixed.h"
#import "JSBSKPhysicsJointSliding.h"
#import "JSBSKPhysicsJointLimit.h"
#import "JSBSKView.h"
#import "JSBSKCropNode.h"
#import "JSBSKEffectNode.h"
#import "JSBSKEmitterNode.h"
#import "JSBSKLabelNode.h"
#import "JSBSKShapeNode.h"
#import "JSBSKSpriteNode.h"
#import "JSBSKVideoNode.h"
#import "JSBSKScene.h"

@import ObjectiveC;

@implementation JSBSpriteKit

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([SKAction class], @protocol(JSBSKAction));
    context[@"SKAction"] = [SKAction class];

    class_addProtocol([SKKeyframeSequence class], @protocol(JSBSKKeyframeSequence));
    context[@"SKKeyframeSequence"] = [SKKeyframeSequence class];

    class_addProtocol([UITouch class], @protocol(JSBUITouch));
    context[@"UITouch"] = [UITouch class];

    class_addProtocol([SKPhysicsBody class], @protocol(JSBSKPhysicsBody));
    context[@"SKPhysicsBody"] = [SKPhysicsBody class];

    class_addProtocol([SKPhysicsContact class], @protocol(JSBSKPhysicsContact));
    context[@"SKPhysicsContact"] = [SKPhysicsContact class];

    class_addProtocol([SKPhysicsJoint class], @protocol(JSBSKPhysicsJoint));
    context[@"SKPhysicsJoint"] = [SKPhysicsJoint class];

    class_addProtocol([SKPhysicsWorld class], @protocol(JSBSKPhysicsWorld));
    context[@"SKPhysicsWorld"] = [SKPhysicsWorld class];

    class_addProtocol([SKTexture class], @protocol(JSBSKTexture));
    context[@"SKTexture"] = [SKTexture class];

    class_addProtocol([SKTextureAtlas class], @protocol(JSBSKTextureAtlas));
    context[@"SKTextureAtlas"] = [SKTextureAtlas class];

    class_addProtocol([SKTransition class], @protocol(JSBSKTransition));
    context[@"SKTransition"] = [SKTransition class];

    class_addProtocol([SKNode class], @protocol(JSBSKNode));
    context[@"SKNode"] = [SKNode class];

    class_addProtocol([SKPhysicsJointPin class], @protocol(JSBSKPhysicsJointPin));
    context[@"SKPhysicsJointPin"] = [SKPhysicsJointPin class];

    class_addProtocol([SKPhysicsJointSpring class], @protocol(JSBSKPhysicsJointSpring));
    context[@"SKPhysicsJointSpring"] = [SKPhysicsJointSpring class];

    class_addProtocol([SKPhysicsJointFixed class], @protocol(JSBSKPhysicsJointFixed));
    context[@"SKPhysicsJointFixed"] = [SKPhysicsJointFixed class];

    class_addProtocol([SKPhysicsJointSliding class], @protocol(JSBSKPhysicsJointSliding));
    context[@"SKPhysicsJointSliding"] = [SKPhysicsJointSliding class];

    class_addProtocol([SKPhysicsJointLimit class], @protocol(JSBSKPhysicsJointLimit));
    context[@"SKPhysicsJointLimit"] = [SKPhysicsJointLimit class];

    class_addProtocol([SKView class], @protocol(JSBSKView));
    context[@"SKView"] = [SKView class];

    class_addProtocol([SKCropNode class], @protocol(JSBSKCropNode));
    context[@"SKCropNode"] = [SKCropNode class];

    class_addProtocol([SKEffectNode class], @protocol(JSBSKEffectNode));
    context[@"SKEffectNode"] = [SKEffectNode class];

    class_addProtocol([SKEmitterNode class], @protocol(JSBSKEmitterNode));
    context[@"SKEmitterNode"] = [SKEmitterNode class];

    class_addProtocol([SKLabelNode class], @protocol(JSBSKLabelNode));
    context[@"SKLabelNode"] = [SKLabelNode class];

    class_addProtocol([SKShapeNode class], @protocol(JSBSKShapeNode));
    context[@"SKShapeNode"] = [SKShapeNode class];

    class_addProtocol([SKSpriteNode class], @protocol(JSBSKSpriteNode));
    context[@"SKSpriteNode"] = [SKSpriteNode class];

    class_addProtocol([SKVideoNode class], @protocol(JSBSKVideoNode));
    context[@"SKVideoNode"] = [SKVideoNode class];

    class_addProtocol([SKScene class], @protocol(JSBSKScene));
    context[@"SKScene"] = [SKScene class];

#pragma clang diagnostic pop
}

@end
