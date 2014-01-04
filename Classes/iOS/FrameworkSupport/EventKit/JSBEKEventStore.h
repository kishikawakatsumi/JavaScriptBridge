#import <Foundation/Foundation.h>
#import <EventKit/EventKitDefines.h>
#import <EventKit/EKTypes.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKEventStore <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) EKCalendar *defaultCalendarForNewEvents;
@property (nonatomic, readonly) NSString *eventStoreIdentifier;
@property (nonatomic, readonly) NSArray *calendars;

+ (EKAuthorizationStatus)authorizationStatusForEntityType:(EKEntityType)entityType;

- (void)requestAccessToEntityType:(EKEntityType)entityType completion:(EKEventStoreRequestAccessCompletionHandler)completion;
- (NSArray *)sources;
- (EKSource *)sourceWithIdentifier:(NSString *)identifier;
- (NSArray *)calendarsForEntityType:(EKEntityType)entityType;
- (EKCalendar *)defaultCalendarForNewReminders;
- (EKCalendar *)calendarWithIdentifier:(NSString *)identifier;
- (BOOL)saveCalendar:(EKCalendar *)calendar commit:(BOOL)commit error:(NSError **)error;
- (BOOL)removeCalendar:(EKCalendar *)calendar commit:(BOOL)commit error:(NSError **)error;
- (EKCalendarItem *)calendarItemWithIdentifier:(NSString *)identifier;
- (NSArray *)calendarItemsWithExternalIdentifier:(NSString *)externalIdentifier;
- (BOOL)saveEvent:(EKEvent *)event span:(EKSpan)span error:(NSError **)error;
- (BOOL)removeEvent:(EKEvent *)event span:(EKSpan)span error:(NSError **)error;
- (BOOL)saveEvent:(EKEvent *)event span:(EKSpan)span commit:(BOOL)commit error:(NSError **)error;
- (BOOL)removeEvent:(EKEvent *)event span:(EKSpan)span commit:(BOOL)commit error:(NSError **)error;
- (EKEvent *)eventWithIdentifier:(NSString *)identifier;
- (NSArray *)eventsMatchingPredicate:(NSPredicate *)predicate;
- (void)enumerateEventsMatchingPredicate:(NSPredicate *)predicate usingBlock:(EKEventSearchCallback)block;
- (NSPredicate *)predicateForEventsWithStartDate:(NSDate *)startDate endDate:(NSDate *)endDate calendars:(NSArray *)calendars;
- (BOOL)saveReminder:(EKReminder *)reminder commit:(BOOL)commit error:(NSError **)error;
- (BOOL)removeReminder:(EKReminder *)reminder commit:(BOOL)commit error:(NSError **)error;
- (id)fetchRemindersMatchingPredicate:(NSPredicate *)predicate completion:(void (^)(NSArray *reminders))completion;
- (void)cancelFetchRequest:(id)fetchIdentifier;
- (NSPredicate *)predicateForRemindersInCalendars:(NSArray *)calendars;
- (NSPredicate *)predicateForIncompleteRemindersWithDueDateStarting:(NSDate *)startDate ending:(NSDate *)endDate calendars:(NSArray *)calendars;
- (NSPredicate *)predicateForCompletedRemindersWithCompletionDateStarting:(NSDate *)startDate ending:(NSDate *)endDate calendars:(NSArray *)calendars;
- (BOOL)commit:(NSError **)error;
- (void)reset;
- (void)refreshSourcesIfNecessary;

#pragma clang diagnostic pop

@end
