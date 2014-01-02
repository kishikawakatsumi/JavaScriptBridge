#import "JSBMessageUI.h"
#import "JSBMFMailComposeViewController.h"
#import "JSBMFMessageComposeViewController.h"

@import ObjectiveC;

@implementation JSBMessageUI

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([MFMailComposeViewController class], @protocol(JSBMFMailComposeViewController));
    context[@"MFMailComposeViewController"] = [MFMailComposeViewController class];

    class_addProtocol([MFMessageComposeViewController class], @protocol(JSBMFMessageComposeViewController));
    context[@"MFMessageComposeViewController"] = [MFMessageComposeViewController class];

#pragma clang diagnostic pop
}

@end
