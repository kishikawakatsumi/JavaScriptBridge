#import <MapKit/MKFoundation.h>
#import <MapKit/MKMultiPoint.h>
#import <MapKit/MKOverlay.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKMultiPoint;

@protocol JSBMKPolygon <JSExport, JSBMKMultiPoint>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSArray *interiorPolygons;

+ (MKPolygon *)polygonWithPoints:(MKMapPoint *)points count:(NSUInteger)count;
+ (MKPolygon *)polygonWithPoints:(MKMapPoint *)points count:(NSUInteger)count interiorPolygons:(NSArray *)interiorPolygons;
+ (MKPolygon *)polygonWithCoordinates:(CLLocationCoordinate2D *)coords count:(NSUInteger)count;
+ (MKPolygon *)polygonWithCoordinates:(CLLocationCoordinate2D *)coords count:(NSUInteger)count interiorPolygons:(NSArray *)interiorPolygons;

#pragma clang diagnostic pop

@end
