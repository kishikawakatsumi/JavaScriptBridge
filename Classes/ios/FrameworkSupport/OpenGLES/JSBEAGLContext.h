#include<OpenGLES/EAGL.h>

@import OpenGLES;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEAGLContext <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSDictionary *drawableProperties;

+ (BOOL)setCurrentContext:(EAGLContext *)context;
+ (EAGLContext *)currentContext;

- (BOOL)renderbufferStorage:(NSUInteger)target fromDrawable:(id <EAGLDrawable>)drawable;
- (BOOL)presentRenderbuffer:(NSUInteger)target;
- (id)initWithAPI:(EAGLRenderingAPI)api;
- (id)initWithAPI:(EAGLRenderingAPI)api sharegroup:(EAGLSharegroup *)sharegroup;

#pragma clang diagnostic pop

@end
