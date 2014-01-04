#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSPort;

@protocol JSBNSMessagePort <JSExport, JSBNSPort>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
