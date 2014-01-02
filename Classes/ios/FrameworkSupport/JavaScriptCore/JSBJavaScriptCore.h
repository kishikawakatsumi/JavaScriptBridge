@import Foundation;

@class JSContext;

@interface JSBJavaScriptCore : NSObject

+ (void)addScriptingSupportToContext:(JSContext *)context;

@end
