#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSPointerFunctions.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPointerArray <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ pointerArrayWithOptions:(NSPointerFunctionsOptions)options;
+ pointerArrayWithPointerFunctions:(NSPointerFunctions *)functions;
+ (id)strongObjectsPointerArray;
+ (id)weakObjectsPointerArray;

- initWithOptions:(NSPointerFunctionsOptions)options;
- initWithPointerFunctions:(NSPointerFunctions *)functions;
- (NSPointerFunctions *)pointerFunctions;
- (void *)pointerAtIndex:(NSUInteger)index;
- (void)addPointer:(void *)pointer;
- (void)removePointerAtIndex:(NSUInteger)index;
- (void)insertPointer:(void *)item atIndex:(NSUInteger)index;
- (void)replacePointerAtIndex:(NSUInteger)index withPointer:(void *)item;
- (void)compact;
- (NSUInteger)count;
- (void)setCount:(NSUInteger)count;
- (NSArray *)allObjects;

#pragma clang diagnostic pop

@end
