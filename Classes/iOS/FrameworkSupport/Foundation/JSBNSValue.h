#import <Foundation/NSObject.h>

@import Foundation;
@import UIKit;
@import QuartzCore;
@import AVFoundation;
@import MapKit;

@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSValue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSValue *)valueWithBytes:(const void *)value objCType:(const char *)type;
+ (NSValue *)value:(const void *)value withObjCType:(const char *)type;
+ (NSValue *)valueWithNonretainedObject:(id)anObject;
+ (NSValue *)valueWithPointer:(const void *)pointer;
+ (NSValue *)valueWithRange:(NSRange)range;

- (void)getValue:(void *)value;
- (const char *)objCType;
- (id)initWithBytes:(const void *)value objCType:(const char *)type;
- (id)nonretainedObjectValue;
- (void *)pointerValue;
- (BOOL)isEqualToValue:(NSValue *)value;
- (NSRange)rangeValue;

#pragma mark - UIKit

+ (NSValue *)valueWithCGPoint:(CGPoint)point;
+ (NSValue *)valueWithCGSize:(CGSize)size;
+ (NSValue *)valueWithCGRect:(CGRect)rect;
+ (NSValue *)valueWithCGAffineTransform:(CGAffineTransform)transform;
+ (NSValue *)valueWithUIEdgeInsets:(UIEdgeInsets)insets;
+ (NSValue *)valueWithUIOffset:(UIOffset)insets;

- (CGPoint)CGPointValue;
- (CGSize)CGSizeValue;
- (CGRect)CGRectValue;
- (CGAffineTransform)CGAffineTransformValue;
- (UIEdgeInsets)UIEdgeInsetsValue;
- (UIOffset)UIOffsetValue;

#pragma mark - QuartzCore

+ (NSValue *)valueWithCATransform3D:(CATransform3D)t;

- (CATransform3D)CATransform3DValue;

#pragma mark - AVFoundation

+ (NSValue *)valueWithCMTime:(CMTime)time;
+ (NSValue *)valueWithCMTimeRange:(CMTimeRange)timeRange;
+ (NSValue *)valueWithCMTimeMapping:(CMTimeMapping)timeMapping;

- (CMTime)CMTimeValue;
- (CMTimeRange)CMTimeRangeValue;
- (CMTimeMapping)CMTimeMappingValue;

#pragma mark - MapKit

+ (NSValue *)valueWithMKCoordinate:(CLLocationCoordinate2D)coordinate;
+ (NSValue *)valueWithMKCoordinateSpan:(MKCoordinateSpan)span;

- (CLLocationCoordinate2D)MKCoordinateValue;
- (MKCoordinateSpan)MKCoordinateSpanValue;

#pragma clang diagnostic pop

@end
