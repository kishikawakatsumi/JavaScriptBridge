#import <EventKit/EventKitDefines.h>
#import <EventKit/EKObject.h>
#import <EventKit/EKTypes.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKSource <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSSet *calendars;
@property (nonatomic, readonly) EKSourceType sourceType;
@property (nonatomic, readonly) NSString *title;

- (NSSet *)calendarsForEntityType:(EKEntityType)entityType;

#pragma clang diagnostic pop

@end
