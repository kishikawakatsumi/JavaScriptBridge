#import <Foundation/Foundation.h>
#import <MapKit/MKCircle.h>
#import <MapKit/MKFoundation.h>
#import <MapKit/MKOverlayPathView.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBMKOverlayPathView;

@protocol JSBMKCircleView <JSExport, JSBMKOverlayPathView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MKCircle *circle;

- (id)initWithCircle:(MKCircle *)circle;

#pragma clang diagnostic pop

@end
