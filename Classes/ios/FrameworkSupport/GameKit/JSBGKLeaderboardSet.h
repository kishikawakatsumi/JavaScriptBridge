#import <Foundation/Foundation.h>
#import <GameKit/GKDefines.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKLeaderboardSet <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, copy) NSString *title;
@property (nonatomic, readonly, retain) NSString *groupIdentifier;
@property (copy) NSString *identifier;

+ (void)loadLeaderboardSetsWithCompletionHandler:(void (^)(NSArray *leaderboardSets , NSError *error))completionHandler;

- (void)loadLeaderboardsWithCompletionHandler:(void (^)(NSArray *leaderboards , NSError *error))completionHandler;
- (void)loadImageWithCompletionHandler:(void (^)(UIImage *image , NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
