#import "JSBAddressBookUI.h"
#import "JSBABNewPersonViewController.h"
#import "JSBABPeoplePickerNavigationController.h"
#import "JSBABPersonViewController.h"
#import "JSBABUnknownPersonViewController.h"

@import ObjectiveC;

@implementation JSBAddressBookUI

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([ABNewPersonViewController class], @protocol(JSBABNewPersonViewController));
    context[@"ABNewPersonViewController"] = [ABNewPersonViewController class];

    class_addProtocol([ABPeoplePickerNavigationController class], @protocol(JSBABPeoplePickerNavigationController));
    context[@"ABPeoplePickerNavigationController"] = [ABPeoplePickerNavigationController class];

    class_addProtocol([ABPersonViewController class], @protocol(JSBABPersonViewController));
    context[@"ABPersonViewController"] = [ABPersonViewController class];

    class_addProtocol([ABUnknownPersonViewController class], @protocol(JSBABUnknownPersonViewController));
    context[@"ABUnknownPersonViewController"] = [ABUnknownPersonViewController class];

#pragma clang diagnostic pop
}

@end
