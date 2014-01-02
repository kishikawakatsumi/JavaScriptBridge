#import <Foundation/Foundation.h>
#import <EventKit/EventKitDefines.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKRecurrenceEnd <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSUInteger occurrenceCount;

+ (id)recurrenceEndWithEndDate:(NSDate *)endDate;
+ (id)recurrenceEndWithOccurrenceCount:(NSUInteger)occurrenceCount;

#pragma clang diagnostic pop

@end
