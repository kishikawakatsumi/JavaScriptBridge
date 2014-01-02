#import <EventKit/EKObject.h>
#import <EventKit/EventKitDefines.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKCalendarItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *attendees;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSString *calendarItemIdentifier;
@property (nonatomic, copy) NSArray *recurrenceRules;
@property (nonatomic, readonly) BOOL hasNotes;
@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *calendarItemExternalIdentifier;
@property (nonatomic, readonly) BOOL hasAttendees;
@property (nonatomic, readonly) BOOL hasAlarms;
@property (nonatomic, copy) NSArray *alarms;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) BOOL hasRecurrenceRules;

- (void)addAlarm:(EKAlarm *)alarm;
- (void)removeAlarm:(EKAlarm *)alarm;
- (void)addRecurrenceRule:(EKRecurrenceRule *)rule;
- (void)removeRecurrenceRule:(EKRecurrenceRule *)rule;

#pragma clang diagnostic pop

@end
