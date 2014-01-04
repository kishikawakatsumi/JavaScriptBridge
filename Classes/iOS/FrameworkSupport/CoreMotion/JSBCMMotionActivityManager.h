#import <Foundation/Foundation.h>
#import <CoreMotion/CMMotionActivity.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCMMotionActivityManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)isActivityAvailable;

- (void)queryActivityStartingFromDate:(NSDate *)start toDate:(NSDate *)end toQueue:(NSOperationQueue *)queue withHandler:(CMMotionActivityQueryHandler)handler;
- (void)startActivityUpdatesToQueue:(NSOperationQueue *)queue withHandler:(CMMotionActivityHandler)handler;
- (void)stopActivityUpdates;

#pragma clang diagnostic pop

@end
