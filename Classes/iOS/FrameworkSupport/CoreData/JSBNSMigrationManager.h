#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMigrationManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithSourceModel:(NSManagedObjectModel *)sourceModel destinationModel:(NSManagedObjectModel *)destinationModel;
- (BOOL)migrateStoreFromURL:(NSURL *)sourceURL type:(NSString *)sStoreType options:(NSDictionary *)sOptions withMappingModel:(NSMappingModel *)mappings toDestinationURL:(NSURL *)dURL destinationType:(NSString *)dStoreType destinationOptions:(NSDictionary *)dOptions error:(NSError **)error;
- (void)setUsesStoreSpecificMigrationManager:(BOOL)flag;
- (BOOL)usesStoreSpecificMigrationManager;
- (void)reset;
- (NSMappingModel *)mappingModel;
- (NSManagedObjectModel *)sourceModel;
- (NSManagedObjectModel *)destinationModel;
- (NSManagedObjectContext *)sourceContext;
- (NSManagedObjectContext *)destinationContext;
- (NSEntityDescription *)sourceEntityForEntityMapping:(NSEntityMapping *)mEntity;
- (NSEntityDescription *)destinationEntityForEntityMapping:(NSEntityMapping *)mEntity;
- (void)associateSourceInstance:(NSManagedObject *)sourceInstance withDestinationInstance:(NSManagedObject *)destinationInstance forEntityMapping:(NSEntityMapping *)entityMapping;
- (NSArray *)destinationInstancesForEntityMappingNamed:(NSString *)mappingName sourceInstances:(NSArray *)sourceInstances;
- (NSArray *)sourceInstancesForEntityMappingNamed:(NSString *)mappingName destinationInstances:(NSArray *)destinationInstances;
- (NSEntityMapping *)currentEntityMapping;
- (float)migrationProgress;
- (NSDictionary *)userInfo;
- (void)setUserInfo:(NSDictionary *)dict;
- (void)cancelMigrationWithError:(NSError *)error;

#pragma clang diagnostic pop

@end
