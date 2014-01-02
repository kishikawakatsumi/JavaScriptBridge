#import "JSBAccounts.h"
#import "JSBACAccount.h"
#import "JSBACAccountCredential.h"
#import "JSBACAccountStore.h"
#import "JSBACAccountType.h"

@import ObjectiveC;

@implementation JSBAccounts

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([ACAccount class], @protocol(JSBACAccount));
    context[@"ACAccount"] = [ACAccount class];

    class_addProtocol([ACAccountCredential class], @protocol(JSBACAccountCredential));
    context[@"ACAccountCredential"] = [ACAccountCredential class];

    class_addProtocol([ACAccountStore class], @protocol(JSBACAccountStore));
    context[@"ACAccountStore"] = [ACAccountStore class];

    class_addProtocol([ACAccountType class], @protocol(JSBACAccountType));
    context[@"ACAccountType"] = [ACAccountType class];

#pragma clang diagnostic pop
}

@end
