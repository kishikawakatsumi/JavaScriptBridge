#import <Foundation/Foundation.h>
#import <CoreTelephony/CoreTelephonyDefines.h>

@import CoreTelephony;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCTSubscriberInfo <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (CTSubscriber *)subscriber;

#pragma clang diagnostic pop

@end
