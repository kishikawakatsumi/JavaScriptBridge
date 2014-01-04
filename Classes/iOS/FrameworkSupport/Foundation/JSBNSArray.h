#import <Foundation/NSArray.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSOrderedSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSArray <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)array;
+ (instancetype)arrayWithObject:(id)anObject;
+ (instancetype)arrayWithObjects:(const id [])objects count:(NSUInteger)cnt;
+ (instancetype)arrayWithObjects:(id)firstObj , ...;
+ (instancetype)arrayWithArray:(NSArray *)array;
+ (id)arrayWithContentsOfFile:(NSString *)path;
+ (id)arrayWithContentsOfURL:(NSURL *)url;

- (NSArray *)sortedArrayUsingDescriptors:(NSArray *)sortDescriptors;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)index;
- (NSArray *)arrayByAddingObject:(id)anObject;
- (NSArray *)arrayByAddingObjectsFromArray:(NSArray *)otherArray;
- (NSString *)componentsJoinedByString:(NSString *)separator;
- (BOOL)containsObject:(id)anObject;
- (NSString *)description;
- (NSString *)descriptionWithLocale:(id)locale;
- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level;
- (id)firstObjectCommonWithArray:(NSArray *)otherArray;
- (void)getObjects:(id __unsafe_unretained [])objects range:(NSRange)range;
- (NSUInteger)indexOfObject:(id)anObject;
- (NSUInteger)indexOfObject:(id)anObject inRange:(NSRange)range;
- (NSUInteger)indexOfObjectIdenticalTo:(id)anObject;
- (NSUInteger)indexOfObjectIdenticalTo:(id)anObject inRange:(NSRange)range;
- (BOOL)isEqualToArray:(NSArray *)otherArray;
- (id)firstObject;
- (id)lastObject;
- (NSEnumerator *)objectEnumerator;
- (NSEnumerator *)reverseObjectEnumerator;
- (NSData *)sortedArrayHint;
- (NSArray *)sortedArrayUsingFunction:(NSInteger ( *)(id , id , void *))comparator context:(void *)context;
- (NSArray *)sortedArrayUsingFunction:(NSInteger ( *)(id , id , void *))comparator context:(void *)context hint:(NSData *)hint;
- (NSArray *)sortedArrayUsingSelector:(SEL)comparator;
- (NSArray *)subarrayWithRange:(NSRange)range;
- (BOOL)writeToFile:(NSString *)path atomically:(BOOL)useAuxiliaryFile;
- (BOOL)writeToURL:(NSURL *)url atomically:(BOOL)atomically;
- (void)makeObjectsPerformSelector:(SEL)aSelector;
- (void)makeObjectsPerformSelector:(SEL)aSelector withObject:(id)argument;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)indexes;
- (id)objectAtIndexedSubscript:(NSUInteger)idx;
- (void)enumerateObjectsUsingBlock:(void (^)(id obj , NSUInteger idx , BOOL *stop))block;
- (void)enumerateObjectsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(id obj , NSUInteger idx , BOOL *stop))block;
- (void)enumerateObjectsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(id obj , NSUInteger idx , BOOL *stop))block;
- (NSUInteger)indexOfObjectPassingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSUInteger)indexOfObjectWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSUInteger)indexOfObjectAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesOfObjectsPassingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesOfObjectsWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesOfObjectsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , NSUInteger idx , BOOL *stop))predicate;
- (NSArray *)sortedArrayUsingComparator:(NSComparator)cmptr;
- (NSArray *)sortedArrayWithOptions:(NSSortOptions)opts usingComparator:(NSComparator)cmptr;
- (NSUInteger)indexOfObject:(id)obj inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp;
- (instancetype)init;
- (instancetype)initWithObjects:(const id [])objects count:(NSUInteger)cnt;
- (instancetype)initWithObjects:(id)firstObj , ...;
- (instancetype)initWithArray:(NSArray *)array;
- (instancetype)initWithArray:(NSArray *)array copyItems:(BOOL)flag;
- (id)initWithContentsOfFile:(NSString *)path;
- (id)initWithContentsOfURL:(NSURL *)url;
- (void)getObjects:(id __unsafe_unretained [])objects;
- (id)valueForKey:(NSString *)key;
- (void)setValue:(id)value forKey:(NSString *)key;
- (void)addObserver:(NSObject *)observer toObjectsAtIndexes:(NSIndexSet *)indexes forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(void *)context;
- (void)removeObserver:(NSObject *)observer fromObjectsAtIndexes:(NSIndexSet *)indexes forKeyPath:(NSString *)keyPath context:(void *)context;
- (void)removeObserver:(NSObject *)observer fromObjectsAtIndexes:(NSIndexSet *)indexes forKeyPath:(NSString *)keyPath;
- (void)addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(void *)context;
- (void)removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath context:(void *)context;
- (void)removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath;
- (NSArray *)pathsMatchingExtensions:(NSArray *)filterTypes;
- (NSArray *)filteredArrayUsingPredicate:(NSPredicate *)predicate;

#pragma clang diagnostic pop

@end
