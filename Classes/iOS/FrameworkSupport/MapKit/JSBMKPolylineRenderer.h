#import <MapKit/MKFoundation.h>
#import <MapKit/MKOverlayPathRenderer.h>
#import <MapKit/MKPolyline.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayPathRenderer;

@protocol JSBMKPolylineRenderer <JSExport, JSBMKOverlayPathRenderer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKPolyline *polyline;

- (id)initWithPolyline:(MKPolyline *)polyline;

#pragma clang diagnostic pop

@end
