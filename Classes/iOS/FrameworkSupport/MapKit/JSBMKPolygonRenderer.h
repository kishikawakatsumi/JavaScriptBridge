#import <MapKit/MKOverlayPathRenderer.h>
#import <MapKit/MKPolygon.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayPathRenderer;

@protocol JSBMKPolygonRenderer <JSExport, JSBMKOverlayPathRenderer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKPolygon *polygon;

- (id)initWithPolygon:(MKPolygon *)polygon;

#pragma clang diagnostic pop

@end
