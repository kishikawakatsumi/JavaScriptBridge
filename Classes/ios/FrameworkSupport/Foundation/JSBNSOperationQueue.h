#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSOperationQueue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)currentQueue;
+ (id)mainQueue;

- (void)addOperation:(NSOperation *)op;
- (void)addOperations:(NSArray *)ops waitUntilFinished:(BOOL)wait;
- (void)addOperationWithBlock:(void (^)(void))block;
- (NSArray *)operations;
- (NSUInteger)operationCount;
- (NSInteger)maxConcurrentOperationCount;
- (void)setMaxConcurrentOperationCount:(NSInteger)cnt;
- (void)setSuspended:(BOOL)b;
- (BOOL)isSuspended;
- (void)setName:(NSString *)n;
- (NSString *)name;
- (void)cancelAllOperations;
- (void)waitUntilAllOperationsAreFinished;

#pragma clang diagnostic pop

@end
