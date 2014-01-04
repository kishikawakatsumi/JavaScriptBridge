#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSPort;

@protocol JSBNSMachPort <JSExport, JSBNSPort>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSPort *)portWithMachPort:(uint32_t)machPort;
+ (NSPort *)portWithMachPort:(uint32_t)machPort options:(NSUInteger)f;

- (id)initWithMachPort:(uint32_t)machPort;
- (void)setDelegate:(id <NSMachPortDelegate>)anObject;
- (id <NSMachPortDelegate>)delegate;
- (id)initWithMachPort:(uint32_t)machPort options:(NSUInteger)f;
- (uint32_t)machPort;
- (void)scheduleInRunLoop:(NSRunLoop *)runLoop forMode:(NSString *)mode;
- (void)removeFromRunLoop:(NSRunLoop *)runLoop forMode:(NSString *)mode;

#pragma clang diagnostic pop

@end
