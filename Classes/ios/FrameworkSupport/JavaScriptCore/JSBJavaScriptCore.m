#import "JSBJavaScriptCore.h"
#import "JSBJSContext.h"
#import "JSBJSManagedValue.h"
#import "JSBJSVirtualMachine.h"

@import ObjectiveC;

@implementation JSBJavaScriptCore

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([JSContext class], @protocol(JSBJSContext));
    context[@"JSContext"] = [JSContext class];

    class_addProtocol([JSManagedValue class], @protocol(JSBJSManagedValue));
    context[@"JSManagedValue"] = [JSManagedValue class];

    class_addProtocol([JSVirtualMachine class], @protocol(JSBJSVirtualMachine));
    context[@"JSVirtualMachine"] = [JSVirtualMachine class];

#pragma clang diagnostic pop
}

@end
