#import <Foundation/Foundation.h>
#import <SpriteKit/SKPhysicsBody.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKPhysicsJoint;

@protocol JSBSKPhysicsJointSliding <JSExport, JSBSKPhysicsJoint>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (SKPhysicsJointSliding *)jointWithBodyA:(SKPhysicsBody *)bodyA bodyB:(SKPhysicsBody *)bodyB anchor:(CGPoint)anchor axis:(CGVector)axis;

#pragma clang diagnostic pop

@end
