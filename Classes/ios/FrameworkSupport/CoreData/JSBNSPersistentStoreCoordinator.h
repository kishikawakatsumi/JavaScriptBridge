#import <Foundation/NSArray.h>
#import <Foundation/NSLock.h>
#import <CoreData/CoreDataDefines.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPersistentStoreCoordinator <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSDictionary *)registeredStoreTypes;
+ (void)registerStoreClass:(Class)storeClass forStoreType:(NSString *)storeType;
+ (NSDictionary *)metadataForPersistentStoreOfType:(NSString *)storeType URL:(NSURL *)url error:(NSError **)error;
+ (BOOL)setMetadata:(NSDictionary *)metadata forPersistentStoreOfType:(NSString *)storeType URL:(NSURL *)url error:(NSError **)error;
+ (BOOL)removeUbiquitousContentAndPersistentStoreAtURL:(NSURL *)storeURL options:(NSDictionary *)options error:(NSError **)error;

- (void)setMetadata:(NSDictionary *)metadata forPersistentStore:(NSPersistentStore *)store;
- (NSDictionary *)metadataForPersistentStore:(NSPersistentStore *)store;
- (id)initWithManagedObjectModel:(NSManagedObjectModel *)model;
- (NSManagedObjectModel *)managedObjectModel;
- (NSArray *)persistentStores;
- (NSPersistentStore *)persistentStoreForURL:(NSURL *)URL;
- (NSURL *)URLForPersistentStore:(NSPersistentStore *)store;
- (BOOL)setURL:(NSURL *)url forPersistentStore:(NSPersistentStore *)store;
- (NSPersistentStore *)addPersistentStoreWithType:(NSString *)storeType configuration:(NSString *)configuration URL:(NSURL *)storeURL options:(NSDictionary *)options error:(NSError **)error;
- (BOOL)removePersistentStore:(NSPersistentStore *)store error:(NSError **)error;
- (NSPersistentStore *)migratePersistentStore:(NSPersistentStore *)store toURL:(NSURL *)URL options:(NSDictionary *)options withType:(NSString *)storeType error:(NSError **)error;
- (NSManagedObjectID *)managedObjectIDForURIRepresentation:(NSURL *)url;
- (id)executeRequest:(NSPersistentStoreRequest *)request withContext:(NSManagedObjectContext *)context error:(NSError **)error;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;

#pragma clang diagnostic pop

@end
