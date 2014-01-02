#import <Foundation/Foundation.h>

@import CoreMotion;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCMLogItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, nonatomic) NSTimeInterval timestamp;

#pragma clang diagnostic pop

@end
