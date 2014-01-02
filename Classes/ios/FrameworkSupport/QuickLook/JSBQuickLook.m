#import "JSBQuickLook.h"
#import "JSBNSURL.h"
#import "JSBQLPreviewController.h"

@import ObjectiveC;

@implementation JSBQuickLook

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([NSURL class], @protocol(JSBNSURL));
    context[@"NSURL"] = [NSURL class];

    class_addProtocol([QLPreviewController class], @protocol(JSBQLPreviewController));
    context[@"QLPreviewController"] = [QLPreviewController class];

#pragma clang diagnostic pop
}

@end
