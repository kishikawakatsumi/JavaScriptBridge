#import <Foundation/Foundation.h>
#import <SpriteKit/SKPhysicsBody.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKPhysicsJoint;

@protocol JSBSKPhysicsJointFixed <JSExport, JSBSKPhysicsJoint>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (SKPhysicsJointFixed *)jointWithBodyA:(SKPhysicsBody *)bodyA bodyB:(SKPhysicsBody *)bodyB anchor:(CGPoint)anchor;

#pragma clang diagnostic pop

@end
