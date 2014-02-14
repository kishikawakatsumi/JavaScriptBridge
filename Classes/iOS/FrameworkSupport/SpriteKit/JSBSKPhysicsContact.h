#import <Foundation/Foundation.h>
#import <SpriteKit/SKPhysicsBody.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKPhysicsContact <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) SKPhysicsBody *bodyB;
@property (readonly) CGPoint contactPoint;
@property (readonly) SKPhysicsBody *bodyA;
@property (readonly) CGFloat collisionImpulse;

#pragma clang diagnostic pop

@end
