#import <MapKit/MKShape.h>
#import <MapKit/MKOverlay.h>
#import <MapKit/MKGeometry.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKShape;

@protocol JSBMKCircle <JSExport, JSBMKShape>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKMapRect boundingMapRect;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) CLLocationDistance radius;

+ (MKCircle *)circleWithCenterCoordinate:(CLLocationCoordinate2D)coord radius:(CLLocationDistance)radius;
+ (MKCircle *)circleWithMapRect:(MKMapRect)mapRect;

#pragma clang diagnostic pop

@end
