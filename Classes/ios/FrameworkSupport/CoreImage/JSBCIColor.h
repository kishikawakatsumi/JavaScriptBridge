#import <CoreImage/CoreImageDefines.h>
#import <Foundation/Foundation.h>

@import CoreImage;
@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIColor <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (CIColor *)colorWithCGColor:(CGColorRef)c;
+ (CIColor *)colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a;
+ (CIColor *)colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b;
+ (CIColor *)colorWithString:(NSString *)representation;

- (id)initWithCGColor:(CGColorRef)c;
- (size_t)numberOfComponents;
- (const CGFloat *)components;
- (CGFloat)alpha;
- (CGColorSpaceRef)colorSpace;
- (CGFloat)red;
- (CGFloat)green;
- (CGFloat)blue;
- (NSString *)stringRepresentation;

#pragma mark - UIKit

@property (nonatomic, readonly) CGColorRef CGColor;
@property (nonatomic, readonly) CIColor *CIColor;

- (id)initWithColor:(UIColor *)color;

#pragma clang diagnostic pop

@end
