#import <Foundation/Foundation.h>
#import <CoreLocation/CLRegion.h>
#import <CoreLocation/CLAvailability.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCLBeacon <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic, readonly) NSNumber *major;
@property (readonly, nonatomic, readonly) NSNumber *minor;
@property (readonly, nonatomic) NSInteger rssi;
@property (readonly, nonatomic, readonly) NSUUID *proximityUUID;
@property (nonatomic, assign) BOOL notifyEntryStateOnDisplay;
@property (readonly, nonatomic) CLProximity proximity;
@property (readonly, nonatomic) CLLocationAccuracy accuracy;

#pragma clang diagnostic pop

@end
