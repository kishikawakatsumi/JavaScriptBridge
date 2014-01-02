#import <Foundation/NSObject.h>
#import <Foundation/NSURLCache.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLProtocol <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)canInitWithRequest:(NSURLRequest *)request;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)request;
+ (BOOL)requestIsCacheEquivalent:(NSURLRequest *)a toRequest:(NSURLRequest *)b;
+ (id)propertyForKey:(NSString *)key inRequest:(NSURLRequest *)request;
+ (void)setProperty:(id)value forKey:(NSString *)key inRequest:(NSMutableURLRequest *)request;
+ (void)removePropertyForKey:(NSString *)key inRequest:(NSMutableURLRequest *)request;
+ (BOOL)registerClass:(Class)protocolClass;
+ (void)unregisterClass:(Class)protocolClass;

- (id)initWithRequest:(NSURLRequest *)request cachedResponse:(NSCachedURLResponse *)cachedResponse client:(id <NSURLProtocolClient>)client;
- (id <NSURLProtocolClient>)client;
- (NSURLRequest *)request;
- (NSCachedURLResponse *)cachedResponse;
- (void)startLoading;
- (void)stopLoading;

#pragma clang diagnostic pop

@end
