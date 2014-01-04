#import <Foundation/Foundation.h>
#import <UIKit/UIBarItem.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIBarItem;

@protocol JSBUITabBarItem <JSExport, JSBUIBarItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic, copy) NSString *badgeValue;

- (id)initWithTitle:(NSString *)title image:(UIImage *)image tag:(NSInteger)tag;
- (instancetype)initWithTitle:(NSString *)title image:(UIImage *)image selectedImage:(UIImage *)selectedImage;
- (id)initWithTabBarSystemItem:(UITabBarSystemItem)systemItem tag:(NSInteger)tag;
- (void)setFinishedSelectedImage:(UIImage *)selectedImage withFinishedUnselectedImage:(UIImage *)unselectedImage;
- (UIImage *)finishedSelectedImage;
- (UIImage *)finishedUnselectedImage;
- (void)setTitlePositionAdjustment:(UIOffset)adjustment;
- (UIOffset)titlePositionAdjustment;

#pragma clang diagnostic pop

@end
