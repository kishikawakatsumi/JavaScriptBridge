#import <Foundation/NSObject.h>
#import <Foundation/NSEnumerator.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSSet;

@protocol JSBNSMutableSet <JSExport, JSBNSSet>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)setWithCapacity:(NSUInteger)numItems;

- (void)addObject:(id)object;
- (void)removeObject:(id)object;
- (void)addObjectsFromArray:(NSArray *)array;
- (void)intersectSet:(NSSet *)otherSet;
- (void)minusSet:(NSSet *)otherSet;
- (void)removeAllObjects;
- (void)unionSet:(NSSet *)otherSet;
- (void)setSet:(NSSet *)otherSet;
- (instancetype)init;
- (instancetype)initWithCapacity:(NSUInteger)numItems;
- (void)filterUsingPredicate:(NSPredicate *)predicate;

#pragma clang diagnostic pop

@end
