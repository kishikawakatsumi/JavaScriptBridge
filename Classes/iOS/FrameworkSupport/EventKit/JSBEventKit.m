#import "JSBEventKit.h"
#import "JSBEKEventStore.h"
#import "JSBEKRecurrenceDayOfWeek.h"
#import "JSBEKRecurrenceEnd.h"
#import "JSBEKAlarm.h"
#import "JSBEKCalendar.h"
#import "JSBEKCalendarItem.h"
#import "JSBEKParticipant.h"
#import "JSBEKRecurrenceRule.h"
#import "JSBEKSource.h"
#import "JSBEKStructuredLocation.h"
#import "JSBEKEvent.h"
#import "JSBEKReminder.h"

@import ObjectiveC;

@implementation JSBEventKit

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([EKEventStore class], @protocol(JSBEKEventStore));
    context[@"EKEventStore"] = [EKEventStore class];

    class_addProtocol([EKRecurrenceDayOfWeek class], @protocol(JSBEKRecurrenceDayOfWeek));
    context[@"EKRecurrenceDayOfWeek"] = [EKRecurrenceDayOfWeek class];

    class_addProtocol([EKRecurrenceEnd class], @protocol(JSBEKRecurrenceEnd));
    context[@"EKRecurrenceEnd"] = [EKRecurrenceEnd class];

    class_addProtocol([EKAlarm class], @protocol(JSBEKAlarm));
    context[@"EKAlarm"] = [EKAlarm class];

    class_addProtocol([EKCalendar class], @protocol(JSBEKCalendar));
    context[@"EKCalendar"] = [EKCalendar class];

    class_addProtocol([EKCalendarItem class], @protocol(JSBEKCalendarItem));
    context[@"EKCalendarItem"] = [EKCalendarItem class];

    class_addProtocol([EKParticipant class], @protocol(JSBEKParticipant));
    context[@"EKParticipant"] = [EKParticipant class];

    class_addProtocol([EKRecurrenceRule class], @protocol(JSBEKRecurrenceRule));
    context[@"EKRecurrenceRule"] = [EKRecurrenceRule class];

    class_addProtocol([EKSource class], @protocol(JSBEKSource));
    context[@"EKSource"] = [EKSource class];

    class_addProtocol([EKStructuredLocation class], @protocol(JSBEKStructuredLocation));
    context[@"EKStructuredLocation"] = [EKStructuredLocation class];

    class_addProtocol([EKEvent class], @protocol(JSBEKEvent));
    context[@"EKEvent"] = [EKEvent class];

    class_addProtocol([EKReminder class], @protocol(JSBEKReminder));
    context[@"EKReminder"] = [EKReminder class];

#pragma clang diagnostic pop
}

@end
