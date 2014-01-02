#import <Foundation/Foundation.h>
#import <EventKit/EventKitDefines.h>
#import <EventKit/EKCalendarItem.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBEKCalendarItem;

@protocol JSBEKReminder <JSExport, JSBEKCalendarItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSDateComponents *dueDateComponents;
@property (nonatomic, copy) NSDateComponents *startDateComponents;
@property (nonatomic, getter = isCompleted) BOOL completed;
@property (nonatomic) NSInteger priority;
@property (nonatomic, copy) NSDate *completionDate;

+ (EKReminder *)reminderWithEventStore:(EKEventStore *)eventStore;

#pragma clang diagnostic pop

@end
