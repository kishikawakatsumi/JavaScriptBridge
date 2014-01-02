#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSHTTPCookieStorage <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSHTTPCookieStorage *)sharedHTTPCookieStorage;

- (NSArray *)cookies;
- (void)setCookie:(NSHTTPCookie *)cookie;
- (void)deleteCookie:(NSHTTPCookie *)cookie;
- (NSArray *)cookiesForURL:(NSURL *)URL;
- (void)setCookies:(NSArray *)cookies forURL:(NSURL *)URL mainDocumentURL:(NSURL *)mainDocumentURL;
- (NSHTTPCookieAcceptPolicy)cookieAcceptPolicy;
- (void)setCookieAcceptPolicy:(NSHTTPCookieAcceptPolicy)cookieAcceptPolicy;
- (NSArray *)sortedCookiesUsingDescriptors:(NSArray *)sortOrder;

#pragma clang diagnostic pop

@end
