#import <Foundation/Foundation.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSExpression;

@protocol JSBNSFetchRequestExpression <JSExport, JSBNSExpression>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSExpression *)expressionForFetch:(NSExpression *)fetch context:(NSExpression *)context countOnly:(BOOL)countFlag;

- (NSExpression *)requestExpression;
- (NSExpression *)contextExpression;
- (BOOL)isCountOnlyRequest;

#pragma clang diagnostic pop

@end
