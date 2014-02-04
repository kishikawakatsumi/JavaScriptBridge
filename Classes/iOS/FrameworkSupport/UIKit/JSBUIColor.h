#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIFont.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIColor <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (UIColor *)lightTextColor;
+ (UIColor *)darkTextColor;
+ (UIColor *)groupTableViewBackgroundColor;
+ (UIColor *)viewFlipsideBackgroundColor;
+ (UIColor *)scrollViewTexturedBackgroundColor;
+ (UIColor *)underPageBackgroundColor;
+ (UIColor *)colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
+ (UIColor *)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha;
+ (UIColor *)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
+ (UIColor *)colorWithCGColor:(id)cgColor;
+ (UIColor *)colorWithPatternImage:(UIImage *)image;
+ (UIColor *)colorWithCIColor:(CIColor *)ciColor;
+ (UIColor *)blackColor;
+ (UIColor *)darkGrayColor;
+ (UIColor *)lightGrayColor;
+ (UIColor *)whiteColor;
+ (UIColor *)grayColor;
+ (UIColor *)redColor;
+ (UIColor *)greenColor;
+ (UIColor *)blueColor;
+ (UIColor *)cyanColor;
+ (UIColor *)yellowColor;
+ (UIColor *)magentaColor;
+ (UIColor *)orangeColor;
+ (UIColor *)purpleColor;
+ (UIColor *)brownColor;
+ (UIColor *)clearColor;

- (UIColor *)initWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
- (UIColor *)initWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha;
- (UIColor *)initWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
- (UIColor *)initWithCGColor:(id)cgColor;
- (UIColor *)initWithPatternImage:(UIImage *)image;
- (UIColor *)initWithCIColor:(CIColor *)ciColor;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (BOOL)getWhite:(CGFloat *)white alpha:(CGFloat *)alpha;
- (BOOL)getHue:(CGFloat *)hue saturation:(CGFloat *)saturation brightness:(CGFloat *)brightness alpha:(CGFloat *)alpha;
- (BOOL)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue alpha:(CGFloat *)alpha;
- (UIColor *)colorWithAlphaComponent:(CGFloat)alpha;
- (id)CGColor;

#pragma clang diagnostic pop

@end
