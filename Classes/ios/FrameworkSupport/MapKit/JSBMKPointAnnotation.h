#import <MapKit/MKFoundation.h>
#import <MapKit/MKShape.h>
#import <CoreLocation/CLLocation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKShape;

@protocol JSBMKPointAnnotation <JSExport, JSBMKShape>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

#pragma clang diagnostic pop

@end
