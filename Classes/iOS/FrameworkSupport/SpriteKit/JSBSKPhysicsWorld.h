#import <Foundation/Foundation.h>
#import <SpriteKit/SKPhysicsContact.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKPhysicsWorld <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGVector gravity;
@property CGFloat speed;
@property (assign) id contactDelegate;

- (void)addJoint:(SKPhysicsJoint *)joint;
- (void)removeJoint:(SKPhysicsJoint *)joint;
- (void)removeAllJoints;
- (SKPhysicsBody *)bodyAtPoint:(CGPoint)point;
- (SKPhysicsBody *)bodyInRect:(CGRect)rect;
- (SKPhysicsBody *)bodyAlongRayStart:(CGPoint)start end:(CGPoint)end;
- (void)enumerateBodiesAtPoint:(CGPoint)point usingBlock:(void (^)(SKPhysicsBody *body , BOOL *stop))block;
- (void)enumerateBodiesInRect:(CGRect)rect usingBlock:(void (^)(SKPhysicsBody *body , BOOL *stop))block;
- (void)enumerateBodiesAlongRayStart:(CGPoint)start end:(CGPoint)end usingBlock:(void (^)(SKPhysicsBody *body , CGPoint point , CGVector normal , BOOL *stop))block;

#pragma clang diagnostic pop

@end
