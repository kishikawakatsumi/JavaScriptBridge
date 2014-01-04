#import "JSBMapKit.h"
#import "JSBMKDirections.h"
#import "JSBMKDirectionsRequest.h"
#import "JSBMKRouteStep.h"
#import "JSBMKDirectionsResponse.h"
#import "JSBMKRoute.h"
#import "JSBMKETAResponse.h"
#import "JSBNSValue.h"
#import "JSBMKLocalSearch.h"
#import "JSBMKLocalSearchRequest.h"
#import "JSBMKLocalSearchResponse.h"
#import "JSBMKMapCamera.h"
#import "JSBMKMapItem.h"
#import "JSBMKMapSnapshot.h"
#import "JSBMKMapSnapshotOptions.h"
#import "JSBMKMapSnapshotter.h"
#import "JSBMKOverlayRenderer.h"
#import "JSBMKReverseGeocoder.h"
#import "JSBMKShape.h"
#import "JSBMKTileOverlay.h"
#import "JSBMKUserLocation.h"
#import "JSBMKAnnotationView.h"
#import "JSBMKCircle.h"
#import "JSBMKDistanceFormatter.h"
#import "JSBMKMapView.h"
#import "JSBMKMultiPoint.h"
#import "JSBMKOverlayPathRenderer.h"
#import "JSBMKOverlayView.h"
#import "JSBMKPlacemark.h"
#import "JSBMKPointAnnotation.h"
#import "JSBMKTileOverlayRenderer.h"
#import "JSBMKUserTrackingBarButtonItem.h"
#import "JSBMKCircleRenderer.h"
#import "JSBMKOverlayPathView.h"
#import "JSBMKPinAnnotationView.h"
#import "JSBMKPolygon.h"
#import "JSBMKPolygonRenderer.h"
#import "JSBMKPolyline.h"
#import "JSBMKPolylineRenderer.h"
#import "JSBMKCircleView.h"
#import "JSBMKGeodesicPolyline.h"
#import "JSBMKPolygonView.h"
#import "JSBMKPolylineView.h"

@import ObjectiveC;

