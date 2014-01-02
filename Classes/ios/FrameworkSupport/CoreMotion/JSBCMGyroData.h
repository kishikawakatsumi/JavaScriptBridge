#import <Foundation/Foundation.h>
#import <CoreMotion/CMLogItem.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBCMLogItem;

@protocol JSBCMGyroData <JSExport, JSBCMLogItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CMRotationRate rotationRate;

#pragma clang diagnostic pop

@end
