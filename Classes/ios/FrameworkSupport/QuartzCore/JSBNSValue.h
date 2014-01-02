#include<QuartzCore/CABase.h>
#import <Foundation/NSValue.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSValue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSValue *)valueWithCATransform3D:(CATransform3D)t;

- (CATransform3D)CATransform3DValue;

#pragma clang diagnostic pop

@end
