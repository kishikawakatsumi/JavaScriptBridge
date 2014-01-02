#import <MapKit/MKFoundation.h>
#import <MapKit/MKGeometry.h>
#import <UIKit/UIImage.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKMapSnapshot <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UIImage *image;

- (CGPoint)pointForCoordinate:(CLLocationCoordinate2D)coordinate;

#pragma clang diagnostic pop

@end
