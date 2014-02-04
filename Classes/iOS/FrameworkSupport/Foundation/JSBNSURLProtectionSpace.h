#import <Foundation/NSObject.h>
#import <Security/Security.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLProtectionSpace <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithHost:(NSString *)host port:(NSInteger)port protocol:(NSString *)protocol realm:(NSString *)realm authenticationMethod:(NSString *)authenticationMethod;
- (id)initWithProxyHost:(NSString *)host port:(NSInteger)port type:(NSString *)type realm:(NSString *)realm authenticationMethod:(NSString *)authenticationMethod;
- (NSString *)realm;
- (BOOL)receivesCredentialSecurely;
- (BOOL)isProxy;
- (NSString *)host;
- (NSInteger)port;
- (NSString *)proxyType;
- (NSString *)protocol;
- (NSString *)authenticationMethod;
- (NSArray *)distinguishedNames;
- (id)serverTrust;

#pragma clang diagnostic pop

@end
