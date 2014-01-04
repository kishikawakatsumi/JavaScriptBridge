#import <Foundation/NSObject.h>
#include<CoreFoundation/CFUUID.h>
#include<uuid/uuid.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSUUID <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)UUID;

- (id)init;
- (id)initWithUUIDString:(NSString *)string;
- (id)initWithUUIDBytes:(const uuid_t)bytes;
- (void)getUUIDBytes:(uuid_t)uuid;
- (NSString *)UUIDString;

#pragma clang diagnostic pop

@end
