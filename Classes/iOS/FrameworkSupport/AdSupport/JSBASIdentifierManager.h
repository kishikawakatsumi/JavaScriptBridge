#import <Foundation/Foundation.h>

@import AdSupport;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBASIdentifierManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isAdvertisingTrackingEnabled) BOOL advertisingTrackingEnabled;
@property (nonatomic, readonly) NSUUID *advertisingIdentifier;

+ (ASIdentifierManager *)sharedManager;

#pragma clang diagnostic pop

@end
