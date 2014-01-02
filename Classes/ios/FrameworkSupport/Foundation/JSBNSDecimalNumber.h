#import <Foundation/NSValue.h>
#import <Foundation/NSScanner.h>
#import <Foundation/NSDecimal.h>
#import <Foundation/NSDictionary.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSNumber;

@protocol JSBNSDecimalNumber <JSExport, JSBNSNumber>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSDecimalNumber *)decimalNumberWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)flag;
+ (NSDecimalNumber *)decimalNumberWithString:(NSString *)numberValue;
+ (NSDecimalNumber *)decimalNumberWithString:(NSString *)numberValue locale:(id)locale;
+ (NSDecimalNumber *)zero;
+ (NSDecimalNumber *)one;
+ (NSDecimalNumber *)minimumDecimalNumber;
+ (NSDecimalNumber *)maximumDecimalNumber;
+ (NSDecimalNumber *)notANumber;
+ (void)setDefaultBehavior:(id <NSDecimalNumberBehaviors>)behavior;
+ (id <NSDecimalNumberBehaviors>)defaultBehavior;

- (id)initWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)flag;
- (id)initWithString:(NSString *)numberValue;
- (id)initWithString:(NSString *)numberValue locale:(id)locale;
- (NSString *)descriptionWithLocale:(id)locale;
- (NSDecimalNumber *)decimalNumberByAdding:(NSDecimalNumber *)decimalNumber;
- (NSDecimalNumber *)decimalNumberByAdding:(NSDecimalNumber *)decimalNumber withBehavior:(id <NSDecimalNumberBehaviors>)behavior;
- (NSDecimalNumber *)decimalNumberBySubtracting:(NSDecimalNumber *)decimalNumber;
- (NSDecimalNumber *)decimalNumberBySubtracting:(NSDecimalNumber *)decimalNumber withBehavior:(id <NSDecimalNumberBehaviors>)behavior;
- (NSDecimalNumber *)decimalNumberByMultiplyingBy:(NSDecimalNumber *)decimalNumber;
- (NSDecimalNumber *)decimalNumberByMultiplyingBy:(NSDecimalNumber *)decimalNumber withBehavior:(id <NSDecimalNumberBehaviors>)behavior;
- (NSDecimalNumber *)decimalNumberByDividingBy:(NSDecimalNumber *)decimalNumber;
- (NSDecimalNumber *)decimalNumberByDividingBy:(NSDecimalNumber *)decimalNumber withBehavior:(id <NSDecimalNumberBehaviors>)behavior;
- (NSDecimalNumber *)decimalNumberByRaisingToPower:(NSUInteger)power;
- (NSDecimalNumber *)decimalNumberByRaisingToPower:(NSUInteger)power withBehavior:(id <NSDecimalNumberBehaviors>)behavior;
- (NSDecimalNumber *)decimalNumberByMultiplyingByPowerOf10:(short)power;
- (NSDecimalNumber *)decimalNumberByMultiplyingByPowerOf10:(short)power withBehavior:(id <NSDecimalNumberBehaviors>)behavior;
- (NSDecimalNumber *)decimalNumberByRoundingAccordingToBehavior:(id <NSDecimalNumberBehaviors>)behavior;
- (NSComparisonResult)compare:(NSNumber *)decimalNumber;
- (const char *)objCType;
- (double)doubleValue;

#pragma clang diagnostic pop

@end
