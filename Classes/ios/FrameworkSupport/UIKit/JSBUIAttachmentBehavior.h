#import <Foundation/Foundation.h>
#import <UIKit/UIDynamicBehavior.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIDynamicBehavior;

@protocol JSBUIAttachmentBehavior <JSExport, JSBUIDynamicBehavior>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readwrite, nonatomic) CGFloat damping;
@property (readwrite, nonatomic) CGPoint anchorPoint;
@property (nonatomic, readonly, copy) NSArray *items;
@property (readwrite, nonatomic) CGFloat length;
@property (readwrite, nonatomic) CGFloat frequency;
@property (readonly, nonatomic) UIAttachmentBehaviorType attachedBehaviorType;

- (instancetype)initWithItem:(id <UIDynamicItem>)item attachedToAnchor:(CGPoint)point;
- (instancetype)initWithItem:(id <UIDynamicItem>)item offsetFromCenter:(UIOffset)offset attachedToAnchor:(CGPoint)point;
- (instancetype)initWithItem:(id <UIDynamicItem>)item1 attachedToItem:(id <UIDynamicItem>)item2;
- (instancetype)initWithItem:(id <UIDynamicItem>)item1 offsetFromCenter:(UIOffset)offset1 attachedToItem:(id <UIDynamicItem>)item2 offsetFromCenter:(UIOffset)offset2;

#pragma clang diagnostic pop

@end
