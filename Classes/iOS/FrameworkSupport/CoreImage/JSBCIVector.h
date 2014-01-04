#import <CoreImage/CoreImageDefines.h>
#import <Foundation/Foundation.h>

@import CoreImage;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCIVector <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (CIVector *)vectorWithValues:(const CGFloat *)values count:(size_t)count;
+ (CIVector *)vectorWithX:(CGFloat)x;
+ (CIVector *)vectorWithX:(CGFloat)x Y:(CGFloat)y;
+ (CIVector *)vectorWithX:(CGFloat)x Y:(CGFloat)y Z:(CGFloat)z;
+ (CIVector *)vectorWithX:(CGFloat)x Y:(CGFloat)y Z:(CGFloat)z W:(CGFloat)w;
+ (CIVector *)vectorWithCGPoint:(CGPoint)p;
+ (CIVector *)vectorWithCGRect:(CGRect)r;
+ (CIVector *)vectorWithCGAffineTransform:(CGAffineTransform)t;
+ (CIVector *)vectorWithString:(NSString *)representation;

- (id)initWithValues:(const CGFloat *)values count:(size_t)count;
- (id)initWithX:(CGFloat)x;
- (id)initWithX:(CGFloat)x Y:(CGFloat)y;
- (id)initWithX:(CGFloat)x Y:(CGFloat)y Z:(CGFloat)z;
- (id)initWithX:(CGFloat)x Y:(CGFloat)y Z:(CGFloat)z W:(CGFloat)w;
- (id)initWithCGPoint:(CGPoint)p;
- (id)initWithCGRect:(CGRect)r;
- (id)initWithCGAffineTransform:(CGAffineTransform)r;
- (id)initWithString:(NSString *)representation;
- (CGFloat)valueAtIndex:(size_t)index;
- (size_t)count;
- (CGFloat)X;
- (CGFloat)Y;
- (CGFloat)Z;
- (CGFloat)W;
- (CGPoint)CGPointValue;
- (CGRect)CGRectValue;
- (CGAffineTransform)CGAffineTransformValue;
- (NSString *)stringRepresentation;

#pragma clang diagnostic pop

@end
