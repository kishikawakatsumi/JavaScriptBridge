#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)requestWithURL:(NSURL *)URL;
+ (BOOL)supportsSecureCoding;
+ (id)requestWithURL:(NSURL *)URL cachePolicy:(NSURLRequestCachePolicy)cachePolicy timeoutInterval:(NSTimeInterval)timeoutInterval;

- (id)initWithURL:(NSURL *)URL;
- (id)initWithURL:(NSURL *)URL cachePolicy:(NSURLRequestCachePolicy)cachePolicy timeoutInterval:(NSTimeInterval)timeoutInterval;
- (NSURL *)URL;
- (NSURLRequestCachePolicy)cachePolicy;
- (NSTimeInterval)timeoutInterval;
- (NSURL *)mainDocumentURL;
- (NSURLRequestNetworkServiceType)networkServiceType;
- (BOOL)allowsCellularAccess;
- (void)setURL:(NSURL *)URL;
- (void)setCachePolicy:(NSURLRequestCachePolicy)policy;
- (void)setTimeoutInterval:(NSTimeInterval)seconds;
- (void)setMainDocumentURL:(NSURL *)URL;
- (void)setNetworkServiceType:(NSURLRequestNetworkServiceType)networkServiceType;
- (void)setAllowsCellularAccess:(BOOL)allow;
- (NSString *)HTTPMethod;
- (NSDictionary *)allHTTPHeaderFields;
- (NSString *)valueForHTTPHeaderField:(NSString *)field;
- (NSData *)HTTPBody;
- (NSInputStream *)HTTPBodyStream;
- (BOOL)HTTPShouldHandleCookies;
- (BOOL)HTTPShouldUsePipelining;

#pragma clang diagnostic pop

@end
