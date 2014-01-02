#import <Foundation/NSArray.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSOrderedSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSSet <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)set;
+ (instancetype)setWithObject:(id)object;
+ (instancetype)setWithObjects:(const id [])objects count:(NSUInteger)cnt;
+ (instancetype)setWithObjects:(id)firstObj , ...;
+ (instancetype)setWithSet:(NSSet *)set;
+ (instancetype)setWithArray:(NSArray *)array;

- (NSArray *)sortedArrayUsingDescriptors:(NSArray *)sortDescriptors;
- (id)valueForKey:(NSString *)key;
- (void)setValue:(id)value forKey:(NSString *)key;
- (void)addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(void *)context;
- (void)removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath context:(void *)context;
- (void)removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath;
- (NSSet *)filteredSetUsingPredicate:(NSPredicate *)predicate;
- (NSUInteger)count;
- (id)member:(id)object;
- (NSEnumerator *)objectEnumerator;
- (NSArray *)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)anObject;
- (NSString *)description;
- (NSString *)descriptionWithLocale:(id)locale;
- (BOOL)intersectsSet:(NSSet *)otherSet;
- (BOOL)isEqualToSet:(NSSet *)otherSet;
- (BOOL)isSubsetOfSet:(NSSet *)otherSet;
- (void)makeObjectsPerformSelector:(SEL)aSelector;
- (void)makeObjectsPerformSelector:(SEL)aSelector withObject:(id)argument;
- (NSSet *)setByAddingObject:(id)anObject;
- (NSSet *)setByAddingObjectsFromSet:(NSSet *)other;
- (NSSet *)setByAddingObjectsFromArray:(NSArray *)other;
- (void)enumerateObjectsUsingBlock:(void (^)(id obj , BOOL *stop))block;
- (void)enumerateObjectsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(id obj , BOOL *stop))block;
- (NSSet *)objectsPassingTest:(BOOL (^)(id obj , BOOL *stop))predicate;
- (NSSet *)objectsWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj , BOOL *stop))predicate;
- (instancetype)init;
- (instancetype)initWithObjects:(const id [])objects count:(NSUInteger)cnt;
- (instancetype)initWithObjects:(id)firstObj , ...;
- (instancetype)initWithSet:(NSSet *)set;
- (instancetype)initWithSet:(NSSet *)set copyItems:(BOOL)flag;
- (instancetype)initWithArray:(NSArray *)array;

#pragma clang diagnostic pop

@end
