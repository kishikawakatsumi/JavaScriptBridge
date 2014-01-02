#import <MapKit/MKFoundation.h>
#import <MapKit/MKGeometry.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKLocalSearchRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSString *naturalLanguageQuery;
@property (nonatomic, assign) MKCoordinateRegion region;

#pragma clang diagnostic pop

@end
