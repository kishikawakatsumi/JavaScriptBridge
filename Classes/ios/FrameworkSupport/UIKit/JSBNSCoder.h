#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSCoder <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

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

#pragma clang diagnostic pop

@end
