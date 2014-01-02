#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSURLRequest;

@protocol JSBNSMutableURLRequest <JSExport, JSBNSURLRequest>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

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
- (void)setHTTPMethod:(NSString *)method;
- (void)setAllHTTPHeaderFields:(NSDictionary *)headerFields;
- (void)setValue:(NSString *)value forHTTPHeaderField:(NSString *)field;
- (void)addValue:(NSString *)value forHTTPHeaderField:(NSString *)field;
- (void)setHTTPBody:(NSData *)data;
- (void)setHTTPBodyStream:(NSInputStream *)inputStream;
- (void)setHTTPShouldHandleCookies:(BOOL)should;
- (void)setHTTPShouldUsePipelining:(BOOL)shouldUsePipelining;

#pragma clang diagnostic pop

@end
