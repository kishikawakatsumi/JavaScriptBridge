#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKPhysicsBody <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat angularVelocity;
@property CGFloat restitution;
@property (assign) uint32_t collisionBitMask;
@property CGVector velocity;
@property (getter = isResting) BOOL resting;
@property BOOL usesPreciseCollisionDetection;
@property (getter = isDynamic) BOOL dynamic;
@property BOOL allowsRotation;
@property (assign) CGFloat linearDamping;
@property (readonly) CGFloat area;
@property (assign) uint32_t contactTestBitMask;
@property (readonly) NSArray *joints;
@property CGFloat mass;
@property (assign) uint32_t categoryBitMask;
@property CGFloat density;
@property CGFloat friction;
@property (assign) CGFloat angularDamping;
@property (assign) BOOL affectedByGravity;
@property (readonly, weak) SKNode *node;

+ (SKPhysicsBody *)bodyWithCircleOfRadius:(CGFloat)r;
+ (SKPhysicsBody *)bodyWithRectangleOfSize:(CGSize)s;
+ (SKPhysicsBody *)bodyWithPolygonFromPath:(id)path;
+ (SKPhysicsBody *)bodyWithEdgeFromPoint:(CGPoint)p1 toPoint:(CGPoint)p2;
+ (SKPhysicsBody *)bodyWithEdgeChainFromPath:(id)path;
+ (SKPhysicsBody *)bodyWithEdgeLoopFromPath:(id)path;
+ (SKPhysicsBody *)bodyWithEdgeLoopFromRect:(CGRect)rect;

- (void)applyForce:(CGVector)force;
- (void)applyForce:(CGVector)force atPoint:(CGPoint)point;
- (void)applyTorque:(CGFloat)torque;
- (void)applyImpulse:(CGVector)impulse;
- (void)applyImpulse:(CGVector)impulse atPoint:(CGPoint)point;
- (void)applyAngularImpulse:(CGFloat)impulse;
- (NSArray *)allContactedBodies;

#pragma clang diagnostic pop

@end
