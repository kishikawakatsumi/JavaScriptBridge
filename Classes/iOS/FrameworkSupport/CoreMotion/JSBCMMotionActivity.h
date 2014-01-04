#import <Foundation/Foundation.h>
#import <CoreMotion/CMLogItem.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBCMLogItem;

@protocol JSBCMMotionActivity <JSExport, JSBCMLogItem>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) BOOL unknown;
@property (readonly, nonatomic) CMMotionActivityConfidence confidence;
@property (readonly, nonatomic) BOOL automotive;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL stationary;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) BOOL walking;

#pragma clang diagnostic pop

@end
