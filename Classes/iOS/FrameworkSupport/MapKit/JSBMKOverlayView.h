#import <UIKit/UIKit.h>
#import <MapKit/MKGeometry.h>
#import <MapKit/MKOverlay.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBMKOverlayView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) id overlay;

- (id)initWithOverlay:(id <MKOverlay>)overlay;
- (CGPoint)pointForMapPoint:(MKMapPoint)mapPoint;
- (MKMapPoint)mapPointForPoint:(CGPoint)point;
- (CGRect)rectForMapRect:(MKMapRect)mapRect;
- (MKMapRect)mapRectForRect:(CGRect)rect;
- (BOOL)canDrawMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale;
- (void)drawMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale inContext:(id)context;
- (void)setNeedsDisplayInMapRect:(MKMapRect)mapRect;
- (void)setNeedsDisplayInMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale;

#pragma clang diagnostic pop

@end
