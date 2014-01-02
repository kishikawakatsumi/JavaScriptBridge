#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSUbiquitousKeyValueStore <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSUbiquitousKeyValueStore *)defaultStore;

- (id)objectForKey:(NSString *)aKey;
- (void)setObject:(id)anObject forKey:(NSString *)aKey;
- (void)removeObjectForKey:(NSString *)aKey;
- (NSString *)stringForKey:(NSString *)aKey;
- (NSArray *)arrayForKey:(NSString *)aKey;
- (NSDictionary *)dictionaryForKey:(NSString *)aKey;
- (NSData *)dataForKey:(NSString *)aKey;
- (long long)longLongForKey:(NSString *)aKey;
- (double)doubleForKey:(NSString *)aKey;
- (BOOL)boolForKey:(NSString *)aKey;
- (void)setString:(NSString *)aString forKey:(NSString *)aKey;
- (void)setData:(NSData *)aData forKey:(NSString *)aKey;
- (void)setArray:(NSArray *)anArray forKey:(NSString *)aKey;
- (void)setDictionary:(NSDictionary *)aDictionary forKey:(NSString *)aKey;
- (void)setLongLong:(long long)value forKey:(NSString *)aKey;
- (void)setDouble:(double)value forKey:(NSString *)aKey;
- (void)setBool:(BOOL)value forKey:(NSString *)aKey;
- (NSDictionary *)dictionaryRepresentation;
- (BOOL)synchronize;

#pragma clang diagnostic pop

@end
