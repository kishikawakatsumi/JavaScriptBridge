#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSExpression <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSExpression *)expressionWithFormat:(NSString *)expressionFormat argumentArray:(NSArray *)arguments;
+ (NSExpression *)expressionWithFormat:(NSString *)expressionFormat , ...;
+ (NSExpression *)expressionWithFormat:(NSString *)expressionFormat arguments:(va_list)argList;
+ (NSExpression *)expressionForConstantValue:(id)obj;
+ (NSExpression *)expressionForEvaluatedObject;
+ (NSExpression *)expressionForVariable:(NSString *)string;
+ (NSExpression *)expressionForKeyPath:(NSString *)keyPath;
+ (NSExpression *)expressionForFunction:(NSString *)name arguments:(NSArray *)parameters;
+ (NSExpression *)expressionForAggregate:(NSArray *)subexpressions;
+ (NSExpression *)expressionForUnionSet:(NSExpression *)left with:(NSExpression *)right;
+ (NSExpression *)expressionForIntersectSet:(NSExpression *)left with:(NSExpression *)right;
+ (NSExpression *)expressionForMinusSet:(NSExpression *)left with:(NSExpression *)right;
+ (NSExpression *)expressionForSubquery:(NSExpression *)expression usingIteratorVariable:(NSString *)variable predicate:(id)predicate;
+ (NSExpression *)expressionForFunction:(NSExpression *)target selectorName:(NSString *)name arguments:(NSArray *)parameters;
+ (NSExpression *)expressionForAnyKey;
+ (NSExpression *)expressionForBlock:(id (^)(id evaluatedObject , NSArray *expressions , NSMutableDictionary *context))block arguments:(NSArray *)arguments;

- (id)initWithExpressionType:(NSExpressionType)type;
- (NSExpressionType)expressionType;
- (id)constantValue;
- (NSString *)keyPath;
- (NSString *)function;
- (NSString *)variable;
- (NSExpression *)operand;
- (NSArray *)arguments;
- (id)collection;
- (NSPredicate *)predicate;
- (NSExpression *)leftExpression;
- (NSExpression *)rightExpression;
- (id (^)(id , NSArray *, NSMutableDictionary *))expressionBlock;
- (id)expressionValueWithObject:(id)object context:(NSMutableDictionary *)context;
- (void)allowEvaluation;

#pragma clang diagnostic pop

@end
