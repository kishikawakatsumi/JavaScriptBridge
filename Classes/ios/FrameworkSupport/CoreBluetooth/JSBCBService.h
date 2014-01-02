#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBService <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain, readwrite) NSArray *characteristics;
@property (retain, readwrite) NSArray *includedServices;
@property (weak, readonly, nonatomic) CBPeripheral *peripheral;
@property (readwrite, nonatomic) BOOL isPrimary;
@property (retain, readwrite, nonatomic) CBUUID *UUID;

#pragma clang diagnostic pop

@end
