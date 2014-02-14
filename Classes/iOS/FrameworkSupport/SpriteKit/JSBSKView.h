#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBSKView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (getter = isPaused) BOOL paused;
@property (readonly) SKScene *scene;
@property BOOL showsDrawCount;
@property BOOL ignoresSiblingOrder;
@property BOOL showsNodeCount;
@property NSInteger frameInterval;
@property (getter = isAsynchronous) BOOL asynchronous;
@property BOOL showsFPS;

- (void)presentScene:(SKScene *)scene;
- (void)presentScene:(SKScene *)scene transition:(SKTransition *)transition;
- (SKTexture *)textureFromNode:(SKNode *)node;
- (CGPoint)convertPoint:(CGPoint)point toScene:(SKScene *)scene;
- (CGPoint)convertPoint:(CGPoint)point fromScene:(SKScene *)scene;

#pragma clang diagnostic pop

@end
