#import "JSBCoreLocation.h"
#import "JSBCLBeacon.h"
#import "JSBCLGeocoder.h"
#import "JSBCLHeading.h"
#import "JSBCLLocation.h"
#import "JSBCLLocationManager.h"
#import "JSBCLPlacemark.h"
#import "JSBCLRegion.h"
#import "JSBCLBeaconRegion.h"
#import "JSBCLCircularRegion.h"

@import ObjectiveC;

@implementation JSBCoreLocation

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([CLBeacon class], @protocol(JSBCLBeacon));
    context[@"CLBeacon"] = [CLBeacon class];

    class_addProtocol([CLGeocoder class], @protocol(JSBCLGeocoder));
    context[@"CLGeocoder"] = [CLGeocoder class];

    class_addProtocol([CLHeading class], @protocol(JSBCLHeading));
    context[@"CLHeading"] = [CLHeading class];

    class_addProtocol([CLLocation class], @protocol(JSBCLLocation));
    context[@"CLLocation"] = [CLLocation class];

    class_addProtocol([CLLocationManager class], @protocol(JSBCLLocationManager));
    context[@"CLLocationManager"] = [CLLocationManager class];

    class_addProtocol([CLPlacemark class], @protocol(JSBCLPlacemark));
    context[@"CLPlacemark"] = [CLPlacemark class];

    class_addProtocol([CLRegion class], @protocol(JSBCLRegion));
    context[@"CLRegion"] = [CLRegion class];

    class_addProtocol([CLBeaconRegion class], @protocol(JSBCLBeaconRegion));
    context[@"CLBeaconRegion"] = [CLBeaconRegion class];

    class_addProtocol([CLCircularRegion class], @protocol(JSBCLCircularRegion));
    context[@"CLCircularRegion"] = [CLCircularRegion class];

#pragma clang diagnostic pop
}

@end
