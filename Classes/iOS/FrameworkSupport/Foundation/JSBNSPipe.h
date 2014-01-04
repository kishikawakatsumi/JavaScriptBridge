#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSRange.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPipe <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) void (^readabilityHandler)(NSFileHandle *);
@property (copy) void (^writeabilityHandler)(NSFileHandle *);

+ (id)pipe;

- (NSFileHandle *)fileHandleForReading;
- (NSFileHandle *)fileHandleForWriting;
- (id)init;

#pragma clang diagnostic pop

@end
