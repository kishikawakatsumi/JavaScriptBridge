#import <Foundation/NSFormatter.h>
#include<CoreFoundation/CFNumberFormatter.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSFormatter;

@protocol JSBNSNumberFormatter <JSExport, JSBNSFormatter>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSString *)localizedStringFromNumber:(NSNumber *)num numberStyle:(NSNumberFormatterStyle)nstyle;
+ (NSNumberFormatterBehavior)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:(NSNumberFormatterBehavior)behavior;

- (BOOL)getObjectValue:(out id *)obj forString:(NSString *)string range:(inout NSRange *)rangep error:(out NSError **)error;
- (NSString *)stringFromNumber:(NSNumber *)number;
- (NSNumber *)numberFromString:(NSString *)string;
- (NSNumberFormatterStyle)numberStyle;
- (void)setNumberStyle:(NSNumberFormatterStyle)style;
- (NSLocale *)locale;
- (void)setLocale:(NSLocale *)locale;
- (BOOL)generatesDecimalNumbers;
- (void)setGeneratesDecimalNumbers:(BOOL)b;
- (NSNumberFormatterBehavior)formatterBehavior;
- (void)setFormatterBehavior:(NSNumberFormatterBehavior)behavior;
- (NSString *)negativeFormat;
- (void)setNegativeFormat:(NSString *)format;
- (NSDictionary *)textAttributesForNegativeValues;
- (void)setTextAttributesForNegativeValues:(NSDictionary *)newAttributes;
- (NSString *)positiveFormat;
- (void)setPositiveFormat:(NSString *)format;
- (NSDictionary *)textAttributesForPositiveValues;
- (void)setTextAttributesForPositiveValues:(NSDictionary *)newAttributes;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:(BOOL)flag;
- (NSString *)decimalSeparator;
- (void)setDecimalSeparator:(NSString *)string;
- (BOOL)alwaysShowsDecimalSeparator;
- (void)setAlwaysShowsDecimalSeparator:(BOOL)b;
- (NSString *)currencyDecimalSeparator;
- (void)setCurrencyDecimalSeparator:(NSString *)string;
- (BOOL)usesGroupingSeparator;
- (void)setUsesGroupingSeparator:(BOOL)b;
- (NSString *)groupingSeparator;
- (void)setGroupingSeparator:(NSString *)string;
- (NSString *)zeroSymbol;
- (void)setZeroSymbol:(NSString *)string;
- (NSDictionary *)textAttributesForZero;
- (void)setTextAttributesForZero:(NSDictionary *)newAttributes;
- (NSString *)nilSymbol;
- (void)setNilSymbol:(NSString *)string;
- (NSDictionary *)textAttributesForNil;
- (void)setTextAttributesForNil:(NSDictionary *)newAttributes;
- (NSString *)notANumberSymbol;
- (void)setNotANumberSymbol:(NSString *)string;
- (NSDictionary *)textAttributesForNotANumber;
- (void)setTextAttributesForNotANumber:(NSDictionary *)newAttributes;
- (NSString *)positiveInfinitySymbol;
- (void)setPositiveInfinitySymbol:(NSString *)string;
- (NSDictionary *)textAttributesForPositiveInfinity;
- (void)setTextAttributesForPositiveInfinity:(NSDictionary *)newAttributes;
- (NSString *)negativeInfinitySymbol;
- (void)setNegativeInfinitySymbol:(NSString *)string;
- (NSDictionary *)textAttributesForNegativeInfinity;
- (void)setTextAttributesForNegativeInfinity:(NSDictionary *)newAttributes;
- (NSString *)positivePrefix;
- (void)setPositivePrefix:(NSString *)string;
- (NSString *)positiveSuffix;
- (void)setPositiveSuffix:(NSString *)string;
- (NSString *)negativePrefix;
- (void)setNegativePrefix:(NSString *)string;
- (NSString *)negativeSuffix;
- (void)setNegativeSuffix:(NSString *)string;
- (NSString *)currencyCode;
- (void)setCurrencyCode:(NSString *)string;
- (NSString *)currencySymbol;
- (void)setCurrencySymbol:(NSString *)string;
- (NSString *)internationalCurrencySymbol;
- (void)setInternationalCurrencySymbol:(NSString *)string;
- (NSString *)percentSymbol;
- (void)setPercentSymbol:(NSString *)string;
- (NSString *)perMillSymbol;
- (void)setPerMillSymbol:(NSString *)string;
- (NSString *)minusSign;
- (void)setMinusSign:(NSString *)string;
- (NSString *)plusSign;
- (void)setPlusSign:(NSString *)string;
- (NSString *)exponentSymbol;
- (void)setExponentSymbol:(NSString *)string;
- (NSUInteger)groupingSize;
- (void)setGroupingSize:(NSUInteger)number;
- (NSUInteger)secondaryGroupingSize;
- (void)setSecondaryGroupingSize:(NSUInteger)number;
- (NSNumber *)multiplier;
- (void)setMultiplier:(NSNumber *)number;
- (NSUInteger)formatWidth;
- (void)setFormatWidth:(NSUInteger)number;
- (NSString *)paddingCharacter;
- (void)setPaddingCharacter:(NSString *)string;
- (NSNumberFormatterPadPosition)paddingPosition;
- (void)setPaddingPosition:(NSNumberFormatterPadPosition)position;
- (NSNumberFormatterRoundingMode)roundingMode;
- (void)setRoundingMode:(NSNumberFormatterRoundingMode)mode;
- (NSNumber *)roundingIncrement;
- (void)setRoundingIncrement:(NSNumber *)number;
- (NSUInteger)minimumIntegerDigits;
- (void)setMinimumIntegerDigits:(NSUInteger)number;
- (NSUInteger)maximumIntegerDigits;
- (void)setMaximumIntegerDigits:(NSUInteger)number;
- (NSUInteger)minimumFractionDigits;
- (void)setMinimumFractionDigits:(NSUInteger)number;
- (NSUInteger)maximumFractionDigits;
- (void)setMaximumFractionDigits:(NSUInteger)number;
- (NSNumber *)minimum;
- (void)setMinimum:(NSNumber *)number;
- (NSNumber *)maximum;
- (void)setMaximum:(NSNumber *)number;
- (NSString *)currencyGroupingSeparator;
- (void)setCurrencyGroupingSeparator:(NSString *)string;
- (BOOL)isLenient;
- (void)setLenient:(BOOL)b;
- (BOOL)usesSignificantDigits;
- (void)setUsesSignificantDigits:(BOOL)b;
- (NSUInteger)minimumSignificantDigits;
- (void)setMinimumSignificantDigits:(NSUInteger)number;
- (NSUInteger)maximumSignificantDigits;
- (void)setMaximumSignificantDigits:(NSUInteger)number;
- (BOOL)isPartialStringValidationEnabled;
- (void)setPartialStringValidationEnabled:(BOOL)b;

#pragma clang diagnostic pop

@end
