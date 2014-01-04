#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLCache <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSURLCache *)sharedURLCache;
+ (void)setSharedURLCache:(NSURLCache *)cache;

- (id)initWithMemoryCapacity:(NSUInteger)memoryCapacity diskCapacity:(NSUInteger)diskCapacity diskPath:(NSString *)path;
- (NSCachedURLResponse *)cachedResponseForRequest:(NSURLRequest *)request;
- (void)storeCachedResponse:(NSCachedURLResponse *)cachedResponse forRequest:(NSURLRequest *)request;
- (void)removeCachedResponseForRequest:(NSURLRequest *)request;
- (void)removeAllCachedResponses;
- (NSUInteger)memoryCapacity;
- (NSUInteger)diskCapacity;
- (void)setMemoryCapacity:(NSUInteger)memoryCapacity;
- (void)setDiskCapacity:(NSUInteger)diskCapacity;
- (NSUInteger)currentMemoryUsage;
- (NSUInteger)currentDiskUsage;

#pragma clang diagnostic pop

@end
