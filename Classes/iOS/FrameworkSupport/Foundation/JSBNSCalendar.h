#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>
#import <Foundation/NSDate.h>
#include<CoreFoundation/CFCalendar.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSCalendar <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)currentCalendar;
+ (id)autoupdatingCurrentCalendar;
+ (id)calendarWithIdentifier:(NSString *)calendarIdentifierConstant;

- (id)initWithCalendarIdentifier:(NSString *)ident;
- (NSString *)calendarIdentifier;
- (void)setLocale:(NSLocale *)locale;
- (NSLocale *)locale;
- (void)setTimeZone:(NSTimeZone *)tz;
- (NSTimeZone *)timeZone;
- (void)setFirstWeekday:(NSUInteger)weekday;
- (NSUInteger)firstWeekday;
- (void)setMinimumDaysInFirstWeek:(NSUInteger)mdw;
- (NSUInteger)minimumDaysInFirstWeek;
- (NSArray *)eraSymbols;
- (NSArray *)longEraSymbols;
- (NSArray *)monthSymbols;
- (NSArray *)shortMonthSymbols;
- (NSArray *)veryShortMonthSymbols;
- (NSArray *)standaloneMonthSymbols;
- (NSArray *)shortStandaloneMonthSymbols;
- (NSArray *)veryShortStandaloneMonthSymbols;
- (NSArray *)weekdaySymbols;
- (NSArray *)shortWeekdaySymbols;
- (NSArray *)veryShortWeekdaySymbols;
- (NSArray *)standaloneWeekdaySymbols;
- (NSArray *)shortStandaloneWeekdaySymbols;
- (NSArray *)veryShortStandaloneWeekdaySymbols;
- (NSArray *)quarterSymbols;
- (NSArray *)shortQuarterSymbols;
- (NSArray *)standaloneQuarterSymbols;
- (NSArray *)shortStandaloneQuarterSymbols;
- (NSString *)AMSymbol;
- (NSString *)PMSymbol;
- (NSRange)minimumRangeOfUnit:(NSCalendarUnit)unit;
- (NSRange)maximumRangeOfUnit:(NSCalendarUnit)unit;
- (NSRange)rangeOfUnit:(NSCalendarUnit)smaller inUnit:(NSCalendarUnit)larger forDate:(NSDate *)date;
- (NSUInteger)ordinalityOfUnit:(NSCalendarUnit)smaller inUnit:(NSCalendarUnit)larger forDate:(NSDate *)date;
- (BOOL)rangeOfUnit:(NSCalendarUnit)unit startDate:(NSDate **)datep interval:(NSTimeInterval *)tip forDate:(NSDate *)date;
- (NSDate *)dateFromComponents:(NSDateComponents *)comps;
- (NSDateComponents *)components:(NSCalendarUnit)unitFlags fromDate:(NSDate *)date;
- (NSDate *)dateByAddingComponents:(NSDateComponents *)comps toDate:(NSDate *)date options:(NSCalendarOptions)opts;
- (NSDateComponents *)components:(NSCalendarUnit)unitFlags fromDate:(NSDate *)startingDate toDate:(NSDate *)resultDate options:(NSCalendarOptions)opts;
- (void)getEra:(out NSInteger *)eraValuePointer year:(out NSInteger *)yearValuePointer month:(out NSInteger *)monthValuePointer day:(out NSInteger *)dayValuePointer fromDate:(NSDate *)date;
- (void)getEra:(out NSInteger *)eraValuePointer yearForWeekOfYear:(out NSInteger *)yearValuePointer weekOfYear:(out NSInteger *)weekValuePointer weekday:(out NSInteger *)weekdayValuePointer fromDate:(NSDate *)date;
- (void)getHour:(out NSInteger *)hourValuePointer minute:(out NSInteger *)minuteValuePointer second:(out NSInteger *)secondValuePointer nanosecond:(out NSInteger *)nanosecondValuePointer fromDate:(NSDate *)date;
- (NSInteger)component:(NSCalendarUnit)unit fromDate:(NSDate *)date;
- (NSDate *)dateWithEra:(NSInteger)eraValue year:(NSInteger)yearValue month:(NSInteger)monthValue day:(NSInteger)dayValue hour:(NSInteger)hourValue minute:(NSInteger)minuteValue second:(NSInteger)secondValue nanosecond:(NSInteger)nanosecondValue;
- (NSDate *)dateWithEra:(NSInteger)eraValue yearForWeekOfYear:(NSInteger)yearValue weekOfYear:(NSInteger)weekValue weekday:(NSInteger)weekdayValue hour:(NSInteger)hourValue minute:(NSInteger)minuteValue second:(NSInteger)secondValue nanosecond:(NSInteger)nanosecondValue;
- (NSDate *)startOfDayForDate:(NSDate *)date;
- (NSDateComponents *)componentsInTimeZone:(NSTimeZone *)timezone fromDate:(NSDate *)date;
- (NSComparisonResult)compareDate:(NSDate *)date1 toDate:(NSDate *)date2 toUnitGranularity:(NSCalendarUnit)unit;
- (BOOL)isDate:(NSDate *)date1 equalToDate:(NSDate *)date2 toUnitGranularity:(NSCalendarUnit)unit;
- (BOOL)isDate:(NSDate *)date1 inSameDayAsDate:(NSDate *)date2;
- (BOOL)isDateInToday:(NSDate *)date;
- (BOOL)isDateInYesterday:(NSDate *)date;
- (BOOL)isDateInTomorrow:(NSDate *)date;
- (BOOL)isDateInWeekend:(NSDate *)date;
- (BOOL)rangeOfWeekendStartDate:(out NSDate **)datep interval:(out NSTimeInterval *)tip containingDate:(NSDate *)date;
- (BOOL)nextWeekendStartDate:(out NSDate **)datep interval:(out NSTimeInterval *)tip options:(NSCalendarOptions)options afterDate:(NSDate *)date;
- (NSDateComponents *)components:(NSCalendarUnit)unitFlags fromDateComponents:(NSDateComponents *)startingDateComp toDateComponents:(NSDateComponents *)resultDateComp options:(NSCalendarOptions)options;
- (NSDate *)dateByAddingUnit:(NSCalendarUnit)unit value:(NSInteger)value toDate:(NSDate *)date options:(NSCalendarOptions)options;
- (void)enumerateDatesStartingAfterDate:(NSDate *)start matchingComponents:(NSDateComponents *)comps options:(NSCalendarOptions)opts usingBlock:(void (^)(NSDate *date , BOOL exactMatch , BOOL *stop))block;
- (NSDate *)nextDateAfterDate:(NSDate *)date matchingComponents:(NSDateComponents *)comps options:(NSCalendarOptions)options;
- (NSDate *)nextDateAfterDate:(NSDate *)date matchingUnit:(NSCalendarUnit)unit value:(NSInteger)value options:(NSCalendarOptions)options;
- (NSDate *)nextDateAfterDate:(NSDate *)date matchingHour:(NSInteger)hourValue minute:(NSInteger)minuteValue second:(NSInteger)secondValue options:(NSCalendarOptions)options;
- (NSDate *)dateBySettingUnit:(NSCalendarUnit)unit value:(NSInteger)v ofDate:(NSDate *)date options:(NSCalendarOptions)opts;
- (NSDate *)dateBySettingHour:(NSInteger)h minute:(NSInteger)m second:(NSInteger)s ofDate:(NSDate *)date options:(NSCalendarOptions)opts;
- (BOOL)date:(NSDate *)date matchesComponents:(NSDateComponents *)components;

#pragma clang diagnostic pop

@end
