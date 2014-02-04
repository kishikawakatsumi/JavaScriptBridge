#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBCentral <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUInteger maximumUpdateValueLength;
@property (readonly, nonatomic) id UUID;

#pragma clang diagnostic pop

@end
