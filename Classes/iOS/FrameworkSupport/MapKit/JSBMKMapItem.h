#import <MapKit/MKFoundation.h>
#import <MapKit/MKPlacemark.h>

@import MapKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMKMapItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, readonly) BOOL isCurrentLocation;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, readonly, retain) MKPlacemark *placemark;

+ (MKMapItem *)mapItemForCurrentLocation;
+ (BOOL)openMapsWithItems:(NSArray *)mapItems launchOptions:(NSDictionary *)launchOptions;

- (id)initWithPlacemark:(MKPlacemark *)placemark;
- (BOOL)openInMapsWithLaunchOptions:(NSDictionary *)launchOptions;

#pragma clang diagnostic pop

@end
