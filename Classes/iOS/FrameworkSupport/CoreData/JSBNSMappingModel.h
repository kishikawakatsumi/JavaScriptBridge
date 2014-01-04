#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMappingModel <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSMappingModel *)mappingModelFromBundles:(NSArray *)bundles forSourceModel:(NSManagedObjectModel *)sourceModel destinationModel:(NSManagedObjectModel *)destinationModel;
+ (NSMappingModel *)inferredMappingModelForSourceModel:(NSManagedObjectModel *)sourceModel destinationModel:(NSManagedObjectModel *)destinationModel error:(NSError **)error;

- (id)initWithContentsOfURL:(NSURL *)url;
- (NSArray *)entityMappings;
- (void)setEntityMappings:(NSArray *)mappings;
- (NSDictionary *)entityMappingsByName;

#pragma clang diagnostic pop

@end
