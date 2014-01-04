#import <CoreData/NSManagedObjectID.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSIncrementalStoreNode <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithObjectID:(NSManagedObjectID *)objectID withValues:(NSDictionary *)values version:(uint64_t)version;
- (void)updateWithValues:(NSDictionary *)values version:(uint64_t)version;
- (NSManagedObjectID *)objectID;
- (uint64_t)version;
- (id)valueForPropertyDescription:(NSPropertyDescription *)prop;

#pragma clang diagnostic pop

@end
