#import <Foundation/NSObject.h>

@import Foundation;
@import UIKit;
@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSCoder <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)encodeValueOfObjCType:(const char *)type at:(const void *)addr;
- (void)encodeDataObject:(NSData *)data;
- (void)decodeValueOfObjCType:(const char *)type at:(void *)data;
- (NSData *)decodeDataObject;
- (NSInteger)versionForClassName:(NSString *)className;
- (void)encodeObject:(id)object;
- (void)encodeRootObject:(id)rootObject;
- (void)encodeBycopyObject:(id)anObject;
- (void)encodeByrefObject:(id)anObject;
- (void)encodeConditionalObject:(id)object;
- (void)encodeValuesOfObjCTypes:(const char *)types , ...;
- (void)encodeArrayOfObjCType:(const char *)type count:(NSUInteger)count at:(const void *)array;
- (void)encodeBytes:(const void *)byteaddr length:(NSUInteger)length;
- (id)decodeObject;
- (void)decodeValuesOfObjCTypes:(const char *)types , ...;
- (void)decodeArrayOfObjCType:(const char *)itemType count:(NSUInteger)count at:(void *)array;
- (void *)decodeBytesWithReturnedLength:(NSUInteger *)lengthp;
- (void)setObjectZone:(NSZone *)zone;
- (NSZone *)objectZone;
- (unsigned)systemVersion;
- (BOOL)allowsKeyedCoding;
- (void)encodeObject:(id)objv forKey:(NSString *)key;
- (void)encodeConditionalObject:(id)objv forKey:(NSString *)key;
- (void)encodeBool:(BOOL)boolv forKey:(NSString *)key;
- (void)encodeInt:(int)intv forKey:(NSString *)key;
- (void)encodeInt32:(int32_t)intv forKey:(NSString *)key;
- (void)encodeInt64:(int64_t)intv forKey:(NSString *)key;
- (void)encodeFloat:(float)realv forKey:(NSString *)key;
- (void)encodeDouble:(double)realv forKey:(NSString *)key;
- (void)encodeBytes:(const uint8_t *)bytesp length:(NSUInteger)lenv forKey:(NSString *)key;
- (BOOL)containsValueForKey:(NSString *)key;
- (id)decodeObjectForKey:(NSString *)key;
- (BOOL)decodeBoolForKey:(NSString *)key;
- (int)decodeIntForKey:(NSString *)key;
- (int32_t)decodeInt32ForKey:(NSString *)key;
- (int64_t)decodeInt64ForKey:(NSString *)key;
- (float)decodeFloatForKey:(NSString *)key;
- (double)decodeDoubleForKey:(NSString *)key;
- (const uint8_t *)decodeBytesForKey:(NSString *)key returnedLength:(NSUInteger *)lengthp;
- (void)encodeInteger:(NSInteger)intv forKey:(NSString *)key;
- (NSInteger)decodeIntegerForKey:(NSString *)key;
- (BOOL)requiresSecureCoding;
- (id)decodeObjectOfClass:(Class)aClass forKey:(NSString *)key;
- (id)decodeObjectOfClasses:(NSSet *)classes forKey:(NSString *)key;
- (id)decodePropertyListForKey:(NSString *)key;
- (NSSet *)allowedClasses;

#pragma mark - UIKit

- (void)encodeCGPoint:(CGPoint)point forKey:(NSString *)key;
- (void)encodeCGSize:(CGSize)size forKey:(NSString *)key;
- (void)encodeCGRect:(CGRect)rect forKey:(NSString *)key;
- (void)encodeCGAffineTransform:(CGAffineTransform)transform forKey:(NSString *)key;
- (void)encodeUIEdgeInsets:(UIEdgeInsets)insets forKey:(NSString *)key;
- (void)encodeUIOffset:(UIOffset)offset forKey:(NSString *)key;
- (CGPoint)decodeCGPointForKey:(NSString *)key;
- (CGSize)decodeCGSizeForKey:(NSString *)key;
- (CGRect)decodeCGRectForKey:(NSString *)key;
- (CGAffineTransform)decodeCGAffineTransformForKey:(NSString *)key;
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(NSString *)key;
- (UIOffset)decodeUIOffsetForKey:(NSString *)key;

#pragma mark - AVFoundation

- (void)encodeCMTime:(CMTime)time forKey:(NSString *)key;
- (CMTime)decodeCMTimeForKey:(NSString *)key;
- (void)encodeCMTimeRange:(CMTimeRange)timeRange forKey:(NSString *)key;
- (CMTimeRange)decodeCMTimeRangeForKey:(NSString *)key;
- (void)encodeCMTimeMapping:(CMTimeMapping)timeMapping forKey:(NSString *)key;
- (CMTimeMapping)decodeCMTimeMappingForKey:(NSString *)key;

#pragma clang diagnostic pop

@end
