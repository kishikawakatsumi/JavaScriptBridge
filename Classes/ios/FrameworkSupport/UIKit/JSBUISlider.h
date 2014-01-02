#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKitDefines.h>
#import <QuartzCore/QuartzCore.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUISlider <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, getter = isContinuous) BOOL continuous;
@property (nonatomic, retain) UIColor *maximumTrackTintColor;
@property (nonatomic, retain) UIImage *minimumValueImage;
@property (nonatomic) float value;
@property (nonatomic, readonly) UIImage *currentMinimumTrackImage;
@property (nonatomic, retain) UIColor *minimumTrackTintColor;
@property (nonatomic, readonly) UIImage *currentThumbImage;
@property (nonatomic, retain) UIImage *maximumValueImage;
@property (nonatomic, readonly) UIImage *currentMaximumTrackImage;
@property (nonatomic) float maximumValue;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic) float minimumValue;

- (void)setValue:(float)value animated:(BOOL)animated;
- (void)setThumbImage:(UIImage *)image forState:(UIControlState)state;
- (void)setMinimumTrackImage:(UIImage *)image forState:(UIControlState)state;
- (void)setMaximumTrackImage:(UIImage *)image forState:(UIControlState)state;
- (UIImage *)thumbImageForState:(UIControlState)state;
- (UIImage *)minimumTrackImageForState:(UIControlState)state;
- (UIImage *)maximumTrackImageForState:(UIControlState)state;
- (CGRect)minimumValueImageRectForBounds:(CGRect)bounds;
- (CGRect)maximumValueImageRectForBounds:(CGRect)bounds;
- (CGRect)trackRectForBounds:(CGRect)bounds;
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;

#pragma clang diagnostic pop

@end
