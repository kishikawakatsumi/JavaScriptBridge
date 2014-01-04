#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIDynamicBehavior.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIDynamicBehavior;

@protocol JSBUIPushBehavior <JSExport, JSBUIDynamicBehavior>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readwrite, nonatomic) CGVector pushDirection;
@property (nonatomic, readwrite) BOOL active;
@property (nonatomic, readonly, copy) NSArray *items;
@property (readwrite, nonatomic) CGFloat angle;
@property (nonatomic, readonly) UIPushBehaviorMode mode;
@property (readwrite, nonatomic) CGFloat magnitude;

- (instancetype)initWithItems:(NSArray *)items mode:(UIPushBehaviorMode)mode;
- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
- (UIOffset)targetOffsetFromCenterForItem:(id <UIDynamicItem>)item;
- (void)setTargetOffsetFromCenter:(UIOffset)o forItem:(id <UIDynamicItem>)item;
- (void)setAngle:(CGFloat)angle magnitude:(CGFloat)magnitude;

#pragma clang diagnostic pop

@end
