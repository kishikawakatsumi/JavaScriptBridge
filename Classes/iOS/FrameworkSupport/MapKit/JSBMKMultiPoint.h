#import <MapKit/MKFoundation.h>
#import <MapKit/MKShape.h>
#import <MapKit/MKGeometry.h>
#import <MapKit/MKTypes.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKShape;

@protocol JSBMKMultiPoint <JSExport, JSBMKShape>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKMapPoint *points;
@property (nonatomic, readonly) NSUInteger pointCount;

- (void)getCoordinates:(CLLocationCoordinate2D *)coords range:(NSRange)range;

#pragma clang diagnostic pop

@end
