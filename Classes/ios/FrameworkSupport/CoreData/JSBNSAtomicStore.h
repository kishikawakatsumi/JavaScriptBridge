#import <Foundation/Foundation.h>
#import <CoreData/NSPersistentStore.h>
#import <CoreData/NSAtomicStoreCacheNode.h>
#import <CoreData/NSManagedObject.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPersistentStore;

@protocol JSBNSAtomicStore <JSExport, JSBNSPersistentStore>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)coordinator configurationName:(NSString *)configurationName URL:(NSURL *)url options:(NSDictionary *)options;
- (BOOL)load:(NSError **)error;
- (BOOL)save:(NSError **)error;
- (NSAtomicStoreCacheNode *)newCacheNodeForManagedObject:(NSManagedObject *)managedObject;
- (void)updateCacheNode:(NSAtomicStoreCacheNode *)node fromManagedObject:(NSManagedObject *)managedObject;
- (NSSet *)cacheNodes;
- (void)addCacheNodes:(NSSet *)cacheNodes;
- (void)willRemoveCacheNodes:(NSSet *)cacheNodes;
- (NSAtomicStoreCacheNode *)cacheNodeForObjectID:(NSManagedObjectID *)objectID;
- (NSManagedObjectID *)objectIDForEntity:(NSEntityDescription *)entity referenceObject:(id)data;
- (id)newReferenceObjectForManagedObject:(NSManagedObject *)managedObject;
- (id)referenceObjectForObjectID:(NSManagedObjectID *)objectID;

#pragma clang diagnostic pop

@end
