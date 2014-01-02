#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSIndexPath <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)indexPathWithIndex:(NSUInteger)index;
+ (instancetype)indexPathWithIndexes:(const NSUInteger [])indexes length:(NSUInteger)length;

- (instancetype)init;
- (instancetype)initWithIndexes:(const NSUInteger [])indexes length:(NSUInteger)length;
- (instancetype)initWithIndex:(NSUInteger)index;
- (NSIndexPath *)indexPathByAddingIndex:(NSUInteger)index;
- (NSIndexPath *)indexPathByRemovingLastIndex;
- (NSUInteger)indexAtPosition:(NSUInteger)position;
- (NSUInteger)length;
- (void)getIndexes:(NSUInteger *)indexes;
- (NSComparisonResult)compare:(NSIndexPath *)otherObject;

#pragma clang diagnostic pop

@end
