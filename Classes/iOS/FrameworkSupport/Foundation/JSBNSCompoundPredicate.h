#import <Foundation/NSPredicate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSPredicate;

@protocol JSBNSCompoundPredicate <JSExport, JSBNSPredicate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSPredicate *)andPredicateWithSubpredicates:(NSArray *)subpredicates;
+ (NSPredicate *)orPredicateWithSubpredicates:(NSArray *)subpredicates;
+ (NSPredicate *)notPredicateWithSubpredicate:(NSPredicate *)predicate;

- (id)initWithType:(NSCompoundPredicateType)type subpredicates:(NSArray *)subpredicates;
- (NSCompoundPredicateType)compoundPredicateType;
- (NSArray *)subpredicates;

#pragma clang diagnostic pop

@end
