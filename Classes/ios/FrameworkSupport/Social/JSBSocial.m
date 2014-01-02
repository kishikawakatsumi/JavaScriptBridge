#import "JSBSocial.h"
#import "JSBSLRequest.h"
#import "JSBSLComposeViewController.h"

@import ObjectiveC;

@implementation JSBSocial

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([SLRequest class], @protocol(JSBSLRequest));
    context[@"SLRequest"] = [SLRequest class];

    class_addProtocol([SLComposeViewController class], @protocol(JSBSLComposeViewController));
    context[@"SLComposeViewController"] = [SLComposeViewController class];

#pragma clang diagnostic pop
}

@end
