#import <CoreBluetooth/CBDefines.h>
#import <CoreBluetooth/CBAdvertisementData.h>
#import <CoreBluetooth/CBCentralManagerConstants.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBCentralManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) CBCentralManagerState state;
@property (weak, nonatomic) id delegate;

- (id)initWithDelegate:(id <CBCentralManagerDelegate>)delegate queue:(dispatch_queue_t)queue;
- (id)initWithDelegate:(id <CBCentralManagerDelegate>)delegate queue:(dispatch_queue_t)queue options:(NSDictionary *)options;
- (void)retrievePeripherals:(NSArray *)peripheralUUIDs;
- (NSArray *)retrievePeripheralsWithIdentifiers:(NSArray *)identifiers;
- (void)retrieveConnectedPeripherals;
- (NSArray *)retrieveConnectedPeripheralsWithServices:(NSArray *)serviceUUIDs;
- (void)scanForPeripheralsWithServices:(NSArray *)serviceUUIDs options:(NSDictionary *)options;
- (void)stopScan;
- (void)connectPeripheral:(CBPeripheral *)peripheral options:(NSDictionary *)options;
- (void)cancelPeripheralConnection:(CBPeripheral *)peripheral;

#pragma clang diagnostic pop

@end
