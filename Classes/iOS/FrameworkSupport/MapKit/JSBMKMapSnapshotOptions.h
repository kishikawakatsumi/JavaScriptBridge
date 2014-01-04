#import <MapKit/MKFoundation.h>
#import <MapKit/MKGeometry.h>
#import <MapKit/MKTypes.h>
#import <MapKit/MKMapView.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKMapSnapshotOptions <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) MKMapRect mapRect;
@property (nonatomic, copy) MKMapCamera *camera;
@property (nonatomic, assign) MKCoordinateRegion region;
@property (nonatomic, assign) CGFloat scale;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) MKMapType mapType;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL showsBuildings;

#pragma clang diagnostic pop

@end
