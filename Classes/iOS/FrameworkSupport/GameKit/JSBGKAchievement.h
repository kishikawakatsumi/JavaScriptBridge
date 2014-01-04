#import <Foundation/Foundation.h>
#import <GameKit/GKScore.h>
#import <GameKit/GKAchievement.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKAchievement <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, retain) NSDate *issueDate;
@property (nonatomic, readonly, retain) GKScore *score;
@property (nonatomic, readonly, copy) NSString *issuingPlayerID;
@property (nonatomic, readonly, retain) NSDate *completionDate;
@property (nonatomic, readonly, copy) NSString *receivingPlayerID;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, retain) GKAchievement *achievement;
@property (nonatomic, readonly, assign) GKChallengeState state;

+ (void)reportAchievements:(NSArray *)achievements withEligibleChallenges:(NSArray *)challenges withCompletionHandler:(void (^)(NSError *error))completionHandler;
+ (void)loadAchievementsWithCompletionHandler:(void (^)(NSArray *achievements , NSError *error))completionHandler;
+ (void)resetAchievementsWithCompletionHandler:(void (^)(NSError *error))completionHandler;
+ (void)reportAchievements:(NSArray *)achievements withCompletionHandler:(void (^)(NSError *error))completionHandler;

- (UIViewController *)challengeComposeControllerWithPlayers:(NSArray *)playerIDs message:(NSString *)message completionHandler:(GKChallengeComposeCompletionBlock)completionHandler;
- (void)issueChallengeToPlayers:(NSArray *)playerIDs message:(NSString *)message;
- (void)selectChallengeablePlayerIDs:(NSArray *)playerIDs withCompletionHandler:(void (^)(NSArray *challengeablePlayerIDs , NSError *error))completionHandler;
- (id)initWithIdentifier:(NSString *)identifier;
- (id)initWithIdentifier:(NSString *)identifier forPlayer:(NSString *)playerID;
- (void)reportAchievementWithCompletionHandler:(void (^)(NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
