#import <Foundation/Foundation.h>
#import <Accounts/AccountsDefines.h>

@import Accounts;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBACAccountType <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) BOOL accessGranted;
@property (readonly) NSString *accountTypeDescription;
@property (readonly) NSString *identifier;

#pragma clang diagnostic pop

@end
