#import <Foundation/NSObject.h>
#import <Security/Security.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLCredential <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSURLCredential *)credentialWithUser:(NSString *)user password:(NSString *)password persistence:(NSURLCredentialPersistence)persistence;
+ (NSURLCredential *)credentialWithIdentity:(id)identity certificates:(NSArray *)certArray persistence:(NSURLCredentialPersistence)persistence;
+ (NSURLCredential *)credentialForTrust:(id)trust;

- (NSURLCredentialPersistence)persistence;
- (id)initWithUser:(NSString *)user password:(NSString *)password persistence:(NSURLCredentialPersistence)persistence;
- (NSString *)user;
- (NSString *)password;
- (BOOL)hasPassword;
- (id)initWithIdentity:(id)identity certificates:(NSArray *)certArray persistence:(NSURLCredentialPersistence)persistence;
- (id)identity;
- (NSArray *)certificates;
- (id)initWithTrust:(id)trust;

#pragma clang diagnostic pop

@end
