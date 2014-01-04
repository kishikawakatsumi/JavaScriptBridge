#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBCBCharacteristic;

@protocol JSBCBMutableCharacteristic <JSExport, JSBCBCharacteristic>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (weak, readonly, nonatomic) CBService *service;
@property (readonly) BOOL isBroadcasted;
@property (retain, readwrite, nonatomic) CBUUID *UUID;
@property (retain, readwrite) NSArray *descriptors;
@property (assign, readwrite, nonatomic) CBCharacteristicProperties properties;
@property (retain, readwrite) NSData *value;
@property (readonly) BOOL isNotifying;
@property (assign, readwrite, nonatomic) CBAttributePermissions permissions;
@property (retain, readonly) NSArray *subscribedCentrals;

- (id)initWithType:(CBUUID *)UUID properties:(CBCharacteristicProperties)properties value:(NSData *)value permissions:(CBAttributePermissions)permissions;

#pragma clang diagnostic pop

@end
