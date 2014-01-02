#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItem.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBMPMediaPredicate;

@protocol JSBMPMediaPropertyPredicate <JSExport, JSBMPMediaPredicate>

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

+ (MPMediaPropertyPredicate *)predicateWithValue:(id)value forProperty:(NSString *)property;
+ (MPMediaPropertyPredicate *)predicateWithValue:(id)value forProperty:(NSString *)property comparisonType:(MPMediaPredicateComparison)comparisonType;

#pragma clang diagnostic pop

@end
