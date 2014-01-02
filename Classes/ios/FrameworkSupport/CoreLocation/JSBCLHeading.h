#import <CoreLocation/CLAvailability.h>
#import <CoreLocation/CLLocation.h>
#import <Foundation/Foundation.h>

@import CoreLocation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCLHeading <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CLHeadingComponentValue x;
@property (readonly, nonatomic) CLHeadingComponentValue y;
@property (readonly, nonatomic) CLLocationDirection trueHeading;
@property (readonly, nonatomic) CLLocationDirection magneticHeading;
@property (readonly, nonatomic) CLHeadingComponentValue z;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) CLLocationDirection headingAccuracy;

- (NSString *)description;

#pragma clang diagnostic pop

@end
