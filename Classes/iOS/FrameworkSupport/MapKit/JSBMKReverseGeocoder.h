#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>
#import <MapKit/MKTypes.h>
#import <MapKit/MKFoundation.h>
#import <MapKit/MKPlacemark.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKReverseGeocoder <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isQuerying) BOOL querying;
@property (nonatomic, assign) id delegate;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) MKPlacemark *placemark;

- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate;
- (void)start;
- (void)cancel;

#pragma clang diagnostic pop

@end
