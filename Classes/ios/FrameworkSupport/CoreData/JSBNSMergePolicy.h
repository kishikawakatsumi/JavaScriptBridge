#import <Foundation/NSArray.h>
#import <Foundation/NSError.h>
#import <CoreData/CoreDataDefines.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMergePolicy <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSMergePolicyType mergeType;
@property (readonly) NSUInteger oldVersionNumber;
@property (readonly, retain) NSDictionary *cachedSnapshot;
@property (readonly) NSUInteger newVersionNumber;
@property (readonly, retain) NSDictionary *persistedSnapshot;
@property (readonly, retain) NSDictionary *objectSnapshot;
@property (readonly, retain) NSManagedObject *sourceObject;

- (id)initWithMergeType:(NSMergePolicyType)ty;
- (BOOL)resolveConflicts:(NSArray *)list error:(NSError **)error;

#pragma clang diagnostic pop

@end
