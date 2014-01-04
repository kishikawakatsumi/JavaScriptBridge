#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItem.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMPMediaQuery <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, strong) NSSet *filterPredicates;
@property (nonatomic, readonly) NSArray *collectionSections;
@property (nonatomic) MPMediaGrouping groupingType;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) MPMediaPredicateComparison comparisonType;
@property (nonatomic, readonly, copy, readonly) NSString *property;
@property (nonatomic, readonly) NSArray *itemSections;
@property (nonatomic, readonly, copy) id value;
@property (nonatomic, readonly) NSArray *items;

+ (MPMediaQuery *)albumsQuery;
+ (MPMediaQuery *)artistsQuery;
+ (MPMediaQuery *)songsQuery;
+ (MPMediaQuery *)playlistsQuery;
+ (MPMediaQuery *)podcastsQuery;
+ (MPMediaQuery *)audiobooksQuery;
+ (MPMediaQuery *)compilationsQuery;
+ (MPMediaQuery *)composersQuery;
+ (MPMediaQuery *)genresQuery;

- (id)init;
- (id)initWithFilterPredicates:(NSSet *)filterPredicates;
- (void)addFilterPredicate:(MPMediaPredicate *)predicate;
- (void)removeFilterPredicate:(MPMediaPredicate *)predicate;

#pragma clang diagnostic pop

@end
