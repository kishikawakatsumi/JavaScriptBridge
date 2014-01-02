#import <Foundation/Foundation.h>
#import <EventKit/EventKitDefines.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKRecurrenceDayOfWeek <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSInteger dayOfTheWeek;
@property (nonatomic, readonly) NSInteger weekNumber;

+ (EKRecurrenceDayOfWeek *)dayOfWeek:(NSInteger)dayOfTheWeek;
+ (EKRecurrenceDayOfWeek *)dayOfWeek:(NSInteger)dayOfTheWeek weekNumber:(NSInteger)weekNumber;

- (id)initWithDayOfTheWeek:(NSInteger)dayOfTheWeek weekNumber:(NSInteger)weekNumber;

#pragma clang diagnostic pop

@end
