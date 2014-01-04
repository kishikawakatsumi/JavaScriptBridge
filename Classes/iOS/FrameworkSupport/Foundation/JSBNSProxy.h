#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSProxy <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)alloc;
+ (id)allocWithZone:(NSZone *)zone;
+ (Class)class;
+ (BOOL)respondsToSelector:(SEL)aSelector;

- (void)forwardInvocation:(NSInvocation *)invocation;
- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel;
- (void)dealloc;
- (void)finalize;
- (NSString *)description;
- (NSString *)debugDescription;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;

#pragma clang diagnostic pop

@end
