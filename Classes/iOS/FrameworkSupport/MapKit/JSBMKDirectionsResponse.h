#import <MapKit/MKFoundation.h>
#import <MapKit/MKDirectionsTypes.h>
#import <CoreLocation/CoreLocation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKDirectionsResponse <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *advisoryNotices;
@property (nonatomic, readonly, readonly) NSTimeInterval expectedTravelTime;
@property (nonatomic, readonly) NSString *notice;
@property (nonatomic, readonly) NSArray *routes;
@property (nonatomic, readonly, readonly) MKMapItem *source;
@property (nonatomic, readonly, readonly) MKDirectionsTransportType transportType;
@property (nonatomic, readonly, readonly) MKPolyline *polyline;
@property (nonatomic, readonly, readonly) MKMapItem *destination;
@property (nonatomic, readonly, readonly) CLLocationDistance distance;
@property (nonatomic, readonly) NSString *instructions;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *steps;

#pragma clang diagnostic pop

@end
