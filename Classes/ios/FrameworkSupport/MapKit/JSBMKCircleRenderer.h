#import <MapKit/MKOverlayPathRenderer.h>
#import <MapKit/MKCircle.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayPathRenderer;

@protocol JSBMKCircleRenderer <JSExport, JSBMKOverlayPathRenderer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKCircle *circle;

- (id)initWithCircle:(MKCircle *)circle;

#pragma clang diagnostic pop

@end
