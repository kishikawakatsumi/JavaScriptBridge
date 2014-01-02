#import "JSBAdSupport.h"
#import "JSBASIdentifierManager.h"

@import ObjectiveC;

@implementation JSBAdSupport

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([ASIdentifierManager class], @protocol(JSBASIdentifierManager));
    context[@"ASIdentifierManager"] = [ASIdentifierManager class];

#pragma clang diagnostic pop
}

@end
