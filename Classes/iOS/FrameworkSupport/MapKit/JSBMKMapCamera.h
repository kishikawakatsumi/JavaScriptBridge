#import <Foundation/Foundation.h>
#import <MapKit/MKFoundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreGraphics/CoreGraphics.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKMapCamera <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CLLocationCoordinate2D centerCoordinate;
@property (nonatomic) CLLocationDirection heading;
@property (nonatomic) CGFloat pitch;
@property (nonatomic) CLLocationDistance altitude;

+ (instancetype)camera;
+ (instancetype)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate fromEyeCoordinate:(CLLocationCoordinate2D)eyeCoordinate eyeAltitude:(CLLocationDistance)eyeAltitude;

#pragma clang diagnostic pop

@end
