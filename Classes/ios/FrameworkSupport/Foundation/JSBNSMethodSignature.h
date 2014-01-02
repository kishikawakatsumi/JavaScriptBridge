#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMethodSignature <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSMethodSignature *)signatureWithObjCTypes:(const char *)types;

- (NSUInteger)numberOfArguments;
- (const char *)getArgumentTypeAtIndex:(NSUInteger)idx;
- (NSUInteger)frameLength;
- (BOOL)isOneway;
- (const char *)methodReturnType;
- (NSUInteger)methodReturnLength;

#pragma clang diagnostic pop

@end
