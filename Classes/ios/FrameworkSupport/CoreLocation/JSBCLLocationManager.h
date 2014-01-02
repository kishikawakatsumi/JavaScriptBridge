#import <Foundation/Foundation.h>
#import <CoreLocation/CLAvailability.h>
#import <CoreLocation/CLLocation.h>
#import <CoreLocation/CLRegion.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCLLocationManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CLHeading *heading;
@property (readonly, nonatomic) NSSet *monitoredRegions;
@property (assign, nonatomic) CLDeviceOrientation headingOrientation;
@property (assign, nonatomic) BOOL pausesLocationUpdatesAutomatically;
@property (assign, nonatomic) CLActivityType activityType;
@property (readonly, nonatomic) CLLocationDistance maximumRegionMonitoringDistance;
@property (readonly, nonatomic) BOOL headingAvailable;
@property (copy, nonatomic) NSString *purpose;
@property (readonly, nonatomic) CLLocation *location;
@property (assign, nonatomic) CLLocationAccuracy desiredAccuracy;
@property (readonly, nonatomic) BOOL locationServicesEnabled;
@property (readonly, nonatomic) NSSet *rangedRegions;
@property (assign, nonatomic) id delegate;
@property (assign, nonatomic) CLLocationDegrees headingFilter;
@property (assign, nonatomic) CLLocationDistance distanceFilter;

+ (BOOL)locationServicesEnabled;
+ (BOOL)headingAvailable;
+ (BOOL)significantLocationChangeMonitoringAvailable;
+ (BOOL)isMonitoringAvailableForClass:(Class)regionClass;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (BOOL)isRangingAvailable;
+ (CLAuthorizationStatus)authorizationStatus;
+ (BOOL)deferredLocationUpdatesAvailable;

- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)dismissHeadingCalibrationDisplay;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringForRegion:(CLRegion *)region desiredAccuracy:(CLLocationAccuracy)accuracy;
- (void)stopMonitoringForRegion:(CLRegion *)region;
- (void)startMonitoringForRegion:(CLRegion *)region;
- (void)requestStateForRegion:(CLRegion *)region;
- (void)startRangingBeaconsInRegion:(CLBeaconRegion *)region;
- (void)stopRangingBeaconsInRegion:(CLBeaconRegion *)region;
- (void)allowDeferredLocationUpdatesUntilTraveled:(CLLocationDistance)distance timeout:(NSTimeInterval)timeout;
- (void)disallowDeferredLocationUpdates;

#pragma clang diagnostic pop

@end
