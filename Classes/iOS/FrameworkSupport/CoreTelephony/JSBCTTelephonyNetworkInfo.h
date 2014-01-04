#import <Foundation/Foundation.h>
#import <CoreTelephony/CoreTelephonyDefines.h>

@import CoreTelephony;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCTTelephonyNetworkInfo <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, retain) NSString *currentRadioAccessTechnology;
@property (readonly, retain) CTCarrier *subscriberCellularProvider;
@property (nonatomic, copy) void (^subscriberCellularProviderDidUpdateNotifier)(CTCarrier *);

#pragma clang diagnostic pop

@end
