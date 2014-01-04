#import "JSBCoreMotion.h"
#import "JSBCMAttitude.h"
#import "JSBCMLogItem.h"
#import "JSBCMMotionActivityManager.h"
#import "JSBCMMotionManager.h"
#import "JSBCMStepCounter.h"
#import "JSBCMAccelerometerData.h"
#import "JSBCMDeviceMotion.h"
#import "JSBCMGyroData.h"
#import "JSBCMMagnetometerData.h"
#import "JSBCMMotionActivity.h"

@import ObjectiveC;

@implementation JSBCoreMotion

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([CMAttitude class], @protocol(JSBCMAttitude));
    context[@"CMAttitude"] = [CMAttitude class];

    class_addProtocol([CMLogItem class], @protocol(JSBCMLogItem));
    context[@"CMLogItem"] = [CMLogItem class];

    class_addProtocol([CMMotionActivityManager class], @protocol(JSBCMMotionActivityManager));
    context[@"CMMotionActivityManager"] = [CMMotionActivityManager class];

    class_addProtocol([CMMotionManager class], @protocol(JSBCMMotionManager));
    context[@"CMMotionManager"] = [CMMotionManager class];

    class_addProtocol([CMStepCounter class], @protocol(JSBCMStepCounter));
    context[@"CMStepCounter"] = [CMStepCounter class];

    class_addProtocol([CMAccelerometerData class], @protocol(JSBCMAccelerometerData));
    context[@"CMAccelerometerData"] = [CMAccelerometerData class];

    class_addProtocol([CMDeviceMotion class], @protocol(JSBCMDeviceMotion));
    context[@"CMDeviceMotion"] = [CMDeviceMotion class];

    class_addProtocol([CMGyroData class], @protocol(JSBCMGyroData));
    context[@"CMGyroData"] = [CMGyroData class];

    class_addProtocol([CMMagnetometerData class], @protocol(JSBCMMagnetometerData));
    context[@"CMMagnetometerData"] = [CMMagnetometerData class];

    class_addProtocol([CMMotionActivity class], @protocol(JSBCMMotionActivity));
    context[@"CMMotionActivity"] = [CMMotionActivity class];

#pragma clang diagnostic pop
}

@end
