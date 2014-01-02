#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSOperation;

@protocol JSBNSBlockOperation <JSExport, JSBNSOperation>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)blockOperationWithBlock:(void (^)(void))block;

- (void)addExecutionBlock:(void (^)(void))block;
- (NSArray *)executionBlocks;

#pragma clang diagnostic pop

@end
