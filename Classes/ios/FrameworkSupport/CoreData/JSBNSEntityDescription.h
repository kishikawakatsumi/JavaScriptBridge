#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSRange.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSEntityDescription <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSEntityDescription *)entityForName:(NSString *)entityName inManagedObjectContext:(NSManagedObjectContext *)context;
+ (id)insertNewObjectForEntityForName:(NSString *)entityName inManagedObjectContext:(NSManagedObjectContext *)context;

- (NSManagedObjectModel *)managedObjectModel;
- (NSString *)managedObjectClassName;
- (void)setManagedObjectClassName:(NSString *)name;
- (NSString *)name;
- (void)setName:(NSString *)name;
- (BOOL)isAbstract;
- (void)setAbstract:(BOOL)flag;
- (NSDictionary *)subentitiesByName;
- (NSArray *)subentities;
- (void)setSubentities:(NSArray *)array;
- (NSEntityDescription *)superentity;
- (NSDictionary *)propertiesByName;
- (NSArray *)properties;
- (void)setProperties:(NSArray *)properties;
- (NSDictionary *)userInfo;
- (void)setUserInfo:(NSDictionary *)dictionary;
- (NSDictionary *)attributesByName;
- (NSDictionary *)relationshipsByName;
- (NSArray *)relationshipsWithDestinationEntity:(NSEntityDescription *)entity;
- (BOOL)isKindOfEntity:(NSEntityDescription *)entity;
- (NSData *)versionHash;
- (NSString *)versionHashModifier;
- (void)setVersionHashModifier:(NSString *)modifierString;
- (NSString *)renamingIdentifier;
- (void)setRenamingIdentifier:(NSString *)value;
- (NSArray *)compoundIndexes;
- (void)setCompoundIndexes:(NSArray *)value;

#pragma clang diagnostic pop

@end
