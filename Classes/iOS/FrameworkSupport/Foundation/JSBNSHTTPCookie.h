#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSHTTPCookie <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)cookieWithProperties:(NSDictionary *)properties;
+ (NSDictionary *)requestHeaderFieldsWithCookies:(NSArray *)cookies;
+ (NSArray *)cookiesWithResponseHeaderFields:(NSDictionary *)headerFields forURL:(NSURL *)URL;

- (id)initWithProperties:(NSDictionary *)properties;
- (NSDictionary *)properties;
- (NSUInteger)version;
- (NSString *)name;
- (NSString *)value;
- (NSDate *)expiresDate;
- (BOOL)isSessionOnly;
- (NSString *)domain;
- (NSString *)path;
- (BOOL)isSecure;
- (BOOL)isHTTPOnly;
- (NSString *)comment;
- (NSURL *)commentURL;
- (NSArray *)portList;

#pragma clang diagnostic pop

@end
