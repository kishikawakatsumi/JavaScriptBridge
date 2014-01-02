#import <UIKit/UIKit.h>
#import <MapKit/MKOverlayView.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayView;

@protocol JSBMKOverlayPathView <JSExport, JSBMKOverlayView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat lineWidth;
@property CGFloat miterLimit;
@property (copy) NSArray *lineDashPattern;
@property CGFloat lineDashPhase;
@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;
@property CGPathRef path;
@property CGLineJoin lineJoin;
@property CGLineCap lineCap;

- (void)createPath;
- (void)invalidatePath;
- (void)applyStrokePropertiesToContext:(CGContextRef)context atZoomScale:(MKZoomScale)zoomScale;
- (void)applyFillPropertiesToContext:(CGContextRef)context atZoomScale:(MKZoomScale)zoomScale;
- (void)strokePath:(CGPathRef)path inContext:(CGContextRef)context;
- (void)fillPath:(CGPathRef)path inContext:(CGContextRef)context;

#pragma clang diagnostic pop

@end
