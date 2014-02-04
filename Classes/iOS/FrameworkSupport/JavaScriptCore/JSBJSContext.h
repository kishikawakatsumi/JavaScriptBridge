#include<JavaScriptCore/JavaScript.h>

@import JavaScriptCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBJSContext <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) void (^exceptionHandler)(JSContext *context, JSValue *exception);
@property (retain) JSValue *exception;
@property (readonly, retain) JSVirtualMachine *virtualMachine;

+ (JSContext *)currentContext;
+ (JSValue *)currentThis;
+ (NSArray *)currentArguments;
+ (JSContext *)contextWithJSGlobalContextRef:(id)jsGlobalContextRef;

- (id)init;
- (id)initWithVirtualMachine:(JSVirtualMachine *)virtualMachine;
- (JSValue *)evaluateScript:(NSString *)script;
- (JSValue *)globalObject;
- (JSValue *)objectForKeyedSubscript:(id)key;
- (void)setObject:(id)object forKeyedSubscript:(NSObject <NSCopying> *)key;
- (id)JSGlobalContextRef;

#pragma clang diagnostic pop

@end
