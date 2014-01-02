#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBMapKitTests : XCTestCase

@end

@implementation JSBMapKitTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testInstantiation
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"MapKit"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var mkdirections = MKDirections.new();"];
    value = context[@"mkdirections"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkdirectionsrequest = MKDirectionsRequest.new();"];
    value = context[@"mkdirectionsrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkroutestep = MKRouteStep.new();"];
    value = context[@"mkroutestep"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkdirectionsresponse = MKDirectionsResponse.new();"];
    value = context[@"mkdirectionsresponse"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkroute = MKRoute.new();"];
    value = context[@"mkroute"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mketaresponse = MKETAResponse.new();"];
    value = context[@"mketaresponse"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mklocalsearch = MKLocalSearch.new();"];
    value = context[@"mklocalsearch"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mklocalsearchrequest = MKLocalSearchRequest.new();"];
    value = context[@"mklocalsearchrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mklocalsearchresponse = MKLocalSearchResponse.new();"];
    value = context[@"mklocalsearchresponse"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkmapcamera = MKMapCamera.new();"];
    value = context[@"mkmapcamera"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkmapitem = MKMapItem.new();"];
    value = context[@"mkmapitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkmapsnapshot = MKMapSnapshot.new();"];
    value = context[@"mkmapsnapshot"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkmapsnapshotoptions = MKMapSnapshotOptions.new();"];
    value = context[@"mkmapsnapshotoptions"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkmapsnapshotter = MKMapSnapshotter.new();"];
    value = context[@"mkmapsnapshotter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkoverlayrenderer = MKOverlayRenderer.new();"];
    value = context[@"mkoverlayrenderer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkreversegeocoder = MKReverseGeocoder.new();"];
    value = context[@"mkreversegeocoder"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkshape = MKShape.new();"];
    value = context[@"mkshape"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mktileoverlay = MKTileOverlay.new();"];
    value = context[@"mktileoverlay"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkuserlocation = MKUserLocation.new();"];
    value = context[@"mkuserlocation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkannotationview = MKAnnotationView.new();"];
    value = context[@"mkannotationview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkcircle = MKCircle.new();"];
    value = context[@"mkcircle"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkdistanceformatter = MKDistanceFormatter.new();"];
    value = context[@"mkdistanceformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkmapview = MKMapView.new();"];
    value = context[@"mkmapview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkmultipoint = MKMultiPoint.new();"];
    value = context[@"mkmultipoint"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkoverlaypathrenderer = MKOverlayPathRenderer.new();"];
    value = context[@"mkoverlaypathrenderer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkoverlayview = MKOverlayView.new();"];
    value = context[@"mkoverlayview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkplacemark = MKPlacemark.new();"];
    value = context[@"mkplacemark"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpointannotation = MKPointAnnotation.new();"];
    value = context[@"mkpointannotation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mktileoverlayrenderer = MKTileOverlayRenderer.new();"];
    value = context[@"mktileoverlayrenderer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkusertrackingbarbuttonitem = MKUserTrackingBarButtonItem.new();"];
    value = context[@"mkusertrackingbarbuttonitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkcirclerenderer = MKCircleRenderer.new();"];
    value = context[@"mkcirclerenderer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkoverlaypathview = MKOverlayPathView.new();"];
    value = context[@"mkoverlaypathview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpinannotationview = MKPinAnnotationView.new();"];
    value = context[@"mkpinannotationview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpolygon = MKPolygon.new();"];
    value = context[@"mkpolygon"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpolygonrenderer = MKPolygonRenderer.new();"];
    value = context[@"mkpolygonrenderer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpolyline = MKPolyline.new();"];
    value = context[@"mkpolyline"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpolylinerenderer = MKPolylineRenderer.new();"];
    value = context[@"mkpolylinerenderer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkcircleview = MKCircleView.new();"];
    value = context[@"mkcircleview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkgeodesicpolyline = MKGeodesicPolyline.new();"];
    value = context[@"mkgeodesicpolyline"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpolygonview = MKPolygonView.new();"];
    value = context[@"mkpolygonview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var mkpolylineview = MKPolylineView.new();"];
    value = context[@"mkpolylineview"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
