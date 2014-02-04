#import <MapKit/MKFoundation.h>
#import <MapKit/MKOverlayRenderer.h>
#import <UIKit/UIKit.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayRenderer;

@protocol JSBMKOverlayPathRenderer <JSExport, JSBMKOverlayRenderer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat lineWidth;
@property CGFloat miterLimit;
@property (copy) NSArray *lineDashPattern;
@property CGFloat lineDashPhase;
@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;
@property id path;
@property CGLineJoin lineJoin;
@property CGLineCap lineCap;

- (void)createPath;
- (void)invalidatePath;
- (void)applyStrokePropertiesToContext:(id)context atZoomScale:(MKZoomScale)zoomScale;
- (void)applyFillPropertiesToContext:(id)context atZoomScale:(MKZoomScale)zoomScale;
- (void)strokePath:(id)path inContext:(id)context;
- (void)fillPath:(id)path inContext:(id)context;

#pragma clang diagnostic pop

@end
