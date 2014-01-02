#import <Foundation/Foundation.h>
#import <CoreMotion/CMAccelerometer.h>
#import <CoreMotion/CMGyro.h>
#import <CoreMotion/CMDeviceMotion.h>
#import <CoreMotion/CMMagnetometer.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCMMotionManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic, getter = isGyroActive) BOOL gyroActive;
@property (readonly, nonatomic, getter = isGyroAvailable) BOOL gyroAvailable;
@property (readonly, nonatomic, getter = isAccelerometerActive) BOOL accelerometerActive;
@property (assign, nonatomic) NSTimeInterval gyroUpdateInterval;
@property (readonly, nonatomic, getter = isAccelerometerAvailable) BOOL accelerometerAvailable;
@property (readonly, nonatomic, getter = isMagnetometerAvailable) BOOL magnetometerAvailable;
@property (readonly) CMMagnetometerData *magnetometerData;
@property (readonly, nonatomic, getter = isDeviceMotionAvailable) BOOL deviceMotionAvailable;
@property (readonly, nonatomic, getter = isDeviceMotionActive) BOOL deviceMotionActive;
@property (assign, nonatomic) BOOL showsDeviceMovementDisplay;
@property (readonly, nonatomic) CMAttitudeReferenceFrame attitudeReferenceFrame;
@property (assign, nonatomic) NSTimeInterval accelerometerUpdateInterval;
@property (readonly) CMDeviceMotion *deviceMotion;
@property (readonly, nonatomic, getter = isMagnetometerActive) BOOL magnetometerActive;
@property (readonly) CMAccelerometerData *accelerometerData;
@property (assign, nonatomic) NSTimeInterval magnetometerUpdateInterval;
@property (readonly) CMGyroData *gyroData;
@property (assign, nonatomic) NSTimeInterval deviceMotionUpdateInterval;

+ (NSUInteger)availableAttitudeReferenceFrames;

- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesToQueue:(NSOperationQueue *)queue withHandler:(CMAccelerometerHandler)handler;
- (void)stopAccelerometerUpdates;
- (void)startGyroUpdates;
- (void)startGyroUpdatesToQueue:(NSOperationQueue *)queue withHandler:(CMGyroHandler)handler;
- (void)stopGyroUpdates;
- (void)startMagnetometerUpdates;
- (void)startMagnetometerUpdatesToQueue:(NSOperationQueue *)queue withHandler:(CMMagnetometerHandler)handler;
- (void)stopMagnetometerUpdates;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(NSOperationQueue *)queue withHandler:(CMDeviceMotionHandler)handler;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(CMAttitudeReferenceFrame)referenceFrame;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(CMAttitudeReferenceFrame)referenceFrame toQueue:(NSOperationQueue *)queue withHandler:(CMDeviceMotionHandler)handler;
- (void)stopDeviceMotionUpdates;

#pragma clang diagnostic pop

@end
