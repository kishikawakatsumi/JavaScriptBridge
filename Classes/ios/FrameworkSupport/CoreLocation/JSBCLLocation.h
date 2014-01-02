#import <Foundation/Foundation.h>
#import <CoreLocation/CLAvailability.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCLLocation <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CLLocationAccuracy verticalAccuracy;
@property (readonly, nonatomic) CLLocationSpeed speed;
@property (readonly, nonatomic) CLLocationDirection course;
@property (readonly, nonatomic) CLLocationAccuracy horizontalAccuracy;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) CLLocationDistance altitude;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;

- (id)initWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude;
- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate altitude:(CLLocationDistance)altitude horizontalAccuracy:(CLLocationAccuracy)hAccuracy verticalAccuracy:(CLLocationAccuracy)vAccuracy timestamp:(NSDate *)timestamp;
- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate altitude:(CLLocationDistance)altitude horizontalAccuracy:(CLLocationAccuracy)hAccuracy verticalAccuracy:(CLLocationAccuracy)vAccuracy course:(CLLocationDirection)course speed:(CLLocationSpeed)speed timestamp:(NSDate *)timestamp;
- (NSString *)description;
- (CLLocationDistance)getDistanceFrom:(const CLLocation *)location;
- (CLLocationDistance)distanceFromLocation:(const CLLocation *)location;

#pragma clang diagnostic pop

@end
