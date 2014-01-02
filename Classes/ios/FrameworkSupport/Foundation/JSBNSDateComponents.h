#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>
#import <Foundation/NSDate.h>
#include<CoreFoundation/CFCalendar.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSDateComponents <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSCalendar *)calendar;
- (NSTimeZone *)timeZone;
- (NSInteger)era;
- (NSInteger)year;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)hour;
- (NSInteger)minute;
- (NSInteger)second;
- (NSInteger)nanosecond;
- (NSInteger)week;
- (NSInteger)weekday;
- (NSInteger)weekdayOrdinal;
- (NSInteger)quarter;
- (NSInteger)weekOfMonth;
- (NSInteger)weekOfYear;
- (NSInteger)yearForWeekOfYear;
- (BOOL)isLeapMonth;
- (void)setCalendar:(NSCalendar *)cal;
- (void)setTimeZone:(NSTimeZone *)tz;
- (void)setEra:(NSInteger)v;
- (void)setYear:(NSInteger)v;
- (void)setMonth:(NSInteger)v;
- (void)setDay:(NSInteger)v;
- (void)setHour:(NSInteger)v;
- (void)setMinute:(NSInteger)v;
- (void)setSecond:(NSInteger)v;
- (void)setNanosecond:(NSInteger)value;
- (void)setWeek:(NSInteger)v;
- (void)setWeekday:(NSInteger)v;
- (void)setWeekdayOrdinal:(NSInteger)v;
- (void)setQuarter:(NSInteger)v;
- (void)setWeekOfMonth:(NSInteger)w;
- (void)setWeekOfYear:(NSInteger)w;
- (void)setYearForWeekOfYear:(NSInteger)y;
- (void)setLeapMonth:(BOOL)lm;
- (NSDate *)date;

#pragma clang diagnostic pop

@end
