#import <CoreGraphics/CoreGraphics.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MKFoundation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSValue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSValue *)valueWithMKCoordinate:(CLLocationCoordinate2D)coordinate;
+ (NSValue *)valueWithMKCoordinateSpan:(MKCoordinateSpan)span;

- (CLLocationCoordinate2D)MKCoordinateValue;
- (MKCoordinateSpan)MKCoordinateSpanValue;

#pragma clang diagnostic pop

@end
