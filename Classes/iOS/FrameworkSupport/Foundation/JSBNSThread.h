#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSThread <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSThread *)currentThread;
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)argument;
+ (BOOL)isMultiThreaded;
+ (void)sleepUntilDate:(NSDate *)date;
+ (void)sleepForTimeInterval:(NSTimeInterval)ti;
+ (void)exit;
+ (double)threadPriority;
+ (BOOL)setThreadPriority:(double)p;
+ (NSArray *)callStackReturnAddresses;
+ (NSArray *)callStackSymbols;
+ (BOOL)isMainThread;
+ (NSThread *)mainThread;

- (NSMutableDictionary *)threadDictionary;
- (double)threadPriority;
- (void)setThreadPriority:(double)p;
- (void)setName:(NSString *)n;
- (NSString *)name;
- (NSUInteger)stackSize;
- (void)setStackSize:(NSUInteger)s;
- (BOOL)isMainThread;
- (id)init;
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)argument;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void)cancel;
- (void)start;
- (void)main;

#pragma clang diagnostic pop

@end
