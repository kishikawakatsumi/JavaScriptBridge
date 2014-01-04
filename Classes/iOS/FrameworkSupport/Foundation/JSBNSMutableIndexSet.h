#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSIndexSet;

@protocol JSBNSMutableIndexSet <JSExport, JSBNSIndexSet>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)addIndexes:(NSIndexSet *)indexSet;
- (void)removeIndexes:(NSIndexSet *)indexSet;
- (void)removeAllIndexes;
- (void)addIndex:(NSUInteger)value;
- (void)removeIndex:(NSUInteger)value;
- (void)addIndexesInRange:(NSRange)range;
- (void)removeIndexesInRange:(NSRange)range;
- (void)shiftIndexesStartingAtIndex:(NSUInteger)index by:(NSInteger)delta;

#pragma clang diagnostic pop

@end
