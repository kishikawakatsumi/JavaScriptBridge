#import <Foundation/Foundation.h>
#import <CoreData/NSEntityDescription.h>
#import <CoreData/NSManagedObjectID.h>
#import <CoreData/NSManagedObject.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSAtomicStoreCacheNode <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithObjectID:(NSManagedObjectID *)moid;
- (NSManagedObjectID *)objectID;
- (NSMutableDictionary *)propertyCache;
- (void)setPropertyCache:(NSMutableDictionary *)propertyCache;
- (id)valueForKey:(NSString *)key;
- (void)setValue:(id)value forKey:(NSString *)key;

#pragma clang diagnostic pop

@end
