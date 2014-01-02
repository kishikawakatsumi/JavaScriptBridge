#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIDynamicBehavior.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIDynamicBehavior;

@protocol JSBUIGravityBehavior <JSExport, JSBUIDynamicBehavior>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, copy) NSArray *items;
@property (readwrite, nonatomic) CGVector gravityDirection;
@property (readwrite, nonatomic) CGFloat angle;
@property (readwrite, nonatomic) CGFloat magnitude;

- (instancetype)initWithItems:(NSArray *)items;
- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
- (void)setAngle:(CGFloat)angle magnitude:(CGFloat)magnitude;

#pragma clang diagnostic pop

@end
