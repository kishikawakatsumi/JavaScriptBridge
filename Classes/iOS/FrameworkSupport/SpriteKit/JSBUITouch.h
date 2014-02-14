#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUITouch <JSExport, JSBNSObject>

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

- (CGPoint)locationInNode:(SKNode *)node;
- (CGPoint)previousLocationInNode:(SKNode *)node;

#pragma clang diagnostic pop

@end
