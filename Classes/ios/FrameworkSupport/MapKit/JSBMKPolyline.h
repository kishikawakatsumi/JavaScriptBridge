#import <MapKit/MKMultiPoint.h>
#import <MapKit/MKOverlay.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKMultiPoint;

@protocol JSBMKPolyline <JSExport, JSBMKMultiPoint>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)polylineWithPoints:(MKMapPoint *)points count:(NSUInteger)count;
+ (instancetype)polylineWithCoordinates:(CLLocationCoordinate2D *)coords count:(NSUInteger)count;

#pragma clang diagnostic pop

@end
