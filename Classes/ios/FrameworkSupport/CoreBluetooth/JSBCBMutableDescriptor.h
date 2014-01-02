#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBCBDescriptor;

@protocol JSBCBMutableDescriptor <JSExport, JSBCBDescriptor>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain, readonly) id value;
@property (weak, readonly, nonatomic) CBCharacteristic *characteristic;
@property (readonly, nonatomic) CBUUID *UUID;

- (id)initWithType:(CBUUID *)UUID value:(id)value;

#pragma clang diagnostic pop

@end
