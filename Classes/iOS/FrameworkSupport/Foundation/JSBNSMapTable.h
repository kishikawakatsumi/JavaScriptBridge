#import <Foundation/NSPointerFunctions.h>
#import <Foundation/NSString.h>
#import <Foundation/NSEnumerator.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMapTable <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)mapTableWithKeyOptions:(NSPointerFunctionsOptions)keyOptions valueOptions:(NSPointerFunctionsOptions)valueOptions;
+ (id)strongToStrongObjectsMapTable;
+ (id)weakToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)weakToWeakObjectsMapTable;

- (id)initWithKeyOptions:(NSPointerFunctionsOptions)keyOptions valueOptions:(NSPointerFunctionsOptions)valueOptions capacity:(NSUInteger)initialCapacity;
- (id)initWithKeyPointerFunctions:(NSPointerFunctions *)keyFunctions valuePointerFunctions:(NSPointerFunctions *)valueFunctions capacity:(NSUInteger)initialCapacity;
- (NSPointerFunctions *)keyPointerFunctions;
- (NSPointerFunctions *)valuePointerFunctions;
- (id)objectForKey:(id)aKey;
- (void)removeObjectForKey:(id)aKey;
- (void)setObject:(id)anObject forKey:(id)aKey;
- (NSUInteger)count;
- (NSEnumerator *)keyEnumerator;
- (NSEnumerator *)objectEnumerator;
- (void)removeAllObjects;
- (NSDictionary *)dictionaryRepresentation;

#pragma clang diagnostic pop

@end
