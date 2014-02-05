#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItem.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBMPMediaPredicate;

@protocol JSBMPMediaPropertyPredicate <JSExport, JSBMPMediaPredicate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (MPMediaPropertyPredicate *)predicateWithValue:(id)value forProperty:(NSString *)property;
+ (MPMediaPropertyPredicate *)predicateWithValue:(id)value forProperty:(NSString *)property comparisonType:(MPMediaPredicateComparison)comparisonType;

#pragma clang diagnostic pop

@end
