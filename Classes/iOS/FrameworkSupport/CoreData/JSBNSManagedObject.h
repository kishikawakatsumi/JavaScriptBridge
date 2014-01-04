#import <Foundation/NSArray.h>
#import <Foundation/NSKeyValueObserving.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSManagedObject <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;

- (id)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context;
- (NSManagedObjectContext *)managedObjectContext;
- (NSEntityDescription *)entity;
- (NSManagedObjectID *)objectID;
- (BOOL)isInserted;
- (BOOL)isUpdated;
- (BOOL)isDeleted;
- (BOOL)hasChanges;
- (BOOL)isFault;
- (BOOL)hasFaultForRelationshipNamed:(NSString *)key;
- (NSUInteger)faultingState;
- (void)willAccessValueForKey:(NSString *)key;
- (void)didAccessValueForKey:(NSString *)key;
- (void)willChangeValueForKey:(NSString *)key;
- (void)didChangeValueForKey:(NSString *)key;
- (void)willChangeValueForKey:(NSString *)inKey withSetMutation:(NSKeyValueSetMutationKind)inMutationKind usingObjects:(NSSet *)inObjects;
- (void)didChangeValueForKey:(NSString *)inKey withSetMutation:(NSKeyValueSetMutationKind)inMutationKind usingObjects:(NSSet *)inObjects;
- (void)setObservationInfo:(id)inObservationInfo;
- (id)observationInfo;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(NSSnapshotEventType)flags;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (void)willTurnIntoFault;
- (void)didTurnIntoFault;
- (id)valueForKey:(NSString *)key;
- (void)setValue:(id)value forKey:(NSString *)key;
- (id)primitiveValueForKey:(NSString *)key;
- (void)setPrimitiveValue:(id)value forKey:(NSString *)key;
- (NSDictionary *)committedValuesForKeys:(NSArray *)keys;
- (NSDictionary *)changedValues;
- (NSDictionary *)changedValuesForCurrentEvent;
- (BOOL)validateValue:(id *)value forKey:(NSString *)key error:(NSError **)error;
- (BOOL)validateForDelete:(NSError **)error;
- (BOOL)validateForInsert:(NSError **)error;
- (BOOL)validateForUpdate:(NSError **)error;

#pragma clang diagnostic pop

@end
