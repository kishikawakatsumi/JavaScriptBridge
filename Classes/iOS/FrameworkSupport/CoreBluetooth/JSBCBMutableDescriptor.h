#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBCBDescriptor;

@protocol JSBCBMutableDescriptor <JSExport, JSBCBDescriptor>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithType:(CBUUID *)UUID value:(id)value;

#pragma clang diagnostic pop

@end
