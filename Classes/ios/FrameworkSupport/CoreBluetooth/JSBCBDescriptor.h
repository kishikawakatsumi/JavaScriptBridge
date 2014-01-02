#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBDescriptor <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain, readonly) id value;
@property (weak, readonly, nonatomic) CBCharacteristic *characteristic;
@property (readonly, nonatomic) CBUUID *UUID;

#pragma clang diagnostic pop

@end
