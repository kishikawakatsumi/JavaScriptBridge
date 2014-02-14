#import <Foundation/Foundation.h>
#import <SpriteKit/SKPhysicsBody.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKPhysicsJoint;

@protocol JSBSKPhysicsJointPin <JSExport, JSBSKPhysicsJoint>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat upperDistanceLimit;
@property BOOL shouldEnableLimits;
@property (retain) SKPhysicsBody *bodyA;
@property CGFloat lowerAngleLimit;
@property CGFloat frictionTorque;
@property CGFloat frequency;
@property CGFloat damping;
@property CGFloat lowerDistanceLimit;
@property CGFloat maxLength;
@property (retain) SKPhysicsBody *bodyB;
@property CGFloat upperAngleLimit;

+ (SKPhysicsJointPin *)jointWithBodyA:(SKPhysicsBody *)bodyA bodyB:(SKPhysicsBody *)bodyB anchor:(CGPoint)anchor;

#pragma clang diagnostic pop

@end
