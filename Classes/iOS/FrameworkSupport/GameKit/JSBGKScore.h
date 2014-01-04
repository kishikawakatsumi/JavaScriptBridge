#import <Foundation/Foundation.h>
#import <GameKit/GKLeaderboard.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKScore <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSString *category;
@property (readonly, copy) NSString *formattedValue;
@property (copy) NSString *leaderboardIdentifier;
@property (nonatomic, assign) uint64_t context;
@property (readonly, assign) NSInteger rank;
@property (assign) int64_t value;
@property (readonly, retain) NSDate *date;
@property (nonatomic, assign) BOOL shouldSetDefaultLeaderboard;
@property (readonly, retain) NSString *playerID;

+ (void)reportScores:(NSArray *)scores withCompletionHandler:(void (^)(NSError *error))completionHandler;
+ (void)reportScores:(NSArray *)scores withEligibleChallenges:(NSArray *)challenges withCompletionHandler:(void (^)(NSError *error))completionHandler;

- (id)initWithLeaderboardIdentifier:(NSString *)identifier;
- (id)initWithLeaderboardIdentifier:(NSString *)identifier forPlayer:(NSString *)playerID;
- (void)reportScoreWithCompletionHandler:(void (^)(NSError *error))completionHandler;
- (id)initWithCategory:(NSString *)category;
- (UIViewController *)challengeComposeControllerWithPlayers:(NSArray *)playerIDs message:(NSString *)message completionHandler:(GKChallengeComposeCompletionBlock)completionHandler;
- (void)issueChallengeToPlayers:(NSArray *)playerIDs message:(NSString *)message;

#pragma clang diagnostic pop

@end
