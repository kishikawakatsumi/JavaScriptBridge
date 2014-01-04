#import <EventKit/EventKitDefines.h>
#import <EventKit/EKObject.h>
#import <EventKit/EKTypes.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKAlarm <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) NSTimeInterval relativeOffset;
@property (nonatomic, copy) NSDate *absoluteDate;
@property (nonatomic) EKAlarmProximity proximity;
@property (nonatomic, copy) EKStructuredLocation *structuredLocation;

+ (EKAlarm *)alarmWithAbsoluteDate:(NSDate *)date;
+ (EKAlarm *)alarmWithRelativeOffset:(NSTimeInterval)offset;

#pragma clang diagnostic pop

@end
