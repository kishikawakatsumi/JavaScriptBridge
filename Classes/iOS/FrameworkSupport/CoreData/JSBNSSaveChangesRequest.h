#import <Foundation/NSSet.h>
#import <CoreData/NSPersistentStoreRequest.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPersistentStoreRequest;

@protocol JSBNSSaveChangesRequest <JSExport, JSBNSPersistentStoreRequest>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithInsertedObjects:(NSSet *)insertedObjects updatedObjects:(NSSet *)updatedObjects deletedObjects:(NSSet *)deletedObjects lockedObjects:(NSSet *)lockedObjects;
- (NSSet *)insertedObjects;
- (NSSet *)updatedObjects;
- (NSSet *)deletedObjects;
- (NSSet *)lockedObjects;

#pragma clang diagnostic pop

@end
