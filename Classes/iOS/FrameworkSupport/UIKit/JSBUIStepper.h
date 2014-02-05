#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIControl.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUIStepper <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, getter = isContinuous) BOOL continuous;
@property (nonatomic) double minimumValue;
@property (nonatomic) double stepValue;
@property (nonatomic) BOOL wraps;
@property (nonatomic) double value;
@property (nonatomic) BOOL autorepeat;
@property (nonatomic) double maximumValue;

- (void)setBackgroundImage:(UIImage *)image forState:(UIControlState)state;
- (UIImage *)backgroundImageForState:(UIControlState)state;
- (void)setDividerImage:(UIImage *)image forLeftSegmentState:(UIControlState)leftState rightSegmentState:(UIControlState)rightState;
- (UIImage *)dividerImageForLeftSegmentState:(UIControlState)state rightSegmentState:(UIControlState)state;
- (void)setIncrementImage:(UIImage *)image forState:(UIControlState)state;
- (UIImage *)incrementImageForState:(UIControlState)state;
- (void)setDecrementImage:(UIImage *)image forState:(UIControlState)state;
- (UIImage *)decrementImageForState:(UIControlState)state;

#pragma clang diagnostic pop

@end
