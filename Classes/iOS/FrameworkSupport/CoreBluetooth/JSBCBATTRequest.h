#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBATTRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readwrite, copy) NSData *value;
@property (readonly, retain, nonatomic) CBCentral *central;
@property (readonly, retain, nonatomic) CBCharacteristic *characteristic;
@property (readonly, nonatomic) NSUInteger offset;

#pragma clang diagnostic pop

@end
