#import "JSBTwitter.h"
#import "JSBTWRequest.h"
#import "JSBTWTweetComposeViewController.h"

@import ObjectiveC;

@implementation JSBTwitter

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([TWRequest class], @protocol(JSBTWRequest));
    context[@"TWRequest"] = [TWRequest class];

    class_addProtocol([TWTweetComposeViewController class], @protocol(JSBTWTweetComposeViewController));
    context[@"TWTweetComposeViewController"] = [TWTweetComposeViewController class];

#pragma clang diagnostic pop
}

@end
