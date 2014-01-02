#import <Foundation/NSArray.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSOrderedSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSSortDescriptor <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)sortDescriptorWithKey:(NSString *)key ascending:(BOOL)ascending;
+ (id)sortDescriptorWithKey:(NSString *)key ascending:(BOOL)ascending selector:(SEL)selector;
+ (id)sortDescriptorWithKey:(NSString *)key ascending:(BOOL)ascending comparator:(NSComparator)cmptr;

- (id)initWithKey:(NSString *)key ascending:(BOOL)ascending;
- (id)initWithKey:(NSString *)key ascending:(BOOL)ascending selector:(SEL)selector;
- (NSString *)key;
- (BOOL)ascending;
- (SEL)selector;
- (void)allowEvaluation;
- (id)initWithKey:(NSString *)key ascending:(BOOL)ascending comparator:(NSComparator)cmptr;
- (NSComparator)comparator;
- (NSComparisonResult)compareObject:(id)object1 toObject:(id)object2;
- (id)reversedSortDescriptor;

#pragma clang diagnostic pop

@end
