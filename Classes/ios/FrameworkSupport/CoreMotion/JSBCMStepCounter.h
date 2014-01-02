#import <Foundation/Foundation.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCMStepCounter <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)isStepCountingAvailable;

- (void)queryStepCountStartingFrom:(NSDate *)start to:(NSDate *)end toQueue:(NSOperationQueue *)queue withHandler:(CMStepQueryHandler)handler;
- (void)startStepCountingUpdatesToQueue:(NSOperationQueue *)queue updateOn:(NSInteger)stepCounts withHandler:(CMStepUpdateHandler)handler;
- (void)stopStepCountingUpdates;

#pragma clang diagnostic pop

@end
