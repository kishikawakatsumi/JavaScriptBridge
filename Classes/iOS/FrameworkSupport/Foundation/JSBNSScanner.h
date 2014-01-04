#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSScanner <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)scannerWithString:(NSString *)string;
+ (id)localizedScannerWithString:(NSString *)string;

- (NSString *)string;
- (NSUInteger)scanLocation;
- (void)setScanLocation:(NSUInteger)pos;
- (void)setCharactersToBeSkipped:(NSCharacterSet *)set;
- (void)setCaseSensitive:(BOOL)flag;
- (void)setLocale:(id)locale;
- (NSCharacterSet *)charactersToBeSkipped;
- (BOOL)caseSensitive;
- (id)locale;
- (BOOL)scanInt:(int *)result;
- (BOOL)scanInteger:(NSInteger *)result;
- (BOOL)scanLongLong:(long long *)result;
- (BOOL)scanUnsignedLongLong:(unsigned long long *)result;
- (BOOL)scanFloat:(float *)result;
- (BOOL)scanDouble:(double *)result;
- (BOOL)scanHexInt:(unsigned *)result;
- (BOOL)scanHexLongLong:(unsigned long long *)result;
- (BOOL)scanHexFloat:(float *)result;
- (BOOL)scanHexDouble:(double *)result;
- (BOOL)scanString:(NSString *)string intoString:(NSString **)result;
- (BOOL)scanCharactersFromSet:(NSCharacterSet *)set intoString:(NSString **)result;
- (BOOL)scanUpToString:(NSString *)string intoString:(NSString **)result;
- (BOOL)scanUpToCharactersFromSet:(NSCharacterSet *)set intoString:(NSString **)result;
- (BOOL)isAtEnd;
- (id)initWithString:(NSString *)string;

#pragma clang diagnostic pop

@end
