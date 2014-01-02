#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSOrderedSet.h>
#import <Foundation/NSSet.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSDictionary <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)dictionary;
+ (instancetype)dictionaryWithObject:(id)object forKey:(id <NSCopying>)key;
+ (instancetype)dictionaryWithObjects:(const id [])objects forKeys:(const id <NSCopying >[])keys count:(NSUInteger)cnt;
+ (instancetype)dictionaryWithObjectsAndKeys:(id)firstObject , ...;
+ (instancetype)dictionaryWithDictionary:(NSDictionary *)dict;
+ (instancetype)dictionaryWithObjects:(NSArray *)objects forKeys:(NSArray *)keys;
+ (id)dictionaryWithContentsOfFile:(NSString *)path;
+ (id)dictionaryWithContentsOfURL:(NSURL *)url;
+ (instancetype)dictionaryWithCapacity:(NSUInteger)numItems;
+ (id)sharedKeySetForKeys:(NSArray *)keys;

- (id)valueForKey:(NSString *)key;
- (NSUInteger)count;
- (id)objectForKey:(id)aKey;
- (NSEnumerator *)keyEnumerator;
- (NSArray *)allKeys;
- (NSArray *)allKeysForObject:(id)anObject;
- (NSArray *)allValues;
- (NSString *)description;
- (NSString *)descriptionInStringsFileFormat;
- (NSString *)descriptionWithLocale:(id)locale;
- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level;
- (BOOL)isEqualToDictionary:(NSDictionary *)otherDictionary;
- (NSEnumerator *)objectEnumerator;
- (NSArray *)objectsForKeys:(NSArray *)keys notFoundMarker:(id)marker;
- (BOOL)writeToFile:(NSString *)path atomically:(BOOL)useAuxiliaryFile;
- (BOOL)writeToURL:(NSURL *)url atomically:(BOOL)atomically;
- (NSArray *)keysSortedByValueUsingSelector:(SEL)comparator;
- (void)getObjects:(id __unsafe_unretained [])objects andKeys:(id __unsafe_unretained [])keys;
- (id)objectForKeyedSubscript:(id)key;
- (void)enumerateKeysAndObjectsUsingBlock:(void (^)(id key , id obj , BOOL *stop))block;
- (void)enumerateKeysAndObjectsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(id key , id obj , BOOL *stop))block;
- (NSArray *)keysSortedByValueUsingComparator:(NSComparator)cmptr;
- (NSArray *)keysSortedByValueWithOptions:(NSSortOptions)opts usingComparator:(NSComparator)cmptr;
- (NSSet *)keysOfEntriesPassingTest:(BOOL (^)(id key , id obj , BOOL *stop))predicate;
- (NSSet *)keysOfEntriesWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id key , id obj , BOOL *stop))predicate;
- (instancetype)init;
- (instancetype)initWithObjects:(const id [])objects forKeys:(const id <NSCopying >[])keys count:(NSUInteger)cnt;
- (instancetype)initWithObjectsAndKeys:(id)firstObject , ...;
- (instancetype)initWithDictionary:(NSDictionary *)otherDictionary;
- (instancetype)initWithDictionary:(NSDictionary *)otherDictionary copyItems:(BOOL)flag;
- (instancetype)initWithObjects:(NSArray *)objects forKeys:(NSArray *)keys;
- (id)initWithContentsOfFile:(NSString *)path;
- (id)initWithContentsOfURL:(NSURL *)url;
- (void)removeObjectForKey:(id)aKey;
- (void)setObject:(id)anObject forKey:(id <NSCopying>)aKey;
- (void)addEntriesFromDictionary:(NSDictionary *)otherDictionary;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(NSArray *)keyArray;
- (void)setDictionary:(NSDictionary *)otherDictionary;
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;
- (instancetype)initWithCapacity:(NSUInteger)numItems;
- (unsigned long long)fileSize;
- (NSDate *)fileModificationDate;
- (NSString *)fileType;
- (NSUInteger)filePosixPermissions;
- (NSString *)fileOwnerAccountName;
- (NSString *)fileGroupOwnerAccountName;
- (NSInteger)fileSystemNumber;
- (NSUInteger)fileSystemFileNumber;
- (BOOL)fileExtensionHidden;
- (OSType)fileHFSCreatorCode;
- (OSType)fileHFSTypeCode;
- (BOOL)fileIsImmutable;
- (BOOL)fileIsAppendOnly;
- (NSDate *)fileCreationDate;
- (NSNumber *)fileOwnerAccountID;
- (NSNumber *)fileGroupOwnerAccountID;

#pragma clang diagnostic pop

@end
