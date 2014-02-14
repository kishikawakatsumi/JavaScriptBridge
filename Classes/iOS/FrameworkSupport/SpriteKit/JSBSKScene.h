#import <SpriteKit/SKEffectNode.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKEffectNode;

@protocol JSBSKScene <JSExport, JSBSKEffectNode>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGSize size;
@property CGPoint anchorPoint;
@property (retain) SKColor *backgroundColor;
@property (readonly) SKPhysicsWorld *physicsWorld;
@property (weak, readonly) SKView *view;
@property SKSceneScaleMode scaleMode;

+ (instancetype)sceneWithSize:(CGSize)size;

- (instancetype)initWithSize:(CGSize)size;
- (CGPoint)convertPointFromView:(CGPoint)point;
- (CGPoint)convertPointToView:(CGPoint)point;
- (void)update:(NSTimeInterval)currentTime;
- (void)didEvaluateActions;
- (void)didSimulatePhysics;
- (void)didMoveToView:(SKView *)view;
- (void)willMoveFromView:(SKView *)view;
- (void)didChangeSize:(CGSize)oldSize;

#pragma clang diagnostic pop

@end
