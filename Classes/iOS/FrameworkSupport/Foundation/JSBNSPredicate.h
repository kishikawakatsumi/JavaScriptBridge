#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSOrderedSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPredicate <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSPredicate *)predicateWithFormat:(NSString *)predicateFormat argumentArray:(NSArray *)arguments;
+ (NSPredicate *)predicateWithFormat:(NSString *)predicateFormat , ...;
+ (NSPredicate *)predicateWithFormat:(NSString *)predicateFormat arguments:(va_list)argList;
+ (NSPredicate *)predicateFromMetadataQueryString:(NSString *)queryString;
+ (NSPredicate *)predicateWithValue:(BOOL)value;
+ (NSPredicate *)predicateWithBlock:(BOOL (^)(id evaluatedObject , NSDictionary *bindings))block;

- (NSString *)predicateFormat;
- (NSPredicate *)predicateWithSubstitutionVariables:(NSDictionary *)variables;
- (BOOL)evaluateWithObject:(id)object;
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(NSDictionary *)bindings;
- (void)allowEvaluation;

#pragma clang diagnostic pop

@end
