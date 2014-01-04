#import <Foundation/Foundation.h>
#import <CoreTelephony/CoreTelephonyDefines.h>

@import CoreTelephony;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCTCall <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, copy) NSString *callState;
@property (nonatomic, readonly, copy) NSString *callID;

#pragma clang diagnostic pop

@end
