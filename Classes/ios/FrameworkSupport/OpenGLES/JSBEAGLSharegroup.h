#include<Foundation/Foundation.h>

@import OpenGLES;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEAGLSharegroup <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) EAGLRenderingAPI API;
@property (copy, nonatomic) NSString *debugLabel;
@property (readonly) EAGLSharegroup *sharegroup;

#pragma clang diagnostic pop

@end
