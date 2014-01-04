#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSMutableData;

@protocol JSBNSPurgeableData <JSExport, JSBNSMutableData>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
