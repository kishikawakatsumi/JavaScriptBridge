#import <Foundation/NSArray.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSOrderedSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSOrderedSet <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)orderedSet;
+ (instancetype)orderedSetWithObject:(id)object;
+ (instancetype)orderedSetWithObjects:(const id [])objects count:(NSUInteger)cnt;
+ (instancetype)orderedSetWithObjects:(id)firstObj , ...;
+ (instancetype)orderedSetWithOrderedSet:(NSOrderedSet *)set;
+ (instancetype)orderedSetWithOrderedSet:(NSOrderedSet *)set range:(NSRange)range copyItems:(BOOL)flag;
+ (instancetype)orderedSetWithArray:(NSArray *)array;
+ (instancetype)orderedSetWithArray:(NSArray *)array range:(NSRange)range copyItems:(BOOL)flag;
+ (instancetype)orderedSetWithSet:(NSSet *)set;
+ (instancetype)orderedSetWithSet:(NSSet *)set copyItems:(BOOL)flag;

- (NSArray *)sortedArrayUsingDescriptors:(NSArray *)sortDescriptors;
- (id)valueForKey:(NSString *)key;
- (void)setValue:(id)value forKey:(NSString *)key;
- (void)addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(void *)context;
- (void)removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath context:(void *)context;
- (void)removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)idx;
- (NSUInteger)indexOfObject:(id)object;
- (void)getObjects:(id __unsafe_unretained [])objects range:(NSRange)range;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)indexes;
- (id)firstObject;
- (id)lastObject;
- (BOOL)isEqualToOrderedSet:(NSOrderedSet *)other;
- (BOOL)containsObject:(id)object;
- (BOOL)intersectsOrderedSet:(NSOrderedSet *)other;
- (BOOL)intersectsSet:(NSSet *)set;
- (BOOL)isSubsetOfOrderedSet:(NSOrderedSet *)other;
- (BOOL)isSubsetOfSet:(NSSet *)set;
- (id)objectAtIndexedSubscript:(NSUInteger)idx;
- (NSEnumerator *)objectEnumerator;
- (NSEnumerator *)reverseObjectEnumerator;
- (NSOrderedSet *)reversedOrderedSet;
- (NSArray *)array;
- (NSSet *)set;
- (void)enumerateObjectsUsingBlock:(void (^)(id obj , NSUInteger idx , BOOL *stop))block;
- (void)enumerateObjectsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(id obj , NSUInteger idx , BOOL *stop))block;
- (void)enumerateObjectsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(id obj , NSUInteger idx , BOOL *stop))block;
- (NSUInteger)indexOfObjectPassingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSUInteger)indexOfObjectWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSUInteger)indexOfObjectAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesOfObjectsPassingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesOfObjectsWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesOfObjectsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSUInteger)indexOfObject:(id)object inSortedRange:(NSRange)range options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp;
- (NSArray *)sortedArrayUsingComparator:(NSComparator)cmptr;
- (NSArray *)sortedArrayWithOptions:(NSSortOptions)opts usingComparator:(NSComparator)cmptr;
- (NSString *)description;
- (NSString *)descriptionWithLocale:(id)locale;
- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level;
- (instancetype)init;
- (instancetype)initWithObjects:(const id [])objects count:(NSUInteger)cnt;
- (instancetype)initWithObject:(id)object;
- (instancetype)initWithObjects:(id)firstObj , ...;
- (instancetype)initWithOrderedSet:(NSOrderedSet *)set;
- (instancetype)initWithOrderedSet:(NSOrderedSet *)set copyItems:(BOOL)flag;
- (instancetype)initWithOrderedSet:(NSOrderedSet *)set range:(NSRange)range copyItems:(BOOL)flag;
- (instancetype)initWithArray:(NSArray *)array;
- (instancetype)initWithArray:(NSArray *)set copyItems:(BOOL)flag;
- (instancetype)initWithArray:(NSArray *)set range:(NSRange)range copyItems:(BOOL)flag;
- (instancetype)initWithSet:(NSSet *)set;
- (instancetype)initWithSet:(NSSet *)set copyItems:(BOOL)flag;
- (NSOrderedSet *)filteredOrderedSetUsingPredicate:(NSPredicate *)p;

#pragma clang diagnostic pop

@end
