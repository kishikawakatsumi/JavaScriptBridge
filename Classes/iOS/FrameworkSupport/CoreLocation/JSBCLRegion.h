#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>
#import <CoreLocation/CLAvailability.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCLRegion <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CLLocationDistance radius;
@property (nonatomic, assign) BOOL notifyOnEntry;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic, assign) BOOL notifyOnExit;
@property (readonly, nonatomic) CLLocationCoordinate2D center;

- (id)initCircularRegionWithCenter:(CLLocationCoordinate2D)center radius:(CLLocationDistance)radius identifier:(NSString *)identifier;
- (BOOL)containsCoordinate:(CLLocationCoordinate2D)coordinate;

#pragma clang diagnostic pop

@end
