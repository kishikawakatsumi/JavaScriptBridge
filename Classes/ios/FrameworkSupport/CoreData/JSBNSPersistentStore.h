#import <Foundation/Foundation.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPersistentStore <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSDictionary *)metadataForPersistentStoreWithURL:(NSURL *)url error:(NSError **)error;
+ (BOOL)setMetadata:(NSDictionary *)metadata forPersistentStoreWithURL:(NSURL *)url error:(NSError **)error;
+ (Class)migrationManagerClass;

- (id)initWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)root configurationName:(NSString *)name URL:(NSURL *)url options:(NSDictionary *)options;
- (BOOL)loadMetadata:(NSError **)error;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSString *)configurationName;
- (NSDictionary *)options;
- (NSURL *)URL;
- (void)setURL:(NSURL *)url;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)identifier;
- (NSString *)type;
- (BOOL)isReadOnly;
- (void)setReadOnly:(BOOL)flag;
- (NSDictionary *)metadata;
- (void)setMetadata:(NSDictionary *)storeMetadata;
- (void)didAddToPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)coordinator;
- (void)willRemoveFromPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)coordinator;

#pragma clang diagnostic pop

@end
