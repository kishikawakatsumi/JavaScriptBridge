#import <Foundation/Foundation.h>
#import <UIKit/UIGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIDynamicBehavior <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) void (^action)(void);
@property (nonatomic, readonly) UIDynamicAnimator *dynamicAnimator;
@property (nonatomic, readwrite) CGAffineTransform transform;
@property (nonatomic, readonly, copy) NSArray *childBehaviors;
@property (nonatomic, readonly) CGRect bounds;
@property (nonatomic, readwrite) CGPoint center;

- (void)addChildBehavior:(UIDynamicBehavior *)behavior;
- (void)removeChildBehavior:(UIDynamicBehavior *)behavior;
- (void)willMoveToAnimator:(UIDynamicAnimator *)dynamicAnimator;

#pragma clang diagnostic pop

@end
