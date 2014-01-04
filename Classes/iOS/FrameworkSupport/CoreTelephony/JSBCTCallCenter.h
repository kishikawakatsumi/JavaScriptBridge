#import <Foundation/Foundation.h>
#import <CoreTelephony/CoreTelephonyDefines.h>

@import CoreTelephony;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCTCallCenter <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, retain) NSSet *currentCalls;
@property (nonatomic, copy) void (^callEventHandler)(CTCall *);

#pragma clang diagnostic pop

@end
