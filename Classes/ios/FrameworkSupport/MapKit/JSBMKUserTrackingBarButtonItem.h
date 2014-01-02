#import <UIKit/UIBarButtonItem.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBUIBarButtonItem;

@protocol JSBMKUserTrackingBarButtonItem <JSExport, JSBUIBarButtonItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) MKMapView *mapView;

- (id)initWithMapView:(MKMapView *)mapView;

#pragma clang diagnostic pop

@end
