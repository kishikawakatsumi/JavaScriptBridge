#import <Foundation/NSObject.h>
#import <CoreData/NSPropertyDescription.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSPropertyDescription;

@protocol JSBNSRelationshipDescription <JSExport, JSBNSPropertyDescription>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (NSEntityDescription *)destinationEntity;
- (void)setDestinationEntity:(NSEntityDescription *)entity;
- (NSRelationshipDescription *)inverseRelationship;
- (void)setInverseRelationship:(NSRelationshipDescription *)relationship;
- (NSUInteger)maxCount;
- (void)setMaxCount:(NSUInteger)maxCount;
- (NSUInteger)minCount;
- (void)setMinCount:(NSUInteger)minCount;
- (NSDeleteRule)deleteRule;
- (void)setDeleteRule:(NSDeleteRule)rule;
- (BOOL)isToMany;
- (NSData *)versionHash;
- (void)setOrdered:(BOOL)flag;
- (BOOL)isOrdered;

#pragma clang diagnostic pop

@end
