#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIMenuItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) UIMenuControllerArrowDirection arrowDirection;
@property (nonatomic, copy) NSArray *menuItems;
@property (nonatomic, readonly) CGRect menuFrame;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) SEL action;
@property (nonatomic, getter = isMenuVisible) BOOL menuVisible;

JSExportAs(initWithTitleEvent,
- (id)__initWithTitle:(NSString *)title action:(NSString *)action);

#pragma clang diagnostic pop

@end
