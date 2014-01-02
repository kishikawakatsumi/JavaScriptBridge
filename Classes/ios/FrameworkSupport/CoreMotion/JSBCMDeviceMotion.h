#import <CoreMotion/CMAccelerometer.h>
#import <CoreMotion/CMAttitude.h>
#import <CoreMotion/CMGyro.h>
#import <CoreMotion/CMMagnetometer.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBCMLogItem;

@protocol JSBCMDeviceMotion <JSExport, JSBCMLogItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) CMAcceleration userAcceleration;
@property (readonly, nonatomic) CMRotationRate rotationRate;
@property (readonly, nonatomic) CMCalibratedMagneticField magneticField;
@property (readonly, nonatomic) CMAcceleration gravity;

#pragma clang diagnostic pop

@end
