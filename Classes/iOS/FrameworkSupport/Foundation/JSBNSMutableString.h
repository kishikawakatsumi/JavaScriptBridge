#import <limits.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>
#import <stdarg.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSString;

@protocol JSBNSMutableString <JSExport, JSBNSString>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)stringWithCapacity:(NSUInteger)capacity;

- (void)replaceCharactersInRange:(NSRange)range withString:(NSString *)aString;
- (void)insertString:(NSString *)aString atIndex:(NSUInteger)loc;
- (void)deleteCharactersInRange:(NSRange)range;
- (void)appendString:(NSString *)aString;
JSExportAs(appendFormat,
- (void)__appendFormat:(NSString *)format arguments:(NSArray *)arguments);
- (void)setString:(NSString *)aString;
- (id)initWithCapacity:(NSUInteger)capacity;
- (NSUInteger)replaceOccurrencesOfString:(NSString *)target withString:(NSString *)replacement options:(NSStringCompareOptions)options range:(NSRange)searchRange;

#pragma clang diagnostic pop

@end
