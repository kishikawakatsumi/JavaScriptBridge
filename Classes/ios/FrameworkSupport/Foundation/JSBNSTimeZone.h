#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSTimeZone <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSTimeZone *)systemTimeZone;
+ (void)resetSystemTimeZone;
+ (NSTimeZone *)defaultTimeZone;
+ (void)setDefaultTimeZone:(NSTimeZone *)aTimeZone;
+ (NSTimeZone *)localTimeZone;
+ (NSArray *)knownTimeZoneNames;
+ (NSDictionary *)abbreviationDictionary;
+ (void)setAbbreviationDictionary:(NSDictionary *)dict;
+ (NSString *)timeZoneDataVersion;
+ (id)timeZoneWithName:(NSString *)tzName;
+ (id)timeZoneWithName:(NSString *)tzName data:(NSData *)aData;
+ (id)timeZoneForSecondsFromGMT:(NSInteger)seconds;
+ (id)timeZoneWithAbbreviation:(NSString *)abbreviation;

- (NSString *)name;
- (NSData *)data;
- (NSInteger)secondsFromGMTForDate:(NSDate *)aDate;
- (NSString *)abbreviationForDate:(NSDate *)aDate;
- (BOOL)isDaylightSavingTimeForDate:(NSDate *)aDate;
- (NSTimeInterval)daylightSavingTimeOffsetForDate:(NSDate *)aDate;
- (NSDate *)nextDaylightSavingTimeTransitionAfterDate:(NSDate *)aDate;
- (NSInteger)secondsFromGMT;
- (NSString *)abbreviation;
- (BOOL)isDaylightSavingTime;
- (NSTimeInterval)daylightSavingTimeOffset;
- (NSDate *)nextDaylightSavingTimeTransition;
- (NSString *)description;
- (BOOL)isEqualToTimeZone:(NSTimeZone *)aTimeZone;
- (NSString *)localizedName:(NSTimeZoneNameStyle)style locale:(NSLocale *)locale;
- (id)initWithName:(NSString *)tzName;
- (id)initWithName:(NSString *)tzName data:(NSData *)aData;

#pragma clang diagnostic pop

@end
