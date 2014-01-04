#import <Foundation/NSArray.h>
#import <CoreData/NSPersistentStoreRequest.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPersistentStoreRequest;

@protocol JSBNSFetchRequest <JSExport, JSBNSPersistentStoreRequest>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSFetchRequest *)fetchRequestWithEntityName:(NSString *)entityName;

- (id)init;
- (id)initWithEntityName:(NSString *)entityName;
- (NSEntityDescription *)entity;
- (void)setEntity:(NSEntityDescription *)entity;
- (NSString *)entityName;
- (NSPredicate *)predicate;
- (void)setPredicate:(NSPredicate *)predicate;
- (NSArray *)sortDescriptors;
- (void)setSortDescriptors:(NSArray *)sortDescriptors;
- (NSUInteger)fetchLimit;
- (void)setFetchLimit:(NSUInteger)limit;
- (NSArray *)affectedStores;
- (void)setAffectedStores:(NSArray *)stores;
- (NSFetchRequestResultType)resultType;
- (void)setResultType:(NSFetchRequestResultType)type;
- (BOOL)includesSubentities;
- (void)setIncludesSubentities:(BOOL)yesNo;
- (BOOL)includesPropertyValues;
- (void)setIncludesPropertyValues:(BOOL)yesNo;
- (BOOL)returnsObjectsAsFaults;
- (void)setReturnsObjectsAsFaults:(BOOL)yesNo;
- (NSArray *)relationshipKeyPathsForPrefetching;
- (void)setRelationshipKeyPathsForPrefetching:(NSArray *)keys;
- (BOOL)includesPendingChanges;
- (void)setIncludesPendingChanges:(BOOL)flag;
- (BOOL)returnsDistinctResults;
- (void)setReturnsDistinctResults:(BOOL)flag;
- (NSArray *)propertiesToFetch;
- (void)setPropertiesToFetch:(NSArray *)values;
- (NSUInteger)fetchOffset;
- (void)setFetchOffset:(NSUInteger)offset;
- (NSUInteger)fetchBatchSize;
- (void)setFetchBatchSize:(NSUInteger)bsize;
- (BOOL)shouldRefreshRefetchedObjects;
- (void)setShouldRefreshRefetchedObjects:(BOOL)flag;
- (NSArray *)propertiesToGroupBy;
- (void)setPropertiesToGroupBy:(NSArray *)array;
- (NSPredicate *)havingPredicate;
- (void)setHavingPredicate:(NSPredicate *)predicate;

#pragma clang diagnostic pop

@end
