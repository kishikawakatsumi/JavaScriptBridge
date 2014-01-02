#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBCharacteristic <JSExport, JSBNSObject>

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

#pragma clang diagnostic pop

@end
