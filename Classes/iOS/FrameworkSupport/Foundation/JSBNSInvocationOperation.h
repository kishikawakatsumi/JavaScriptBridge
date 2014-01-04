#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSOperation;

@protocol JSBNSInvocationOperation <JSExport, JSBNSOperation>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithTarget:(id)target selector:(SEL)sel object:(id)arg;
- (id)initWithInvocation:(NSInvocation *)inv;
- (NSInvocation *)invocation;
- (id)result;

#pragma clang diagnostic pop

@end
