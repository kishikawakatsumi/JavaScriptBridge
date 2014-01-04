#import <Foundation/Foundation.h>
#import <EventKit/EventKitDefines.h>
#import <EventKit/EKParticipant.h>
#import <EventKit/EKCalendarItem.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBEKCalendarItem;

@protocol JSBEKEvent <JSExport, JSBEKCalendarItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) EKParticipant *organizer;
@property (nonatomic, getter = isAllDay) BOOL allDay;
@property (nonatomic) EKEventAvailability availability;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, readonly) EKEventStatus status;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) BOOL isDetached;
@property (nonatomic, readonly) NSInteger birthdayPersonID;

+ (EKEvent *)eventWithEventStore:(EKEventStore *)eventStore;

- (NSComparisonResult)compareStartDateWithEvent:(EKEvent *)other;
- (BOOL)refresh;

#pragma clang diagnostic pop

@end
