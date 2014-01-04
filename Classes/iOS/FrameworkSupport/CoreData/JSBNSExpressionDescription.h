#import <Foundation/NSObject.h>
#import <CoreData/NSPropertyDescription.h>
#import <CoreData/NSAttributeDescription.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPropertyDescription;

@protocol JSBNSExpressionDescription <JSExport, JSBNSPropertyDescription>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSExpression *)expression;
- (void)setExpression:(NSExpression *)expression;
- (NSAttributeType)expressionResultType;
- (void)setExpressionResultType:(NSAttributeType)type;

#pragma clang diagnostic pop

@end
