#import <Foundation/Foundation.h>
#import <CoreLocation/CLRegion.h>
#import <CoreLocation/CLAvailability.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBCLRegion;

@protocol JSBCLBeaconRegion <JSExport, JSBCLRegion>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic, readonly) NSNumber *major;
@property (readonly, nonatomic, readonly) NSNumber *minor;
@property (readonly, nonatomic) NSInteger rssi;
@property (readonly, nonatomic, readonly) NSUUID *proximityUUID;
@property (nonatomic, assign) BOOL notifyEntryStateOnDisplay;
@property (readonly, nonatomic) CLProximity proximity;
@property (readonly, nonatomic) CLLocationAccuracy accuracy;

- (id)initWithProximityUUID:(NSUUID *)proximityUUID identifier:(NSString *)identifier;
- (id)initWithProximityUUID:(NSUUID *)proximityUUID major:(CLBeaconMajorValue)major identifier:(NSString *)identifier;
- (id)initWithProximityUUID:(NSUUID *)proximityUUID major:(CLBeaconMajorValue)major minor:(CLBeaconMinorValue)minor identifier:(NSString *)identifier;
- (NSMutableDictionary *)peripheralDataWithMeasuredPower:(NSNumber *)measuredPower;

#pragma clang diagnostic pop

@end
