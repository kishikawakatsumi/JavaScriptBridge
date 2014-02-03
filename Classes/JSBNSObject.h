//
//  JSBNSObject.h
//  JavaScriptBridge
//
//  Created by kishikawa katsumi on 2013/12/31.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#include <objc/objc.h>
#include <objc/NSObjCRuntime.h>

@import JavaScriptCore;

@class NSString, NSMethodSignature, NSInvocation;

@protocol JSBNSObject <JSExport, NSObject>

- (BOOL)isEqual:(id)object;
- (NSUInteger)hash;

- (Class)superclass;
- (Class)class;
- (id)self;
- (struct _NSZone *)zone;

JSExportAs(performSelector,
- (id)__performSelector:(NSString *)aSelector);
JSExportAs(performSelectorWithObject,
- (id)__performSelector:(NSString *)aSelector withObject:(id)object);
JSExportAs(performSelectorWithObjectWithObject,
- (id)__performSelector:(NSString *)aSelector withObject:(id)object1 withObject:(id)object2);

- (BOOL)isProxy;

- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)conformsToProtocol:(Protocol *)aProtocol;

- (BOOL)respondsToSelector:(SEL)aSelector;

- (id)retain OBJC_ARC_UNAVAILABLE;
- (oneway void)release OBJC_ARC_UNAVAILABLE;
- (id)autorelease OBJC_ARC_UNAVAILABLE;
- (NSUInteger)retainCount OBJC_ARC_UNAVAILABLE;

- (NSString *)description;
- (NSString *)debugDescription;

+ (void)load;

+ (void)initialize;
- (id)init;

+ (id)new;
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (id)alloc;
- (void)dealloc;

- (void)finalize;

- (id)copy;
- (id)mutableCopy;

+ (id)copyWithZone:(struct _NSZone *)zone;
+ (id)mutableCopyWithZone:(struct _NSZone *)zone;

+ (Class)superclass;
+ (Class)class;
JSExportAs(instancesRespondToSelector,
+ (BOOL)__instancesRespondToSelector:(NSString *)aSelector);
+ (BOOL)conformsToProtocol:(Protocol *)protocol;
- (IMP)methodForSelector:(SEL)aSelector;
+ (IMP)instanceMethodForSelector:(SEL)aSelector;
JSExportAs(doesNotRecognizeSelector,
- (void)__doesNotRecognizeSelector:(NSString *)aSelector);

JSExportAs(forwardingTargetForSelector,
- (id)__forwardingTargetForSelector:(NSString *)aSelector);
- (void)forwardInvocation:(NSInvocation *)anInvocation;
JSExportAs(methodSignatureForSelector,
- (NSMethodSignature *)__methodSignatureForSelector:(NSString *)aSelector);

JSExportAs(instanceMethodSignatureForSelector,
+ (NSMethodSignature *)__instanceMethodSignatureForSelector:(NSString *)aSelector);

- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;

+ (NSString *)description;

+ (BOOL)isSubclassOfClass:(Class)aClass;

JSExportAs(resolveClassMethod,
+ (BOOL)__resolveClassMethod:(NSString *)sel);
JSExportAs(resolveInstanceMethod,
+ (BOOL)__resolveInstanceMethod:(NSString *)sel);

@end
