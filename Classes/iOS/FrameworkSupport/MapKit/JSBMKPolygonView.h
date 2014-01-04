#import <MapKit/MKPolygon.h>
#import <MapKit/MKOverlayPathView.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayPathView;

@protocol JSBMKPolygonView <JSExport, JSBMKOverlayPathView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKPolygon *polygon;

- (id)initWithPolygon:(MKPolygon *)polygon;

#pragma clang diagnostic pop

@end
