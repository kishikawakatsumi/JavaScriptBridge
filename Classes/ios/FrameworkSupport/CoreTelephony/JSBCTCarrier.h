#import <Foundation/Foundation.h>
#import <CoreTelephony/CoreTelephonyDefines.h>

@import CoreTelephony;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCTCarrier <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, retain) NSString *mobileCountryCode;
@property (nonatomic, readonly, retain) NSString *mobileNetworkCode;
@property (nonatomic, readonly, retain) NSString *isoCountryCode;
@property (nonatomic, readonly, retain) NSString *carrierName;
@property (nonatomic, readonly, assign) BOOL allowsVOIP;

#pragma clang diagnostic pop

@end
