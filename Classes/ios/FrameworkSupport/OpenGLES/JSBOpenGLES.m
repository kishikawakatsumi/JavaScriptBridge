#import "JSBOpenGLES.h"
#import "JSBEAGLSharegroup.h"
#import "JSBEAGLContext.h"

@import ObjectiveC;

@implementation JSBOpenGLES

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([EAGLSharegroup class], @protocol(JSBEAGLSharegroup));
    context[@"EAGLSharegroup"] = [EAGLSharegroup class];

    class_addProtocol([EAGLContext class], @protocol(JSBEAGLContext));
    context[@"EAGLContext"] = [EAGLContext class];

#pragma clang diagnostic pop
}

@end
