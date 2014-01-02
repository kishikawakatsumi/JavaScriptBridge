#import <Foundation/NSPointerFunctions.h>
#import <Foundation/NSString.h>
#import <Foundation/NSEnumerator.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSHashTable <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)hashTableWithOptions:(NSPointerFunctionsOptions)options;
+ (id)weakObjectsHashTable;

- (id)initWithOptions:(NSPointerFunctionsOptions)options capacity:(NSUInteger)initialCapacity;
- (id)initWithPointerFunctions:(NSPointerFunctions *)functions capacity:(NSUInteger)initialCapacity;
- (NSPointerFunctions *)pointerFunctions;
- (NSUInteger)count;
- (id)member:(id)object;
- (NSEnumerator *)objectEnumerator;
- (void)addObject:(id)object;
- (void)removeObject:(id)object;
- (void)removeAllObjects;
- (NSArray *)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)anObject;
- (BOOL)intersectsHashTable:(NSHashTable *)other;
- (BOOL)isEqualToHashTable:(NSHashTable *)other;
- (BOOL)isSubsetOfHashTable:(NSHashTable *)other;
- (void)intersectHashTable:(NSHashTable *)other;
- (void)unionHashTable:(NSHashTable *)other;
- (void)minusHashTable:(NSHashTable *)other;
- (NSSet *)setRepresentation;

#pragma clang diagnostic pop

@end
