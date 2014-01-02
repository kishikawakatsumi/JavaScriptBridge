#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIMenuController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) UIMenuControllerArrowDirection arrowDirection;
@property (nonatomic, copy) NSArray *menuItems;
@property (nonatomic, readonly) CGRect menuFrame;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) SEL action;
@property (nonatomic, getter = isMenuVisible) BOOL menuVisible;

+ (UIMenuController *)sharedMenuController;

- (void)setMenuVisible:(BOOL)menuVisible animated:(BOOL)animated;
- (void)setTargetRect:(CGRect)targetRect inView:(UIView *)targetView;
- (void)update;

#pragma clang diagnostic pop

@end
