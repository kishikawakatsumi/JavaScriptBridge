#import <CoreBluetooth/CBDefines.h>
#import <CoreBluetooth/CBError.h>
#import <CoreBluetooth/CBPeripheralManagerConstants.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBPeripheralManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) CBPeripheralManagerState state;
@property (weak, nonatomic) id delegate;
@property (readonly) BOOL isAdvertising;

+ (CBPeripheralManagerAuthorizationStatus)authorizationStatus;

- (id)initWithDelegate:(id <CBPeripheralManagerDelegate>)delegate queue:(dispatch_queue_t)queue;
- (id)initWithDelegate:(id <CBPeripheralManagerDelegate>)delegate queue:(dispatch_queue_t)queue options:(NSDictionary *)options;
- (void)startAdvertising:(NSDictionary *)advertisementData;
- (void)stopAdvertising;
- (void)setDesiredConnectionLatency:(CBPeripheralManagerConnectionLatency)latency forCentral:(CBCentral *)central;
- (void)addService:(CBMutableService *)service;
- (void)removeService:(CBMutableService *)service;
- (void)removeAllServices;
- (void)respondToRequest:(CBATTRequest *)request withResult:(CBATTError)result;
- (BOOL)updateValue:(NSData *)value forCharacteristic:(CBMutableCharacteristic *)characteristic onSubscribedCentrals:(NSArray *)centrals;

#pragma clang diagnostic pop

@end
