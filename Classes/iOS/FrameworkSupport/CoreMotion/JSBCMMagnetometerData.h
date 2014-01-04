#import <Foundation/Foundation.h>
#import <CoreMotion/CMLogItem.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBCMLogItem;

@protocol JSBCMMagnetometerData <JSExport, JSBCMLogItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) CMMagneticField magneticField;

#pragma clang diagnostic pop

@end
