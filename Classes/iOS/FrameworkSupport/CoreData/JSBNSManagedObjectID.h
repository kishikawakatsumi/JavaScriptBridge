#import <Foundation/NSObject.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSManagedObjectID <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSEntityDescription *)entity;
- (NSPersistentStore *)persistentStore;
- (BOOL)isTemporaryID;
- (NSURL *)URIRepresentation;

#pragma clang diagnostic pop

@end
