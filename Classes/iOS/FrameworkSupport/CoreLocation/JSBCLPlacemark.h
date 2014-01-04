#import <Foundation/Foundation.h>
#import <CoreLocation/CLAvailability.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCLPlacemark <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *ISOcountryCode;
@property (nonatomic, readonly) NSString *subAdministrativeArea;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (nonatomic, readonly) NSString *subLocality;
@property (nonatomic, readonly) NSString *thoroughfare;
@property (nonatomic, readonly) NSString *administrativeArea;
@property (nonatomic, readonly) NSString *ocean;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *subThoroughfare;
@property (nonatomic, readonly) CLRegion *region;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *inlandWater;
@property (nonatomic, readonly) NSDictionary *addressDictionary;
@property (nonatomic, readonly) NSString *locality;
@property (nonatomic, readonly) NSString *name;

- (id)initWithPlacemark:(CLPlacemark *)placemark;

#pragma clang diagnostic pop

@end
