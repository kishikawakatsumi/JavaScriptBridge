#import <EventKit/EventKitDefines.h>
#import <EventKit/EKObject.h>
#import <CoreLocation/CLLocation.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKStructuredLocation <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) CLLocation *geoLocation;
@property (nonatomic) double radius;

+ (EKStructuredLocation *)locationWithTitle:(NSString *)title;

#pragma clang diagnostic pop

@end
