#import <Foundation/Foundation.h>
#import <MapKit/MKMapItem.h>
#import <MapKit/MKDirectionsTypes.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKDirectionsRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) MKDirectionsTransportType transportType;
@property (nonatomic) BOOL requestsAlternateRoutes;
@property (nonatomic, copy) NSDate *arrivalDate;
@property (nonatomic, copy) NSDate *departureDate;

+ (BOOL)isDirectionsRequestURL:(NSURL *)url;

- (MKMapItem *)source;
- (void)setSource:(MKMapItem *)source;
- (MKMapItem *)destination;
- (void)setDestination:(MKMapItem *)destination;
- (id)initWithContentsOfURL:(NSURL *)url;

#pragma clang diagnostic pop

@end
