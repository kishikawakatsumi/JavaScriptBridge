#import <MapKit/MKFoundation.h>
#import <MapKit/MKAnnotation.h>
#import <CoreLocation/CLLocation.h>
#import <CoreLocation/CLPlacemark.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBCLPlacemark;

@protocol JSBMKPlacemark <JSExport, JSBCLPlacemark>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *countryCode;

- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate addressDictionary:(NSDictionary *)addressDictionary;

#pragma clang diagnostic pop

@end
