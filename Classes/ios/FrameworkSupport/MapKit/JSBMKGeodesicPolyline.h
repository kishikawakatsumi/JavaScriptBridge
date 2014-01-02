#import <MapKit/MKPolyline.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKPolyline;

@protocol JSBMKGeodesicPolyline <JSExport, JSBMKPolyline>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)polylineWithPoints:(MKMapPoint *)points count:(NSUInteger)count;
+ (instancetype)polylineWithCoordinates:(CLLocationCoordinate2D *)coords count:(NSUInteger)count;

#pragma clang diagnostic pop

@end
