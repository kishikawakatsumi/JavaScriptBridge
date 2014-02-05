#import <Foundation/Foundation.h>
#import <CoreLocation/CLRegion.h>
#import <CoreLocation/CLLocation.h>
#import <CoreLocation/CLAvailability.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBCLRegion;

@protocol JSBCLCircularRegion <JSExport, JSBCLRegion>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithCenter:(CLLocationCoordinate2D)center radius:(CLLocationDistance)radius identifier:(NSString *)identifier;
- (BOOL)containsCoordinate:(CLLocationCoordinate2D)coordinate;

#pragma clang diagnostic pop

@end
