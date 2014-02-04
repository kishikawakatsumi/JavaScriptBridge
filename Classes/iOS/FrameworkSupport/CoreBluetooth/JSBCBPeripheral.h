#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBPeripheral <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain, readonly) NSNumber *RSSI;
@property (retain, readonly) NSArray *services;
@property (readonly, nonatomic) id UUID;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly) BOOL isConnected;
@property (weak, nonatomic) id delegate;
@property (readonly) CBPeripheralState state;
@property (retain, readonly) NSString *name;

- (void)readRSSI;
- (void)discoverServices:(NSArray *)serviceUUIDs;
- (void)discoverIncludedServices:(NSArray *)includedServiceUUIDs forService:(CBService *)service;
- (void)discoverCharacteristics:(NSArray *)characteristicUUIDs forService:(CBService *)service;
- (void)readValueForCharacteristic:(CBCharacteristic *)characteristic;
- (void)writeValue:(NSData *)data forCharacteristic:(CBCharacteristic *)characteristic type:(CBCharacteristicWriteType)type;
- (void)setNotifyValue:(BOOL)enabled forCharacteristic:(CBCharacteristic *)characteristic;
- (void)discoverDescriptorsForCharacteristic:(CBCharacteristic *)characteristic;
- (void)readValueForDescriptor:(CBDescriptor *)descriptor;
- (void)writeValue:(NSData *)data forDescriptor:(CBDescriptor *)descriptor;

#pragma clang diagnostic pop

@end
