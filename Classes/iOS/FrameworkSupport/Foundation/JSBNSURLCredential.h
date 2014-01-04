#import <Foundation/NSObject.h>
#import <Security/Security.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLCredential <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSURLCredential *)credentialWithUser:(NSString *)user password:(NSString *)password persistence:(NSURLCredentialPersistence)persistence;
+ (NSURLCredential *)credentialWithIdentity:(SecIdentityRef)identity certificates:(NSArray *)certArray persistence:(NSURLCredentialPersistence)persistence;
+ (NSURLCredential *)credentialForTrust:(SecTrustRef)trust;

- (NSURLCredentialPersistence)persistence;
- (id)initWithUser:(NSString *)user password:(NSString *)password persistence:(NSURLCredentialPersistence)persistence;
- (NSString *)user;
- (NSString *)password;
- (BOOL)hasPassword;
- (id)initWithIdentity:(SecIdentityRef)identity certificates:(NSArray *)certArray persistence:(NSURLCredentialPersistence)persistence;
- (SecIdentityRef)identity;
- (NSArray *)certificates;
- (id)initWithTrust:(SecTrustRef)trust;

#pragma clang diagnostic pop

@end
