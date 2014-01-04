#import <Foundation/NSFormatter.h>
#include<CoreFoundation/CFDateFormatter.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSFormatter;

@protocol JSBNSDateFormatter <JSExport, JSBNSFormatter>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSString *)localizedStringFromDate:(NSDate *)date dateStyle:(NSDateFormatterStyle)dstyle timeStyle:(NSDateFormatterStyle)tstyle;
+ (NSString *)dateFormatFromTemplate:(NSString *)tmplate options:(NSUInteger)opts locale:(NSLocale *)locale;
+ (NSDateFormatterBehavior)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:(NSDateFormatterBehavior)behavior;

- (BOOL)getObjectValue:(out id *)obj forString:(NSString *)string range:(inout NSRange *)rangep error:(out NSError **)error;
- (NSString *)stringFromDate:(NSDate *)date;
- (NSDate *)dateFromString:(NSString *)string;
- (NSString *)dateFormat;
- (NSDateFormatterStyle)dateStyle;
- (void)setDateStyle:(NSDateFormatterStyle)style;
- (NSDateFormatterStyle)timeStyle;
- (void)setTimeStyle:(NSDateFormatterStyle)style;
- (NSLocale *)locale;
- (void)setLocale:(NSLocale *)locale;
- (BOOL)generatesCalendarDates;
- (void)setGeneratesCalendarDates:(BOOL)b;
- (NSDateFormatterBehavior)formatterBehavior;
- (void)setFormatterBehavior:(NSDateFormatterBehavior)behavior;
- (void)setDateFormat:(NSString *)string;
- (NSTimeZone *)timeZone;
- (void)setTimeZone:(NSTimeZone *)tz;
- (NSCalendar *)calendar;
- (void)setCalendar:(NSCalendar *)calendar;
- (BOOL)isLenient;
- (void)setLenient:(BOOL)b;
- (NSDate *)twoDigitStartDate;
- (void)setTwoDigitStartDate:(NSDate *)date;
- (NSDate *)defaultDate;
- (void)setDefaultDate:(NSDate *)date;
- (NSArray *)eraSymbols;
- (void)setEraSymbols:(NSArray *)array;
- (NSArray *)monthSymbols;
- (void)setMonthSymbols:(NSArray *)array;
- (NSArray *)shortMonthSymbols;
- (void)setShortMonthSymbols:(NSArray *)array;
- (NSArray *)weekdaySymbols;
- (void)setWeekdaySymbols:(NSArray *)array;
- (NSArray *)shortWeekdaySymbols;
- (void)setShortWeekdaySymbols:(NSArray *)array;
- (NSString *)AMSymbol;
- (void)setAMSymbol:(NSString *)string;
- (NSString *)PMSymbol;
- (void)setPMSymbol:(NSString *)string;
- (NSArray *)longEraSymbols;
- (void)setLongEraSymbols:(NSArray *)array;
- (NSArray *)veryShortMonthSymbols;
- (void)setVeryShortMonthSymbols:(NSArray *)array;
- (NSArray *)standaloneMonthSymbols;
- (void)setStandaloneMonthSymbols:(NSArray *)array;
- (NSArray *)shortStandaloneMonthSymbols;
- (void)setShortStandaloneMonthSymbols:(NSArray *)array;
- (NSArray *)veryShortStandaloneMonthSymbols;
- (void)setVeryShortStandaloneMonthSymbols:(NSArray *)array;
- (NSArray *)veryShortWeekdaySymbols;
- (void)setVeryShortWeekdaySymbols:(NSArray *)array;
- (NSArray *)standaloneWeekdaySymbols;
- (void)setStandaloneWeekdaySymbols:(NSArray *)array;
- (NSArray *)shortStandaloneWeekdaySymbols;
- (void)setShortStandaloneWeekdaySymbols:(NSArray *)array;
- (NSArray *)veryShortStandaloneWeekdaySymbols;
- (void)setVeryShortStandaloneWeekdaySymbols:(NSArray *)array;
- (NSArray *)quarterSymbols;
- (void)setQuarterSymbols:(NSArray *)array;
- (NSArray *)shortQuarterSymbols;
- (void)setShortQuarterSymbols:(NSArray *)array;
- (NSArray *)standaloneQuarterSymbols;
- (void)setStandaloneQuarterSymbols:(NSArray *)array;
- (NSArray *)shortStandaloneQuarterSymbols;
- (void)setShortStandaloneQuarterSymbols:(NSArray *)array;
- (NSDate *)gregorianStartDate;
- (void)setGregorianStartDate:(NSDate *)date;
- (BOOL)doesRelativeDateFormatting;
- (void)setDoesRelativeDateFormatting:(BOOL)b;

#pragma clang diagnostic pop

@end
