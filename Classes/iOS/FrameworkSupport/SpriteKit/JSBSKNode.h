#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKNode <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat xScale;
@property CGFloat speed;
@property (getter = isPaused) BOOL paused;
@property CGPoint position;
@property (readonly) CGRect frame;
@property (readonly) SKNode *parent;
@property (readonly) SKScene *scene;
@property (retain) NSMutableDictionary *userData;
@property (retain) SKPhysicsBody *physicsBody;
@property CGFloat zPosition;
@property CGFloat alpha;
@property (readonly) NSArray *children;
@property CGFloat zRotation;
@property (getter = isHidden) BOOL hidden;
@property (getter = isUserInteractionEnabled) BOOL userInteractionEnabled;
@property CGFloat yScale;
@property (copy) NSString *name;

+ (instancetype)node;

- (CGRect)calculateAccumulatedFrame;
- (void)setScale:(CGFloat)scale;
- (void)addChild:(SKNode *)node;
- (void)insertChild:(SKNode *)node atIndex:(NSInteger)index;
- (void)removeChildrenInArray:(NSArray *)nodes;
- (void)removeAllChildren;
- (void)removeFromParent;
- (SKNode *)childNodeWithName:(NSString *)name;
- (void)enumerateChildNodesWithName:(NSString *)name usingBlock:(void (^)(SKNode *node , BOOL *stop))block;
- (BOOL)inParentHierarchy:(SKNode *)parent;
- (void)runAction:(SKAction *)action;
- (void)runAction:(SKAction *)action completion:(void (^)())block;
- (void)runAction:(SKAction *)action withKey:(NSString *)key;
- (BOOL)hasActions;
- (SKAction *)actionForKey:(NSString *)key;
- (void)removeActionForKey:(NSString *)key;
- (void)removeAllActions;
- (BOOL)containsPoint:(CGPoint)p;
- (SKNode *)nodeAtPoint:(CGPoint)p;
- (NSArray *)nodesAtPoint:(CGPoint)p;
- (CGPoint)convertPoint:(CGPoint)point fromNode:(SKNode *)node;
- (CGPoint)convertPoint:(CGPoint)point toNode:(SKNode *)node;
- (BOOL)intersectsNode:(SKNode *)node;

#pragma clang diagnostic pop

@end
