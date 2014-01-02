#import <UIKit/UIKit.h>
#import <MapKit/MKPolyline.h>
#import <MapKit/MKOverlayPathView.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayPathView;

@protocol JSBMKPolylineView <JSExport, JSBMKOverlayPathView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKPolyline *polyline;

- (id)initWithPolyline:(MKPolyline *)polyline;

#pragma clang diagnostic pop

@end
