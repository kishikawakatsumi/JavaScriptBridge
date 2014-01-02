#import <Foundation/NSPredicate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSPredicate;

@protocol JSBNSComparisonPredicate <JSExport, JSBNSPredicate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSPredicate *)predicateWithLeftExpression:(NSExpression *)lhs rightExpression:(NSExpression *)rhs modifier:(NSComparisonPredicateModifier)modifier type:(NSPredicateOperatorType)type options:(NSComparisonPredicateOptions)options;
+ (NSPredicate *)predicateWithLeftExpression:(NSExpression *)lhs rightExpression:(NSExpression *)rhs customSelector:(SEL)selector;

- (id)initWithLeftExpression:(NSExpression *)lhs rightExpression:(NSExpression *)rhs modifier:(NSComparisonPredicateModifier)modifier type:(NSPredicateOperatorType)type options:(NSComparisonPredicateOptions)options;
- (id)initWithLeftExpression:(NSExpression *)lhs rightExpression:(NSExpression *)rhs customSelector:(SEL)selector;
- (NSPredicateOperatorType)predicateOperatorType;
- (NSComparisonPredicateModifier)comparisonPredicateModifier;
- (NSExpression *)leftExpression;
- (NSExpression *)rightExpression;
- (SEL)customSelector;
- (NSComparisonPredicateOptions)options;

#pragma clang diagnostic pop

@end
