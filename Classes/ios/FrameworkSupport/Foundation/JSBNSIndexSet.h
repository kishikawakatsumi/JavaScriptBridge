#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSIndexSet <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)indexSet;
+ (instancetype)indexSetWithIndex:(NSUInteger)value;
+ (instancetype)indexSetWithIndexesInRange:(NSRange)range;

- (instancetype)init;
- (instancetype)initWithIndexesInRange:(NSRange)range;
- (instancetype)initWithIndexSet:(NSIndexSet *)indexSet;
- (instancetype)initWithIndex:(NSUInteger)value;
- (BOOL)isEqualToIndexSet:(NSIndexSet *)indexSet;
- (NSUInteger)count;
- (NSUInteger)firstIndex;
- (NSUInteger)lastIndex;
- (NSUInteger)indexGreaterThanIndex:(NSUInteger)value;
- (NSUInteger)indexLessThanIndex:(NSUInteger)value;
- (NSUInteger)indexGreaterThanOrEqualToIndex:(NSUInteger)value;
- (NSUInteger)indexLessThanOrEqualToIndex:(NSUInteger)value;
- (NSUInteger)getIndexes:(NSUInteger *)indexBuffer maxCount:(NSUInteger)bufferSize inIndexRange:(NSRangePointer)range;
- (NSUInteger)countOfIndexesInRange:(NSRange)range;
- (BOOL)containsIndex:(NSUInteger)value;
- (BOOL)containsIndexesInRange:(NSRange)range;
- (BOOL)containsIndexes:(NSIndexSet *)indexSet;
- (BOOL)intersectsIndexesInRange:(NSRange)range;
- (void)enumerateIndexesUsingBlock:(void (^)(NSUInteger idx , BOOL *stop))block;
- (void)enumerateIndexesWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(NSUInteger idx , BOOL *stop))block;
- (void)enumerateIndexesInRange:(NSRange)range options:(NSEnumerationOptions)opts usingBlock:(void (^)(NSUInteger idx , BOOL *stop))block;
- (NSUInteger)indexPassingTest:(BOOL (^)(NSUInteger idx , BOOL *stop))predicate;
- (NSUInteger)indexWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSUInteger idx , BOOL *stop))predicate;
- (NSUInteger)indexInRange:(NSRange)range options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesPassingTest:(BOOL (^)(NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSUInteger idx , BOOL *stop))predicate;
- (NSIndexSet *)indexesInRange:(NSRange)range options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSUInteger idx , BOOL *stop))predicate;
- (void)enumerateRangesUsingBlock:(void (^)(NSRange range , BOOL *stop))block;
- (void)enumerateRangesWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(NSRange range , BOOL *stop))block;
- (void)enumerateRangesInRange:(NSRange)range options:(NSEnumerationOptions)opts usingBlock:(void (^)(NSRange range , BOOL *stop))block;

#pragma clang diagnostic pop

@end
