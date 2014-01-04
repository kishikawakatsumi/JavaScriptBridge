#import <Foundation/NSObject.h>
#import <UIKit/UIGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSLayoutConstraint <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CGFloat length;
@property (readonly) NSLayoutAttribute firstAttribute;
@property (readonly, assign) id firstItem;
@property (readonly, assign) id secondItem;
@property (readonly) CGFloat multiplier;
@property CGFloat constant;
@property (readonly) NSLayoutRelation relation;
@property UILayoutPriority priority;
@property (readonly) NSLayoutAttribute secondAttribute;
@property BOOL shouldBeArchived;

+ (NSArray *)constraintsWithVisualFormat:(NSString *)format options:(NSLayoutFormatOptions)opts metrics:(NSDictionary *)metrics views:(NSDictionary *)views;
+ (id)constraintWithItem:(id)view1 attribute:(NSLayoutAttribute)attr1 relatedBy:(NSLayoutRelation)relation toItem:(id)view2 attribute:(NSLayoutAttribute)attr2 multiplier:(CGFloat)multiplier constant:(CGFloat)c;

#pragma clang diagnostic pop

@end
