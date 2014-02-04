#import <MapKit/MKFoundation.h>
#import <MapKit/MKGeometry.h>
#import <MapKit/MKOverlay.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKOverlayRenderer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) id overlay;
@property CGFloat alpha;
@property (readonly) CGFloat contentScaleFactor;

- (id)initWithOverlay:(id <MKOverlay>)overlay;
- (CGPoint)pointForMapPoint:(MKMapPoint)mapPoint;
- (MKMapPoint)mapPointForPoint:(CGPoint)point;
- (CGRect)rectForMapRect:(MKMapRect)mapRect;
- (MKMapRect)mapRectForRect:(CGRect)rect;
- (BOOL)canDrawMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale;
- (void)drawMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale inContext:(id)context;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInMapRect:(MKMapRect)mapRect;
- (void)setNeedsDisplayInMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale;

#pragma clang diagnostic pop

@end
