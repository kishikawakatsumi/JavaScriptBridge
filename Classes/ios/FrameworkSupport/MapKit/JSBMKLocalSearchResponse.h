#import <MapKit/MKFoundation.h>
#import <MapKit/MKGeometry.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKLocalSearchResponse <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *mapItems;
@property (nonatomic, readonly) MKCoordinateRegion boundingRegion;

#pragma clang diagnostic pop

@end
