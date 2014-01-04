#import <CoreData/NSPersistentStore.h>
#import <CoreData/NSPersistentStoreRequest.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPersistentStore;

@protocol JSBNSIncrementalStore <JSExport, JSBNSPersistentStore>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)identifierForNewStoreAtURL:(NSURL *)storeURL;

- (BOOL)loadMetadata:(NSError **)error;
- (id)executeRequest:(NSPersistentStoreRequest *)request withContext:(NSManagedObjectContext *)context error:(NSError **)error;
- (NSIncrementalStoreNode *)newValuesForObjectWithID:(NSManagedObjectID *)objectID withContext:(NSManagedObjectContext *)context error:(NSError **)error;
- (id)newValueForRelationship:(NSRelationshipDescription *)relationship forObjectWithID:(NSManagedObjectID *)objectID withContext:(NSManagedObjectContext *)context error:(NSError **)error;
- (NSArray *)obtainPermanentIDsForObjects:(NSArray *)array error:(NSError **)error;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(NSArray *)objectIDs;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(NSArray *)objectIDs;
- (NSManagedObjectID *)newObjectIDForEntity:(NSEntityDescription *)entity referenceObject:(id)data;
- (id)referenceObjectForObjectID:(NSManagedObjectID *)objectID;

#pragma clang diagnostic pop

@end
