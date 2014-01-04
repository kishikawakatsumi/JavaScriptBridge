#import <Foundation/Foundation.h>
#import <EventKit/EventKitDefines.h>
#import <EventKit/EKRecurrenceEnd.h>
#import <EventKit/EKRecurrenceDayOfWeek.h>
#import <EventKit/EKTypes.h>
#import <EventKit/EKObject.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKRecurrenceRule <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) EKRecurrenceFrequency frequency;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) NSInteger firstDayOfTheWeek;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, readonly) NSArray *setPositions;
@property (nonatomic, copy) EKRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSInteger interval;

- (id)initRecurrenceWithFrequency:(EKRecurrenceFrequency)type interval:(NSInteger)interval end:(EKRecurrenceEnd *)end;
- (id)initRecurrenceWithFrequency:(EKRecurrenceFrequency)type interval:(NSInteger)interval daysOfTheWeek:(NSArray *)days daysOfTheMonth:(NSArray *)monthDays monthsOfTheYear:(NSArray *)months weeksOfTheYear:(NSArray *)weeksOfTheYear daysOfTheYear:(NSArray *)daysOfTheYear setPositions:(NSArray *)setPositions end:(EKRecurrenceEnd *)end;

#pragma clang diagnostic pop

@end
