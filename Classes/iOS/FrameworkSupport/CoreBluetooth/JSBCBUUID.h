#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCBUUID <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSData *data;

+ (CBUUID *)UUIDWithString:(NSString *)theString;
+ (CBUUID *)UUIDWithData:(NSData *)theData;
+ (CBUUID *)UUIDWithCFUUID:(id)theUUID;
+ (CBUUID *)UUIDWithNSUUID:(NSUUID *)theUUID;

#pragma clang diagnostic pop

@end