@implementation JSBMapKit

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([MKDirections class], @protocol(JSBMKDirections));
    context[@"MKDirections"] = [MKDirections class];

    class_addProtocol([MKDirectionsRequest class], @protocol(JSBMKDirectionsRequest));
    context[@"MKDirectionsRequest"] = [MKDirectionsRequest class];

    class_addProtocol([MKRouteStep class], @protocol(JSBMKRouteStep));
    context[@"MKRouteStep"] = [MKRouteStep class];

    class_addProtocol([MKDirectionsResponse class], @protocol(JSBMKDirectionsResponse));
    context[@"MKDirectionsResponse"] = [MKDirectionsResponse class];

    class_addProtocol([MKRoute class], @protocol(JSBMKRoute));
    context[@"MKRoute"] = [MKRoute class];

    class_addProtocol([MKETAResponse class], @protocol(JSBMKETAResponse));
    context[@"MKETAResponse"] = [MKETAResponse class];

    class_addProtocol([NSValue class], @protocol(JSBNSValue));
    context[@"NSValue"] = [NSValue class];

    class_addProtocol([MKLocalSearch class], @protocol(JSBMKLocalSearch));
    context[@"MKLocalSearch"] = [MKLocalSearch class];

    class_addProtocol([MKLocalSearchRequest class], @protocol(JSBMKLocalSearchRequest));
    context[@"MKLocalSearchRequest"] = [MKLocalSearchRequest class];

    class_addProtocol([MKLocalSearchResponse class], @protocol(JSBMKLocalSearchResponse));
    context[@"MKLocalSearchResponse"] = [MKLocalSearchResponse class];

    class_addProtocol([MKMapCamera class], @protocol(JSBMKMapCamera));
    context[@"MKMapCamera"] = [MKMapCamera class];

    class_addProtocol([MKMapItem class], @protocol(JSBMKMapItem));
    context[@"MKMapItem"] = [MKMapItem class];

    class_addProtocol([MKMapSnapshot class], @protocol(JSBMKMapSnapshot));
    context[@"MKMapSnapshot"] = [MKMapSnapshot class];

    class_addProtocol([MKMapSnapshotOptions class], @protocol(JSBMKMapSnapshotOptions));
    context[@"MKMapSnapshotOptions"] = [MKMapSnapshotOptions class];

    class_addProtocol([MKMapSnapshotter class], @protocol(JSBMKMapSnapshotter));
    context[@"MKMapSnapshotter"] = [MKMapSnapshotter class];

    class_addProtocol([MKOverlayRenderer class], @protocol(JSBMKOverlayRenderer));
    context[@"MKOverlayRenderer"] = [MKOverlayRenderer class];

    class_addProtocol([MKReverseGeocoder class], @protocol(JSBMKReverseGeocoder));
    context[@"MKReverseGeocoder"] = [MKReverseGeocoder class];

    class_addProtocol([MKShape class], @protocol(JSBMKShape));
    context[@"MKShape"] = [MKShape class];

    class_addProtocol([MKTileOverlay class], @protocol(JSBMKTileOverlay));
    context[@"MKTileOverlay"] = [MKTileOverlay class];

    class_addProtocol([MKUserLocation class], @protocol(JSBMKUserLocation));
    context[@"MKUserLocation"] = [MKUserLocation class];

    class_addProtocol([MKAnnotationView class], @protocol(JSBMKAnnotationView));
    context[@"MKAnnotationView"] = [MKAnnotationView class];

    class_addProtocol([MKCircle class], @protocol(JSBMKCircle));
    context[@"MKCircle"] = [MKCircle class];

    class_addProtocol([MKDistanceFormatter class], @protocol(JSBMKDistanceFormatter));
    context[@"MKDistanceFormatter"] = [MKDistanceFormatter class];

    class_addProtocol([MKMapView class], @protocol(JSBMKMapView));
    context[@"MKMapView"] = [MKMapView class];

    class_addProtocol([MKMultiPoint class], @protocol(JSBMKMultiPoint));
    context[@"MKMultiPoint"] = [MKMultiPoint class];

    class_addProtocol([MKOverlayPathRenderer class], @protocol(JSBMKOverlayPathRenderer));
    context[@"MKOverlayPathRenderer"] = [MKOverlayPathRenderer class];

    class_addProtocol([MKOverlayView class], @protocol(JSBMKOverlayView));
    context[@"MKOverlayView"] = [MKOverlayView class];

    class_addProtocol([MKPlacemark class], @protocol(JSBMKPlacemark));
    context[@"MKPlacemark"] = [MKPlacemark class];

    class_addProtocol([MKPointAnnotation class], @protocol(JSBMKPointAnnotation));
    context[@"MKPointAnnotation"] = [MKPointAnnotation class];

    class_addProtocol([MKTileOverlayRenderer class], @protocol(JSBMKTileOverlayRenderer));
    context[@"MKTileOverlayRenderer"] = [MKTileOverlayRenderer class];

    class_addProtocol([MKUserTrackingBarButtonItem class], @protocol(JSBMKUserTrackingBarButtonItem));
    context[@"MKUserTrackingBarButtonItem"] = [MKUserTrackingBarButtonItem class];

    class_addProtocol([MKCircleRenderer class], @protocol(JSBMKCircleRenderer));
    context[@"MKCircleRenderer"] = [MKCircleRenderer class];

    class_addProtocol([MKOverlayPathView class], @protocol(JSBMKOverlayPathView));
    context[@"MKOverlayPathView"] = [MKOverlayPathView class];

    class_addProtocol([MKPinAnnotationView class], @protocol(JSBMKPinAnnotationView));
    context[@"MKPinAnnotationView"] = [MKPinAnnotationView class];

    class_addProtocol([MKPolygon class], @protocol(JSBMKPolygon));
    context[@"MKPolygon"] = [MKPolygon class];

    class_addProtocol([MKPolygonRenderer class], @protocol(JSBMKPolygonRenderer));
    context[@"MKPolygonRenderer"] = [MKPolygonRenderer class];

    class_addProtocol([MKPolyline class], @protocol(JSBMKPolyline));
    context[@"MKPolyline"] = [MKPolyline class];

    class_addProtocol([MKPolylineRenderer class], @protocol(JSBMKPolylineRenderer));
    context[@"MKPolylineRenderer"] = [MKPolylineRenderer class];

    class_addProtocol([MKCircleView class], @protocol(JSBMKCircleView));
    context[@"MKCircleView"] = [MKCircleView class];

    class_addProtocol([MKGeodesicPolyline class], @protocol(JSBMKGeodesicPolyline));
    context[@"MKGeodesicPolyline"] = [MKGeodesicPolyline class];

    class_addProtocol([MKPolygonView class], @protocol(JSBMKPolygonView));
    context[@"MKPolygonView"] = [MKPolygonView class];

    class_addProtocol([MKPolylineView class], @protocol(JSBMKPolylineView));
    context[@"MKPolylineView"] = [MKPolylineView class];

#pragma clang diagnostic pop
}

@end
