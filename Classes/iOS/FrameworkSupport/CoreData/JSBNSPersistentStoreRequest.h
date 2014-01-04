#import <Foundation/NSArray.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPersistentStoreRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSArray *)affectedStores;
- (void)setAffectedStores:(NSArray *)stores;
- (NSPersistentStoreRequestType)requestType;

#pragma clang diagnostic pop

@end
