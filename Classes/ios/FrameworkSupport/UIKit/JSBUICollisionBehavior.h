#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIBezierPath.h>
#import <UIKit/UIDynamicBehavior.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIDynamicBehavior;

@protocol JSBUICollisionBehavior <JSExport, JSBUIDynamicBehavior>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readwrite) UICollisionBehaviorMode collisionMode;
@property (nonatomic, readwrite) BOOL translatesReferenceBoundsIntoBoundary;
@property (nonatomic, readonly, copy) NSArray *boundaryIdentifiers;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, assign, readwrite) id collisionDelegate;

- (instancetype)initWithItems:(NSArray *)items;
- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(UIEdgeInsets)insets;
- (void)addBoundaryWithIdentifier:(id <NSCopying>)identifier forPath:(UIBezierPath *)bezierPath;
- (void)addBoundaryWithIdentifier:(id <NSCopying>)identifier fromPoint:(CGPoint)p1 toPoint:(CGPoint)p2;
- (UIBezierPath *)boundaryWithIdentifier:(id <NSCopying>)identifier;
- (void)removeBoundaryWithIdentifier:(id <NSCopying>)identifier;
- (void)removeAllBoundaries;

#pragma clang diagnostic pop

@end
