#import <Foundation/NSObject.h>
#import <Foundation/NSEnumerator.h>
#import <Foundation/NSRange.h>
#import <Foundation/NSObjCRuntime.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSArray;

@protocol JSBNSMutableArray <JSExport, JSBNSArray>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)arrayWithCapacity:(NSUInteger)numItems;

- (void)addObject:(id)anObject;
- (void)insertObject:(id)anObject atIndex:(NSUInteger)index;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)index;
- (void)replaceObjectAtIndex:(NSUInteger)index withObject:(id)anObject;
- (void)addObjectsFromArray:(NSArray *)otherArray;
- (void)exchangeObjectAtIndex:(NSUInteger)idx1 withObjectAtIndex:(NSUInteger)idx2;
- (void)removeAllObjects;
- (void)removeObject:(id)anObject inRange:(NSRange)range;
- (void)removeObject:(id)anObject;
- (void)removeObjectIdenticalTo:(id)anObject inRange:(NSRange)range;
- (void)removeObjectIdenticalTo:(id)anObject;
- (void)removeObjectsFromIndices:(NSUInteger *)indices numIndices:(NSUInteger)cnt;
- (void)removeObjectsInArray:(NSArray *)otherArray;
- (void)removeObjectsInRange:(NSRange)range;
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(NSArray *)otherArray range:(NSRange)otherRange;
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(NSArray *)otherArray;
- (void)setArray:(NSArray *)otherArray;
- (void)sortUsingFunction:(NSInteger ( *)(id , id , void *))compare context:(void *)context;
- (void)sortUsingSelector:(SEL)comparator;
- (void)insertObjects:(NSArray *)objects atIndexes:(NSIndexSet *)indexes;
- (void)removeObjectsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectsAtIndexes:(NSIndexSet *)indexes withObjects:(NSArray *)objects;
- (void)setObject:(id)obj atIndexedSubscript:(NSUInteger)idx;
- (void)sortUsingComparator:(NSComparator)cmptr;
- (void)sortWithOptions:(NSSortOptions)opts usingComparator:(NSComparator)cmptr;
- (instancetype)init;
- (instancetype)initWithCapacity:(NSUInteger)numItems;
- (void)filterUsingPredicate:(NSPredicate *)predicate;
- (void)sortUsingDescriptors:(NSArray *)sortDescriptors;

#pragma clang diagnostic pop

@end
