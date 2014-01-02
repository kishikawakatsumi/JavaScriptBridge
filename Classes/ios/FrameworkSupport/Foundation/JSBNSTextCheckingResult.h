#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSTextCheckingResult <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSUInteger numberOfRanges;
@property (readonly) NSDictionary *addressComponents;
@property (readonly) NSTextCheckingType resultType;
@property (readonly) NSString *replacementString;
@property (readonly) NSArray *grammarDetails;
@property (readonly) NSURL *URL;
@property (readonly) NSDate *date;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) NSOrthography *orthography;
@property (readonly) NSRegularExpression *regularExpression;
@property (readonly) NSTimeInterval duration;
@property (readonly) NSRange range;
@property (readonly) NSArray *alternativeStrings;
@property (readonly) NSDictionary *components;
@property (readonly) NSString *phoneNumber;

+ (NSTextCheckingResult *)orthographyCheckingResultWithRange:(NSRange)range orthography:(NSOrthography *)orthography;
+ (NSTextCheckingResult *)spellCheckingResultWithRange:(NSRange)range;
+ (NSTextCheckingResult *)grammarCheckingResultWithRange:(NSRange)range details:(NSArray *)details;
+ (NSTextCheckingResult *)dateCheckingResultWithRange:(NSRange)range date:(NSDate *)date;
+ (NSTextCheckingResult *)dateCheckingResultWithRange:(NSRange)range date:(NSDate *)date timeZone:(NSTimeZone *)timeZone duration:(NSTimeInterval)duration;
+ (NSTextCheckingResult *)addressCheckingResultWithRange:(NSRange)range components:(NSDictionary *)components;
+ (NSTextCheckingResult *)linkCheckingResultWithRange:(NSRange)range URL:(NSURL *)url;
+ (NSTextCheckingResult *)quoteCheckingResultWithRange:(NSRange)range replacementString:(NSString *)replacementString;
+ (NSTextCheckingResult *)dashCheckingResultWithRange:(NSRange)range replacementString:(NSString *)replacementString;
+ (NSTextCheckingResult *)replacementCheckingResultWithRange:(NSRange)range replacementString:(NSString *)replacementString;
+ (NSTextCheckingResult *)correctionCheckingResultWithRange:(NSRange)range replacementString:(NSString *)replacementString;
+ (NSTextCheckingResult *)correctionCheckingResultWithRange:(NSRange)range replacementString:(NSString *)replacementString alternativeStrings:(NSArray *)alternativeStrings;
+ (NSTextCheckingResult *)regularExpressionCheckingResultWithRanges:(NSRangePointer)ranges count:(NSUInteger)count regularExpression:(NSRegularExpression *)regularExpression;
+ (NSTextCheckingResult *)phoneNumberCheckingResultWithRange:(NSRange)range phoneNumber:(NSString *)phoneNumber;
+ (NSTextCheckingResult *)transitInformationCheckingResultWithRange:(NSRange)range components:(NSDictionary *)components;

- (NSRange)rangeAtIndex:(NSUInteger)idx;
- (NSTextCheckingResult *)resultByAdjustingRangesWithOffset:(NSInteger)offset;

#pragma clang diagnostic pop

@end
