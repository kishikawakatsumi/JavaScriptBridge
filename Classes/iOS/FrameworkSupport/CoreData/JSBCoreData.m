#import "JSBCoreData.h"
#import "JSBNSAtomicStoreCacheNode.h"
#import "JSBNSEntityDescription.h"
#import "JSBNSEntityMapping.h"
#import "JSBNSEntityMigrationPolicy.h"
#import "JSBNSFetchedResultsController.h"
#import "JSBNSIncrementalStoreNode.h"
#import "JSBNSManagedObject.h"
#import "JSBNSManagedObjectContext.h"
#import "JSBNSManagedObjectID.h"
#import "JSBNSManagedObjectModel.h"
#import "JSBNSMappingModel.h"
#import "JSBNSMergeConflict.h"
#import "JSBNSMergePolicy.h"
#import "JSBNSMigrationManager.h"
#import "JSBNSPersistentStore.h"
#import "JSBNSPersistentStoreCoordinator.h"
#import "JSBNSPersistentStoreRequest.h"
#import "JSBNSPropertyDescription.h"
#import "JSBNSPropertyMapping.h"
#import "JSBNSAtomicStore.h"
#import "JSBNSAttributeDescription.h"
#import "JSBNSExpressionDescription.h"
#import "JSBNSFetchRequest.h"
#import "JSBNSFetchRequestExpression.h"
#import "JSBNSFetchedPropertyDescription.h"
#import "JSBNSIncrementalStore.h"
#import "JSBNSRelationshipDescription.h"
#import "JSBNSSaveChangesRequest.h"

@import ObjectiveC;

@implementation JSBCoreData

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([NSAtomicStoreCacheNode class], @protocol(JSBNSAtomicStoreCacheNode));
    context[@"NSAtomicStoreCacheNode"] = [NSAtomicStoreCacheNode class];

    class_addProtocol([NSEntityDescription class], @protocol(JSBNSEntityDescription));
    context[@"NSEntityDescription"] = [NSEntityDescription class];

    class_addProtocol([NSEntityMapping class], @protocol(JSBNSEntityMapping));
    context[@"NSEntityMapping"] = [NSEntityMapping class];

    class_addProtocol([NSEntityMigrationPolicy class], @protocol(JSBNSEntityMigrationPolicy));
    context[@"NSEntityMigrationPolicy"] = [NSEntityMigrationPolicy class];

    class_addProtocol([NSFetchedResultsController class], @protocol(JSBNSFetchedResultsController));
    context[@"NSFetchedResultsController"] = [NSFetchedResultsController class];

    class_addProtocol([NSIncrementalStoreNode class], @protocol(JSBNSIncrementalStoreNode));
    context[@"NSIncrementalStoreNode"] = [NSIncrementalStoreNode class];

    class_addProtocol([NSManagedObject class], @protocol(JSBNSManagedObject));
    context[@"NSManagedObject"] = [NSManagedObject class];

    class_addProtocol([NSManagedObjectContext class], @protocol(JSBNSManagedObjectContext));
    context[@"NSManagedObjectContext"] = [NSManagedObjectContext class];

    class_addProtocol([NSManagedObjectID class], @protocol(JSBNSManagedObjectID));
    context[@"NSManagedObjectID"] = [NSManagedObjectID class];

    class_addProtocol([NSManagedObjectModel class], @protocol(JSBNSManagedObjectModel));
    context[@"NSManagedObjectModel"] = [NSManagedObjectModel class];

    class_addProtocol([NSMappingModel class], @protocol(JSBNSMappingModel));
    context[@"NSMappingModel"] = [NSMappingModel class];

    class_addProtocol([NSMergeConflict class], @protocol(JSBNSMergeConflict));
    context[@"NSMergeConflict"] = [NSMergeConflict class];

    class_addProtocol([NSMergePolicy class], @protocol(JSBNSMergePolicy));
    context[@"NSMergePolicy"] = [NSMergePolicy class];

    class_addProtocol([NSMigrationManager class], @protocol(JSBNSMigrationManager));
    context[@"NSMigrationManager"] = [NSMigrationManager class];

    class_addProtocol([NSPersistentStore class], @protocol(JSBNSPersistentStore));
    context[@"NSPersistentStore"] = [NSPersistentStore class];

    class_addProtocol([NSPersistentStoreCoordinator class], @protocol(JSBNSPersistentStoreCoordinator));
    context[@"NSPersistentStoreCoordinator"] = [NSPersistentStoreCoordinator class];

    class_addProtocol([NSPersistentStoreRequest class], @protocol(JSBNSPersistentStoreRequest));
    context[@"NSPersistentStoreRequest"] = [NSPersistentStoreRequest class];

    class_addProtocol([NSPropertyDescription class], @protocol(JSBNSPropertyDescription));
    context[@"NSPropertyDescription"] = [NSPropertyDescription class];

    class_addProtocol([NSPropertyMapping class], @protocol(JSBNSPropertyMapping));
    context[@"NSPropertyMapping"] = [NSPropertyMapping class];

    class_addProtocol([NSAtomicStore class], @protocol(JSBNSAtomicStore));
    context[@"NSAtomicStore"] = [NSAtomicStore class];

    class_addProtocol([NSAttributeDescription class], @protocol(JSBNSAttributeDescription));
    context[@"NSAttributeDescription"] = [NSAttributeDescription class];

    class_addProtocol([NSExpressionDescription class], @protocol(JSBNSExpressionDescription));
    context[@"NSExpressionDescription"] = [NSExpressionDescription class];

    class_addProtocol([NSFetchRequest class], @protocol(JSBNSFetchRequest));
    context[@"NSFetchRequest"] = [NSFetchRequest class];

    class_addProtocol([NSFetchRequestExpression class], @protocol(JSBNSFetchRequestExpression));
    context[@"NSFetchRequestExpression"] = [NSFetchRequestExpression class];

    class_addProtocol([NSFetchedPropertyDescription class], @protocol(JSBNSFetchedPropertyDescription));
    context[@"NSFetchedPropertyDescription"] = [NSFetchedPropertyDescription class];

    class_addProtocol([NSIncrementalStore class], @protocol(JSBNSIncrementalStore));
    context[@"NSIncrementalStore"] = [NSIncrementalStore class];

    class_addProtocol([NSRelationshipDescription class], @protocol(JSBNSRelationshipDescription));
    context[@"NSRelationshipDescription"] = [NSRelationshipDescription class];

    class_addProtocol([NSSaveChangesRequest class], @protocol(JSBNSSaveChangesRequest));
    context[@"NSSaveChangesRequest"] = [NSSaveChangesRequest class];

#pragma clang diagnostic pop
}

@end
