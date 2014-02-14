#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKTransition <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property BOOL pausesIncomingScene;
@property BOOL pausesOutgoingScene;

+ (SKTransition *)crossFadeWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)fadeWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)fadeWithColor:(SKColor *)color duration:(NSTimeInterval)sec;
+ (SKTransition *)flipHorizontalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)flipVerticalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)revealWithDirection:(SKTransitionDirection)direction duration:(NSTimeInterval)sec;
+ (SKTransition *)moveInWithDirection:(SKTransitionDirection)direction duration:(NSTimeInterval)sec;
+ (SKTransition *)pushWithDirection:(SKTransitionDirection)direction duration:(NSTimeInterval)sec;
+ (SKTransition *)doorsOpenHorizontalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)doorsOpenVerticalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)doorsCloseHorizontalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)doorsCloseVerticalWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)doorwayWithDuration:(NSTimeInterval)sec;
+ (SKTransition *)transitionWithCIFilter:(CIFilter *)filter duration:(NSTimeInterval)sec;

#pragma clang diagnostic pop

@end
