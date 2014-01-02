#import <Foundation/Foundation.h>
#import <Accounts/AccountsDefines.h>

@import Accounts;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBACAccount <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSString *accountDescription;
@property (copy) NSString *username;
@property (readonly) NSString *userFullName;
@property (readonly, weak) NSString *identifier;
@property (strong) ACAccountType *accountType;
@property (strong) ACAccountCredential *credential;

- (id)initWithAccountType:(ACAccountType *)type;

#pragma clang diagnostic pop

@end
