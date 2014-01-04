#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSManagedObjectModel <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSManagedObjectModel *)mergedModelFromBundles:(NSArray *)bundles;
+ (NSManagedObjectModel *)modelByMergingModels:(NSArray *)models;
+ (NSManagedObjectModel *)mergedModelFromBundles:(NSArray *)bundles forStoreMetadata:(NSDictionary *)metadata;
+ (NSManagedObjectModel *)modelByMergingModels:(NSArray *)models forStoreMetadata:(NSDictionary *)metadata;

- (id)init;
- (id)initWithContentsOfURL:(NSURL *)url;
- (NSDictionary *)entitiesByName;
- (NSArray *)entities;
- (void)setEntities:(NSArray *)entities;
- (NSArray *)configurations;
- (NSArray *)entitiesForConfiguration:(NSString *)configuration;
- (void)setEntities:(NSArray *)entities forConfiguration:(NSString *)configuration;
- (void)setFetchRequestTemplate:(NSFetchRequest *)fetchRequestTemplate forName:(NSString *)name;
- (NSFetchRequest *)fetchRequestTemplateForName:(NSString *)name;
- (NSFetchRequest *)fetchRequestFromTemplateWithName:(NSString *)name substitutionVariables:(NSDictionary *)variables;
- (NSDictionary *)localizationDictionary;
- (void)setLocalizationDictionary:(NSDictionary *)localizationDictionary;
- (NSDictionary *)fetchRequestTemplatesByName;
- (NSSet *)versionIdentifiers;
- (void)setVersionIdentifiers:(NSSet *)identifiers;
- (BOOL)isConfiguration:(NSString *)configuration compatibleWithStoreMetadata:(NSDictionary *)metadata;
- (NSDictionary *)entityVersionHashesByName;

#pragma clang diagnostic pop

@end
