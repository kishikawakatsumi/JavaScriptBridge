#import <MapKit/MKFoundation.h>
#import <MapKit/MKOverlayRenderer.h>
#import <MapKit/MKTileOverlay.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayRenderer;

@protocol JSBMKTileOverlayRenderer <JSExport, JSBMKOverlayRenderer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithTileOverlay:(MKTileOverlay *)overlay;
- (void)reloadData;

#pragma clang diagnostic pop

@end
