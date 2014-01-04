#import <Foundation/NSMetadataAttributes.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSMetadataQuery <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)init;
- (id <NSMetadataQueryDelegate>)delegate;
- (void)setDelegate:(id <NSMetadataQueryDelegate>)delegate;
- (NSPredicate *)predicate;
- (void)setPredicate:(NSPredicate *)predicate;
- (NSArray *)sortDescriptors;
- (void)setSortDescriptors:(NSArray *)descriptors;
- (NSArray *)valueListAttributes;
- (void)setValueListAttributes:(NSArray *)attrs;
- (NSArray *)groupingAttributes;
- (void)setGroupingAttributes:(NSArray *)attrs;
- (NSTimeInterval)notificationBatchingInterval;
- (void)setNotificationBatchingInterval:(NSTimeInterval)ti;
- (NSArray *)searchScopes;
- (void)setSearchScopes:(NSArray *)scopes;
- (NSArray *)searchItems;
- (void)setSearchItems:(NSArray *)items;
- (NSOperationQueue *)operationQueue;
- (void)setOperationQueue:(NSOperationQueue *)operationQueue;
- (BOOL)startQuery;
- (void)stopQuery;
- (BOOL)isStarted;
- (BOOL)isGathering;
- (BOOL)isStopped;
- (void)disableUpdates;
- (void)enableUpdates;
- (NSUInteger)resultCount;
- (id)resultAtIndex:(NSUInteger)idx;
- (void)enumerateResultsUsingBlock:(void (^)(id result , NSUInteger idx , BOOL *stop))block;
- (void)enumerateResultsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(id result , NSUInteger idx , BOOL *stop))block;
- (NSArray *)results;
- (NSUInteger)indexOfResult:(id)result;
- (NSDictionary *)valueLists;
- (NSArray *)groupedResults;
- (id)valueOfAttribute:(NSString *)attrName forResultAtIndex:(NSUInteger)idx;

#pragma clang diagnostic pop

@end
