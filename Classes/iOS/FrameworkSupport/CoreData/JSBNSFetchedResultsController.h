#import <Foundation/Foundation.h>

@import CoreData;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSFetchedResultsController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, readonly) NSString *cacheName;
@property (nonatomic, readonly) NSArray *fetchedObjects;
@property (nonatomic, readonly) NSString *sectionNameKeyPath;
@property (nonatomic, readonly) NSArray *objects;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSString *indexTitle;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, assign) id delegate;
@property (nonatomic, readonly) NSUInteger numberOfObjects;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;

+ (void)deleteCacheWithName:(NSString *)name;

- (id)initWithFetchRequest:(NSFetchRequest *)fetchRequest managedObjectContext:(NSManagedObjectContext *)context sectionNameKeyPath:(NSString *)sectionNameKeyPath cacheName:(NSString *)name;
- (BOOL)performFetch:(NSError **)error;
- (id)objectAtIndexPath:(NSIndexPath *)indexPath;
- (NSIndexPath *)indexPathForObject:(id)object;
- (NSString *)sectionIndexTitleForSectionName:(NSString *)sectionName;
- (NSInteger)sectionForSectionIndexTitle:(NSString *)title atIndex:(NSInteger)sectionIndex;

#pragma clang diagnostic pop

@end
