#import <Foundation/Foundation.h>
#import <UIKit/UIDynamicBehavior.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIDynamicBehavior;

@protocol JSBUIDynamicItemBehavior <JSExport, JSBUIDynamicBehavior>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readwrite, nonatomic) BOOL allowsRotation;
@property (readwrite, nonatomic) CGFloat density;
@property (readwrite, nonatomic) CGFloat resistance;
@property (readwrite, nonatomic) CGFloat angularResistance;
@property (readwrite, nonatomic) CGFloat elasticity;
@property (readwrite, nonatomic) CGFloat friction;
@property (nonatomic, readonly, copy) NSArray *items;

- (instancetype)initWithItems:(NSArray *)items;
- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
- (void)addLinearVelocity:(CGPoint)velocity forItem:(id <UIDynamicItem>)item;
- (CGPoint)linearVelocityForItem:(id <UIDynamicItem>)item;
- (void)addAngularVelocity:(CGFloat)velocity forItem:(id <UIDynamicItem>)item;
- (CGFloat)angularVelocityForItem:(id <UIDynamicItem>)item;

#pragma clang diagnostic pop

@end
