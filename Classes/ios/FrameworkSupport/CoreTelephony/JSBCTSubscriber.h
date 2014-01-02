#import <Foundation/Foundation.h>
#import <CoreTelephony/CoreTelephonyDefines.h>

@import CoreTelephony;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCTSubscriber <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, retain) NSData *carrierToken;

#pragma clang diagnostic pop

@end
