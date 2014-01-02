#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSCache <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)setName:(NSString *)n;
- (NSString *)name;
- (void)setDelegate:(id <NSCacheDelegate>)d;
- (id <NSCacheDelegate>)delegate;
- (id)objectForKey:(id)key;
- (void)setObject:(id)obj forKey:(id)key;
- (void)setObject:(id)obj forKey:(id)key cost:(NSUInteger)g;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (void)setTotalCostLimit:(NSUInteger)lim;
- (NSUInteger)totalCostLimit;
- (void)setCountLimit:(NSUInteger)lim;
- (NSUInteger)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)b;

#pragma clang diagnostic pop

@end
