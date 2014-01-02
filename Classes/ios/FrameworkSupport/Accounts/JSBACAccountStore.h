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
- (void)saveAccount:(ACAccount *)account withCompletionHandler:(ACAccountStoreSaveCompletionHandler)completionHandler;
- (void)requestAccessToAccountsWithType:(ACAccountType *)accountType withCompletionHandler:(ACAccountStoreRequestAccessCompletionHandler)handler;
- (void)requestAccessToAccountsWithType:(ACAccountType *)accountType options:(NSDictionary *)options completion:(ACAccountStoreRequestAccessCompletionHandler)completion;
- (void)renewCredentialsForAccount:(ACAccount *)account completion:(ACAccountStoreCredentialRenewalHandler)completionHandler;
- (void)removeAccount:(ACAccount *)account withCompletionHandler:(ACAccountStoreRemoveCompletionHandler)completionHandler;

#pragma clang diagnostic pop

@end
