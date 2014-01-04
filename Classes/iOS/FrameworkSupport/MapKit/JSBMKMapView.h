#import <MapKit/MKAnnotationView.h>
#import <MapKit/MKFoundation.h>
#import <MapKit/MKGeometry.h>
#import <MapKit/MKTypes.h>
#import <MapKit/MKOverlay.h>
#import <MapKit/MKOverlayRenderer.h>
#import <MapKit/MKOverlayView.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBMKMapView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) MKMapRect visibleMapRect;
@property (nonatomic) MKUserTrackingMode userTrackingMode;
@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic, assign) id delegate;
@property (nonatomic, readonly) CGRect annotationVisibleRect;
@property (nonatomic, getter = isRotateEnabled) BOOL rotateEnabled;
@property (nonatomic) MKCoordinateRegion region;
@property (nonatomic, readonly, getter = isUserLocationVisible) BOOL userLocationVisible;
@property (nonatomic, readonly) MKUserLocation *userLocation;
@property (nonatomic) BOOL showsUserLocation;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, copy) NSArray *selectedAnnotations;
@property (nonatomic, getter = isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) MKMapType mapType;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) CLLocationCoordinate2D centerCoordinate;
@property (nonatomic, copy) MKMapCamera *camera;
@property (nonatomic, getter = isPitchEnabled) BOOL pitchEnabled;
@property (nonatomic, getter = isZoomEnabled) BOOL zoomEnabled;
@property (nonatomic) BOOL showsPointsOfInterest;

- (void)setRegion:(MKCoordinateRegion)region animated:(BOOL)animated;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated;
- (MKCoordinateRegion)regionThatFits:(MKCoordinateRegion)region;
- (void)setVisibleMapRect:(MKMapRect)mapRect animated:(BOOL)animate;
- (MKMapRect)mapRectThatFits:(MKMapRect)mapRect;
- (void)setVisibleMapRect:(MKMapRect)mapRect edgePadding:(UIEdgeInsets)insets animated:(BOOL)animate;
- (MKMapRect)mapRectThatFits:(MKMapRect)mapRect edgePadding:(UIEdgeInsets)insets;
- (void)setCamera:(MKMapCamera *)camera animated:(BOOL)animated;
- (CGPoint)convertCoordinate:(CLLocationCoordinate2D)coordinate toPointToView:(UIView *)view;
- (CLLocationCoordinate2D)convertPoint:(CGPoint)point toCoordinateFromView:(UIView *)view;
- (CGRect)convertRegion:(MKCoordinateRegion)region toRectToView:(UIView *)view;
- (MKCoordinateRegion)convertRect:(CGRect)rect toRegionFromView:(UIView *)view;
- (void)setUserTrackingMode:(MKUserTrackingMode)mode animated:(BOOL)animated;
- (void)addAnnotation:(id <MKAnnotation>)annotation;
- (void)addAnnotations:(NSArray *)annotations;
- (void)removeAnnotation:(id <MKAnnotation>)annotation;
- (void)removeAnnotations:(NSArray *)annotations;
- (NSSet *)annotationsInMapRect:(MKMapRect)mapRect;
- (MKAnnotationView *)viewForAnnotation:(id <MKAnnotation>)annotation;
- (MKAnnotationView *)dequeueReusableAnnotationViewWithIdentifier:(NSString *)identifier;
- (void)selectAnnotation:(id <MKAnnotation>)annotation animated:(BOOL)animated;
- (void)deselectAnnotation:(id <MKAnnotation>)annotation animated:(BOOL)animated;
- (void)showAnnotations:(NSArray *)annotations animated:(BOOL)animated;
- (void)addOverlay:(id <MKOverlay>)overlay level:(MKOverlayLevel)level;
- (void)addOverlays:(NSArray *)overlays level:(MKOverlayLevel)level;
- (void)removeOverlay:(id <MKOverlay>)overlay;
- (void)removeOverlays:(NSArray *)overlays;
- (void)insertOverlay:(id <MKOverlay>)overlay atIndex:(NSUInteger)index level:(MKOverlayLevel)level;
- (void)insertOverlay:(id <MKOverlay>)overlay aboveOverlay:(id <MKOverlay>)sibling;
- (void)insertOverlay:(id <MKOverlay>)overlay belowOverlay:(id <MKOverlay>)sibling;
- (void)exchangeOverlay:(id <MKOverlay>)overlay1 withOverlay:(id <MKOverlay>)overlay2;
- (NSArray *)overlaysInLevel:(MKOverlayLevel)level;
- (MKOverlayRenderer *)rendererForOverlay:(id <MKOverlay>)overlay;
- (MKOverlayView *)viewForOverlay:(id <MKOverlay>)overlay;
- (void)addOverlay:(id <MKOverlay>)overlay;
- (void)addOverlays:(NSArray *)overlays;
- (void)insertOverlay:(id <MKOverlay>)overlay atIndex:(NSUInteger)index;
- (void)exchangeOverlayAtIndex:(NSUInteger)index1 withOverlayAtIndex:(NSUInteger)index2;

#pragma clang diagnostic pop

@end
