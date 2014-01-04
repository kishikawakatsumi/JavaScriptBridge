#import <Foundation/NSString.h>
#import <Foundation/NSDictionary.h>

@import Foundation;
@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSAttributedString <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSString *)string;
- (NSDictionary *)attributesAtIndex:(NSUInteger)location effectiveRange:(NSRangePointer)range;
- (NSUInteger)length;
- (id)attribute:(NSString *)attrName atIndex:(NSUInteger)location effectiveRange:(NSRangePointer)range;
- (NSAttributedString *)attributedSubstringFromRange:(NSRange)range;
- (NSDictionary *)attributesAtIndex:(NSUInteger)location longestEffectiveRange:(NSRangePointer)range inRange:(NSRange)rangeLimit;
- (id)attribute:(NSString *)attrName atIndex:(NSUInteger)location longestEffectiveRange:(NSRangePointer)range inRange:(NSRange)rangeLimit;
- (BOOL)isEqualToAttributedString:(NSAttributedString *)other;
- (id)initWithString:(NSString *)str;
- (id)initWithString:(NSString *)str attributes:(NSDictionary *)attrs;
- (id)initWithAttributedString:(NSAttributedString *)attrStr;
- (void)enumerateAttributesInRange:(NSRange)enumerationRange options:(NSAttributedStringEnumerationOptions)opts usingBlock:(void (^)(NSDictionary *attrs , NSRange range , BOOL *stop))block;
- (void)enumerateAttribute:(NSString *)attrName inRange:(NSRange)enumerationRange options:(NSAttributedStringEnumerationOptions)opts usingBlock:(void (^)(id value , NSRange range , BOOL *stop))block;

#pragma mark - UIKit

@property (retain) NSFileWrapper *fileWrapper;
@property (retain) NSString *fileType;
@property (retain) NSData *contents;
@property (retain) UIImage *image;
@property CGRect bounds;

+ (NSAttributedString *)attributedStringWithAttachment:(NSTextAttachment *)attachment;

- (id)initWithFileURL:(NSURL *)url options:(NSDictionary *)options documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (id)initWithData:(NSData *)data options:(NSDictionary *)options documentAttributes:(NSDictionary **)dict error:(NSError **)error;
- (NSData *)dataFromRange:(NSRange)range documentAttributes:(NSDictionary *)dict error:(NSError **)error;
- (NSFileWrapper *)fileWrapperFromRange:(NSRange)range documentAttributes:(NSDictionary *)dict error:(NSError **)error;
- (CGSize)size;
- (void)drawAtPoint:(CGPoint)point;
- (void)drawInRect:(CGRect)rect;
- (void)drawWithRect:(CGRect)rect options:(NSStringDrawingOptions)options attributes:(NSDictionary *)attributes context:(NSStringDrawingContext *)context;
- (CGRect)boundingRectWithSize:(CGSize)size options:(NSStringDrawingOptions)options attributes:(NSDictionary *)attributes context:(NSStringDrawingContext *)context;
- (void)drawWithRect:(CGRect)rect options:(NSStringDrawingOptions)options context:(NSStringDrawingContext *)context;
- (CGRect)boundingRectWithSize:(CGSize)size options:(NSStringDrawingOptions)options context:(NSStringDrawingContext *)context;

#pragma clang diagnostic pop

@end
