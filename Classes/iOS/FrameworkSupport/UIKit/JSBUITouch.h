#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUITouch <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UITouchPhase phase;
@property (nonatomic, readonly) NSTimeInterval timestamp;
@property (nonatomic, readonly, retain) UIView *view;
@property (nonatomic, readonly, copy) NSArray *gestureRecognizers;
@property (nonatomic, readonly) NSUInteger tapCount;
@property (nonatomic, readonly, retain) UIWindow *window;

- (CGPoint)locationInView:(UIView *)view;
- (CGPoint)previousLocationInView:(UIView *)view;

#pragma mark - SpriteKit

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
