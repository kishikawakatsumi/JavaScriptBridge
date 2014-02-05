#import <CoreBluetooth/CBDefines.h>
#import <Foundation/Foundation.h>

@import CoreBluetooth;
@import JavaScriptCore;

@protocol JSBCBService;

@protocol JSBCBMutableService <JSExport, JSBCBService>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithType:(CBUUID *)UUID primary:(BOOL)isPrimary;

#pragma clang diagnostic pop

@end
