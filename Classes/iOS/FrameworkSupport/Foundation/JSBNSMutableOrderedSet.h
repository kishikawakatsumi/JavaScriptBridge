#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>
#import <Foundation/NSEnumerator.h>
#import <Foundation/NSArray.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSOrderedSet;

@protocol JSBNSMutableOrderedSet <JSExport, JSBNSOrderedSet>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)orderedSetWithCapacity:(NSUInteger)numItems;

- (void)insertObject:(id)object atIndex:(NSUInteger)idx;
- (void)removeObjectAtIndex:(NSUInteger)idx;
- (void)replaceObjectAtIndex:(NSUInteger)idx withObject:(id)object;
- (void)addObject:(id)object;
- (void)addObjects:(const id [])objects count:(NSUInteger)count;
- (void)addObjectsFromArray:(NSArray *)array;
- (void)exchangeObjectAtIndex:(NSUInteger)idx1 withObjectAtIndex:(NSUInteger)idx2;
- (void)moveObjectsAtIndexes:(NSIndexSet *)indexes toIndex:(NSUInteger)idx;
- (void)insertObjects:(NSArray *)objects atIndexes:(NSIndexSet *)indexes;
- (void)setObject:(id)obj atIndex:(NSUInteger)idx;
- (void)setObject:(id)obj atIndexedSubscript:(NSUInteger)idx;
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id [])objects count:(NSUInteger)count;
- (void)replaceObjectsAtIndexes:(NSIndexSet *)indexes withObjects:(NSArray *)objects;
- (void)removeObjectsInRange:(NSRange)range;
- (void)removeObjectsAtIndexes:(NSIndexSet *)indexes;
- (void)removeAllObjects;
- (void)removeObject:(id)object;
- (void)removeObjectsInArray:(NSArray *)array;
- (void)intersectOrderedSet:(NSOrderedSet *)other;
- (void)minusOrderedSet:(NSOrderedSet *)other;
- (void)unionOrderedSet:(NSOrderedSet *)other;
- (void)intersectSet:(NSSet *)other;
- (void)minusSet:(NSSet *)other;
- (void)unionSet:(NSSet *)other;
- (void)sortUsingComparator:(NSComparator)cmptr;
- (void)sortWithOptions:(NSSortOptions)opts usingComparator:(NSComparator)cmptr;
- (void)sortRange:(NSRange)range options:(NSSortOptions)opts usingComparator:(NSComparator)cmptr;
- (instancetype)init;
- (instancetype)initWithCapacity:(NSUInteger)numItems;
- (void)filterUsingPredicate:(NSPredicate *)p;
- (void)sortUsingDescriptors:(NSArray *)sortDescriptors;

#pragma clang diagnostic pop

@end
