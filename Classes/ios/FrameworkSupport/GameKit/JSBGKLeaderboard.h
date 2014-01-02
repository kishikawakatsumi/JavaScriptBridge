#import <Foundation/Foundation.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKLeaderboard <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSString *category;
@property (readonly, retain) NSArray *scores;
@property (assign) GKLeaderboardTimeScope timeScope;
@property (readonly, copy) NSString *title;
@property (assign) NSRange range;
@property (copy) NSString *identifier;
@property (assign) GKLeaderboardPlayerScope playerScope;
@property (readonly, retain) GKScore *localPlayerScore;
@property (readonly, getter = isLoading) BOOL loading;
@property (nonatomic, readonly, retain) NSString *groupIdentifier;
@property (readonly, assign) NSUInteger maxRange;

+ (void)loadCategoriesWithCompletionHandler:(void (^)(NSArray *categories , NSArray *titles , NSError *error))completionHandler;
+ (void)loadLeaderboardsWithCompletionHandler:(void (^)(NSArray *leaderboards , NSError *error))completionHandler;
+ (void)setDefaultLeaderboard:(NSString *)leaderboardIdentifier withCompletionHandler:(void (^)(NSError *error))completionHandler;

- (id)init;
- (id)initWithPlayerIDs:(NSArray *)playerIDs;
- (void)loadScoresWithCompletionHandler:(void (^)(NSArray *scores , NSError *error))completionHandler;
- (void)loadImageWithCompletionHandler:(void (^)(UIImage *image , NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
