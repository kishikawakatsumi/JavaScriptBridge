#import <Foundation/NSObject.h>
#import <Foundation/NSEnumerator.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSDictionary;

@protocol JSBNSMutableDictionary <JSExport, JSBNSDictionary>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)dictionaryWithCapacity:(NSUInteger)numItems;
+ (id)sharedKeySetForKeys:(NSArray *)keys;
+ (id)dictionaryWithSharedKeySet:(id)keyset;

- (void)removeObjectForKey:(id)aKey;
- (void)setObject:(id)anObject forKey:(id <NSCopying>)aKey;
- (void)addEntriesFromDictionary:(NSDictionary *)otherDictionary;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(NSArray *)keyArray;
- (void)setDictionary:(NSDictionary *)otherDictionary;
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;
- (instancetype)init;
- (instancetype)initWithCapacity:(NSUInteger)numItems;
- (void)setValue:(id)value forKey:(NSString *)key;

#pragma clang diagnostic pop

@end
