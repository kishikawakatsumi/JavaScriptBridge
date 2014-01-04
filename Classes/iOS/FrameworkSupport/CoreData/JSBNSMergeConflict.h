#import <Foundation/NSArray.h>
#import <Foundation/NSError.h>
#import <CoreData/CoreDataDefines.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMergeConflict <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSMergePolicyType mergeType;
@property (readonly) NSUInteger oldVersionNumber;
@property (readonly, retain) NSDictionary *cachedSnapshot;
@property (readonly) NSUInteger newVersionNumber;
@property (readonly, retain) NSDictionary *persistedSnapshot;
@property (readonly, retain) NSDictionary *objectSnapshot;
@property (readonly, retain) NSManagedObject *sourceObject;

- (id)initWithSource:(NSManagedObject *)srcObject newVersion:(NSUInteger)newvers oldVersion:(NSUInteger)oldvers cachedSnapshot:(NSDictionary *)cachesnap persistedSnapshot:(NSDictionary *)persnap;

#pragma clang diagnostic pop

@end
