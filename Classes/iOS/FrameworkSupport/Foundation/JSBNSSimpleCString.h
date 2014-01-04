#import <limits.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>
#import <stdarg.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSString;

@protocol JSBNSSimpleCString <JSExport, JSBNSString>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
