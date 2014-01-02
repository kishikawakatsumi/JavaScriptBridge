#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSDate.h>
#import <Foundation/NSLock.h>
#import <CoreData/CoreDataDefines.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSManagedObjectContext <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithConcurrencyType:(NSManagedObjectContextConcurrencyType)ct;
- (void)performBlock:(void (^)())block;
- (void)performBlockAndWait:(void (^)())block;
- (void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)coordinator;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (void)setParentContext:(NSManagedObjectContext *)parent;
- (NSManagedObjectContext *)parentContext;
- (void)setUndoManager:(NSUndoManager *)undoManager;
- (NSUndoManager *)undoManager;
- (BOOL)hasChanges;
- (NSMutableDictionary *)userInfo;
- (NSManagedObjectContextConcurrencyType)concurrencyType;
- (NSManagedObject *)objectRegisteredForID:(NSManagedObjectID *)objectID;
- (NSManagedObject *)objectWithID:(NSManagedObjectID *)objectID;
- (NSManagedObject *)existingObjectWithID:(NSManagedObjectID *)objectID error:(NSError **)error;
- (NSArray *)executeFetchRequest:(NSFetchRequest *)request error:(NSError **)error;
- (NSUInteger)countForFetchRequest:(NSFetchRequest *)request error:(NSError **)error;
- (void)insertObject:(NSManagedObject *)object;
- (void)deleteObject:(NSManagedObject *)object;
- (void)refreshObject:(NSManagedObject *)object mergeChanges:(BOOL)flag;
- (void)detectConflictsForObject:(NSManagedObject *)object;
- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context;
- (void)processPendingChanges;
- (void)assignObject:(id)object toPersistentStore:(NSPersistentStore *)store;
- (NSSet *)insertedObjects;
- (NSSet *)updatedObjects;
- (NSSet *)deletedObjects;
- (NSSet *)registeredObjects;
- (void)undo;
- (void)redo;
- (void)reset;
- (void)rollback;
- (BOOL)save:(NSError **)error;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (BOOL)propagatesDeletesAtEndOfEvent;
- (void)setPropagatesDeletesAtEndOfEvent:(BOOL)flag;
- (BOOL)retainsRegisteredObjects;
- (void)setRetainsRegisteredObjects:(BOOL)flag;
- (NSTimeInterval)stalenessInterval;
- (void)setStalenessInterval:(NSTimeInterval)expiration;
- (void)setMergePolicy:(id)mergePolicy;
- (id)mergePolicy;
- (BOOL)obtainPermanentIDsForObjects:(NSArray *)objects error:(NSError **)error;
- (void)mergeChangesFromContextDidSaveNotification:(NSNotification *)notification;

#pragma clang diagnostic pop

@end
