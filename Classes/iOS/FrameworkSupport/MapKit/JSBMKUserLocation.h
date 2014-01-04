#import <MapKit/MKFoundation.h>
#import <MapKit/MKAnnotation.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKUserLocation <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic, getter = isUpdating) BOOL updating;
@property (nonatomic, copy) NSString *title;
@property (readonly, nonatomic, retain) CLHeading *heading;
@property (readonly, retain, nonatomic) CLLocation *location;
@property (nonatomic, copy) NSString *subtitle;

#pragma clang diagnostic pop

@end
