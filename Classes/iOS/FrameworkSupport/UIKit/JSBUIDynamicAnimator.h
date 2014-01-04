#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewLayout.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIDynamicAnimator <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isRunning) BOOL running;
@property (nonatomic, assign) id delegate;
@property (nonatomic, readonly, copy) NSArray *behaviors;
@property (nonatomic, readonly) UIView *referenceView;

- (instancetype)initWithReferenceView:(UIView *)view;
- (void)addBehavior:(UIDynamicBehavior *)behavior;
- (void)removeBehavior:(UIDynamicBehavior *)behavior;
- (void)removeAllBehaviors;
- (NSArray *)itemsInRect:(CGRect)rect;
- (void)updateItemUsingCurrentState:(id <UIDynamicItem>)item;
- (NSTimeInterval)elapsedTime;

#pragma clang diagnostic pop

@end
