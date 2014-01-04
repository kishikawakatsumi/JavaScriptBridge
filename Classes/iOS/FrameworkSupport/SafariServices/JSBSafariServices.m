#import "JSBSafariServices.h"
#import "JSBSSReadingList.h"

@import ObjectiveC;

@implementation JSBSafariServices

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([SSReadingList class], @protocol(JSBSSReadingList));
    context[@"SSReadingList"] = [SSReadingList class];

#pragma clang diagnostic pop
}

@end
