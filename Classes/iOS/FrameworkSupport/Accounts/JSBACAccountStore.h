#import <Foundation/Foundation.h>
#import <Accounts/AccountsDefines.h>

@import Accounts;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBACAccountStore <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, weak) NSArray *accounts;

- (ACAccount *)accountWithIdentifier:(NSString *)identifier;
- (ACAccountType *)accountTypeWithAccountTypeIdentifier:(NSString *)typeIdentifier;
- (NSArray *)accountsWithAccountType:(ACAccountType *)accountType;
JSExportAs(saveAccountWithCompletionHandler,
- (void)__saveAccount:(ACAccount *)account withCompletionHandler:(JSValue *)completionHandler);
JSExportAs(requestAccessToAccountsWithTypeWithCompletionHandler,
- (void)__requestAccessToAccountsWithType:(ACAccountType *)accountType withCompletionHandler:(JSValue *)handler);
JSExportAs(requestAccessToAccountsWithTypeOptionsCompletion,
- (void)__requestAccessToAccountsWithType:(ACAccountType *)accountType
                                  options:(NSDictionary *)options
                               completion:(JSValue *)completion);
JSExportAs(renewCredentialsForAccountCompletion,
- (void)renewCredentialsForAccount:(ACAccount *)account completion:(JSValue *)completionHandler);
JSExportAs(removeAccountWithCompletionHandler,
- (void)removeAccount:(ACAccount *)account withCompletionHandler:(JSValue *)completionHandler);

#pragma clang diagnostic pop

@end
