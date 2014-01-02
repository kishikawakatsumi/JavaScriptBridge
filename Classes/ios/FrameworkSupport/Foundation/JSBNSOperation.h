#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSOperation <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)init;
- (void)start;
- (void)main;
- (BOOL)isCancelled;
- (void)cancel;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isReady;
- (void)addDependency:(NSOperation *)op;
- (void)removeDependency:(NSOperation *)op;
- (NSArray *)dependencies;
- (NSOperationQueuePriority)queuePriority;
- (void)setQueuePriority:(NSOperationQueuePriority)p;
- (void (^)(void))completionBlock;
- (void)setCompletionBlock:(void (^)(void))block;
- (void)waitUntilFinished;
- (double)threadPriority;
- (void)setThreadPriority:(double)p;

#pragma clang diagnostic pop

@end
