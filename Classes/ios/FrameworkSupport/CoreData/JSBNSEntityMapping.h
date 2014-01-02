#import <Foundation/Foundation.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSEntityMapping <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSString *)name;
- (void)setName:(NSString *)name;
- (NSEntityMappingType)mappingType;
- (void)setMappingType:(NSEntityMappingType)type;
- (NSString *)sourceEntityName;
- (void)setSourceEntityName:(NSString *)name;
- (NSData *)sourceEntityVersionHash;
- (void)setSourceEntityVersionHash:(NSData *)vhash;
- (NSString *)destinationEntityName;
- (void)setDestinationEntityName:(NSString *)name;
- (NSData *)destinationEntityVersionHash;
- (void)setDestinationEntityVersionHash:(NSData *)vhash;
- (NSArray *)attributeMappings;
- (void)setAttributeMappings:(NSArray *)mappings;
- (NSArray *)relationshipMappings;
- (void)setRelationshipMappings:(NSArray *)mappings;
- (NSExpression *)sourceExpression;
- (void)setSourceExpression:(NSExpression *)source;
- (NSDictionary *)userInfo;
- (void)setUserInfo:(NSDictionary *)dict;
- (NSString *)entityMigrationPolicyClassName;
- (void)setEntityMigrationPolicyClassName:(NSString *)name;

#pragma clang diagnostic pop

@end
