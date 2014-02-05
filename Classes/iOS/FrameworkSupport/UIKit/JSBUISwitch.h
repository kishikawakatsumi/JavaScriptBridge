#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUISwitch <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic, retain) UIColor *onTintColor;
@property (nonatomic, retain) UIImage *onImage;
@property (nonatomic, retain) UIImage *offImage;
@property (nonatomic, getter = isOn) BOOL on;

- (id)initWithFrame:(CGRect)frame;
- (void)setOn:(BOOL)on animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
