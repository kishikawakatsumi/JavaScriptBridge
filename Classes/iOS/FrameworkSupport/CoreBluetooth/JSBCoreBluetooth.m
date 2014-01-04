#import "JSBCoreBluetooth.h"
#import "JSBCBATTRequest.h"
#import "JSBCBCentral.h"
#import "JSBCBCentralManager.h"
#import "JSBCBCharacteristic.h"
#import "JSBCBDescriptor.h"
#import "JSBCBPeripheral.h"
#import "JSBCBPeripheralManager.h"
#import "JSBCBService.h"
#import "JSBCBUUID.h"
#import "JSBCBMutableCharacteristic.h"
#import "JSBCBMutableDescriptor.h"
#import "JSBCBMutableService.h"

@import ObjectiveC;

@implementation JSBCoreBluetooth

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([CBATTRequest class], @protocol(JSBCBATTRequest));
    context[@"CBATTRequest"] = [CBATTRequest class];

    class_addProtocol([CBCentral class], @protocol(JSBCBCentral));
    context[@"CBCentral"] = [CBCentral class];

    class_addProtocol([CBCentralManager class], @protocol(JSBCBCentralManager));
    context[@"CBCentralManager"] = [CBCentralManager class];

    class_addProtocol([CBCharacteristic class], @protocol(JSBCBCharacteristic));
    context[@"CBCharacteristic"] = [CBCharacteristic class];

    class_addProtocol([CBDescriptor class], @protocol(JSBCBDescriptor));
    context[@"CBDescriptor"] = [CBDescriptor class];

    class_addProtocol([CBPeripheral class], @protocol(JSBCBPeripheral));
    context[@"CBPeripheral"] = [CBPeripheral class];

    class_addProtocol([CBPeripheralManager class], @protocol(JSBCBPeripheralManager));
    context[@"CBPeripheralManager"] = [CBPeripheralManager class];

    class_addProtocol([CBService class], @protocol(JSBCBService));
    context[@"CBService"] = [CBService class];

    class_addProtocol([CBUUID class], @protocol(JSBCBUUID));
    context[@"CBUUID"] = [CBUUID class];

    class_addProtocol([CBMutableCharacteristic class], @protocol(JSBCBMutableCharacteristic));
    context[@"CBMutableCharacteristic"] = [CBMutableCharacteristic class];

    class_addProtocol([CBMutableDescriptor class], @protocol(JSBCBMutableDescriptor));
    context[@"CBMutableDescriptor"] = [CBMutableDescriptor class];

    class_addProtocol([CBMutableService class], @protocol(JSBCBMutableService));
    context[@"CBMutableService"] = [CBMutableService class];

#pragma clang diagnostic pop
}

@end
