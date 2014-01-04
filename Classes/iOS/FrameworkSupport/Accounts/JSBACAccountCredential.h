#import <Foundation/Foundation.h>
#import <Accounts/AccountsDefines.h>

@import Accounts;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBACAccountCredential <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSString *oauthToken;

- (id)initWithOAuthToken:(NSString *)token tokenSecret:(NSString *)secret;
- (id)initWithOAuth2Token:(NSString *)token refreshToken:(NSString *)refreshToken expiryDate:(NSDate *)expiryDate;

#pragma clang diagnostic pop

@end
