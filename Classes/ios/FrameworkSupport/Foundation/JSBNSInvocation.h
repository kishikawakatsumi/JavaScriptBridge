#import <Foundation/NSObject.h>
#include<stdbool.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSInvocation <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSInvocation *)invocationWithMethodSignature:(NSMethodSignature *)sig;

- (NSMethodSignature *)methodSignature;
- (void)retainArguments;
- (BOOL)argumentsRetained;
- (id)target;
- (void)setTarget:(id)target;
- (SEL)selector;
- (void)setSelector:(SEL)selector;
- (void)getReturnValue:(void *)retLoc;
- (void)setReturnValue:(void *)retLoc;
- (void)getArgument:(void *)argumentLocation atIndex:(NSInteger)idx;
- (void)setArgument:(void *)argumentLocation atIndex:(NSInteger)idx;
- (void)invoke;
- (void)invokeWithTarget:(id)target;

#pragma clang diagnostic pop

@end
