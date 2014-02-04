#import <EventKit/EventKitDefines.h>
#import <EventKit/EKObject.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <EventKit/EKTypes.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKCalendar <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) EKSource *source;
@property (nonatomic, readonly, getter = isSubscribed) BOOL subscribed;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) BOOL allowsContentModifications;
@property (nonatomic, readonly, getter = isImmutable) BOOL immutable;
@property (nonatomic, readonly) EKCalendarEventAvailabilityMask supportedEventAvailabilities;
@property (nonatomic, readonly) EKCalendarType type;
@property (nonatomic, readonly) EKEntityMask allowedEntityTypes;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic) id CGColor;

+ (EKCalendar *)calendarWithEventStore:(EKEventStore *)eventStore;
+ (EKCalendar *)calendarForEntityType:(EKEntityType)entityType eventStore:(EKEventStore *)eventStore;

#pragma clang diagnostic pop

@end
