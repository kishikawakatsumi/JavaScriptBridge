#import <Foundation/Foundation.h>
#import <GameKit/GKScore.h>
#import <GameKit/GKAchievement.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKChallenge <JSExport, JSBNSObject>

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

+ (void)loadReceivedChallengesWithCompletionHandler:(void (^)(NSArray *challenges , NSError *error))completionHandler;

- (void)decline;

#pragma clang diagnostic pop

@end
