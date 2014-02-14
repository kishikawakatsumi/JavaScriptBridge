#import <Foundation/Foundation.h>
#import <SpriteKit/SKPhysicsBody.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKPhysicsJoint;

@protocol JSBSKPhysicsJointSpring <JSExport, JSBSKPhysicsJoint>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (SKPhysicsJointSpring *)jointWithBodyA:(SKPhysicsBody *)bodyA bodyB:(SKPhysicsBody *)bodyB anchorA:(CGPoint)anchorA anchorB:(CGPoint)anchorB;

#pragma clang diagnostic pop

@end
