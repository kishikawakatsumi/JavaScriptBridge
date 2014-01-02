#import "JSBGameKit.h"
#import "JSBGKAchievement.h"
#import "JSBGKAchievementDescription.h"
#import "JSBGKScore.h"
#import "JSBGKChallenge.h"
#import "JSBGKChallengeEventHandler.h"
#import "JSBGKLeaderboard.h"
#import "JSBGKLeaderboardSet.h"
#import "JSBGKMatch.h"
#import "JSBGKInvite.h"
#import "JSBGKMatchRequest.h"
#import "JSBGKMatchmaker.h"
#import "JSBGKNotificationBanner.h"
#import "JSBGKPeerPickerController.h"
#import "JSBGKPlayer.h"
#import "JSBGKSession.h"
#import "JSBGKTurnBasedExchangeReply.h"
#import "JSBGKTurnBasedExchange.h"
#import "JSBGKTurnBasedEventHandler.h"
#import "JSBGKTurnBasedParticipant.h"
#import "JSBGKTurnBasedMatch.h"
#import "JSBGKTurnBasedMatchmakerViewController.h"
#import "JSBGKVoiceChat.h"
#import "JSBGKVoiceChatService.h"
#import "JSBGKScoreChallenge.h"
#import "JSBGKAchievementChallenge.h"
#import "JSBGKFriendRequestComposeViewController.h"
#import "JSBGKGameCenterViewController.h"
#import "JSBGKLocalPlayer.h"
#import "JSBGKMatchmakerViewController.h"
#import "JSBGKAchievementViewController.h"
#import "JSBGKLeaderboardViewController.h"

@import ObjectiveC;

@implementation JSBGameKit

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([GKAchievement class], @protocol(JSBGKAchievement));
    context[@"GKAchievement"] = [GKAchievement class];

    class_addProtocol([GKAchievementDescription class], @protocol(JSBGKAchievementDescription));
    context[@"GKAchievementDescription"] = [GKAchievementDescription class];

    class_addProtocol([GKScore class], @protocol(JSBGKScore));
    context[@"GKScore"] = [GKScore class];

    class_addProtocol([GKChallenge class], @protocol(JSBGKChallenge));
    context[@"GKChallenge"] = [GKChallenge class];

    class_addProtocol([GKChallengeEventHandler class], @protocol(JSBGKChallengeEventHandler));
    context[@"GKChallengeEventHandler"] = [GKChallengeEventHandler class];

    class_addProtocol([GKLeaderboard class], @protocol(JSBGKLeaderboard));
    context[@"GKLeaderboard"] = [GKLeaderboard class];

    class_addProtocol([GKLeaderboardSet class], @protocol(JSBGKLeaderboardSet));
    context[@"GKLeaderboardSet"] = [GKLeaderboardSet class];

    class_addProtocol([GKMatch class], @protocol(JSBGKMatch));
    context[@"GKMatch"] = [GKMatch class];

    class_addProtocol([GKInvite class], @protocol(JSBGKInvite));
    context[@"GKInvite"] = [GKInvite class];

    class_addProtocol([GKMatchRequest class], @protocol(JSBGKMatchRequest));
    context[@"GKMatchRequest"] = [GKMatchRequest class];

    class_addProtocol([GKMatchmaker class], @protocol(JSBGKMatchmaker));
    context[@"GKMatchmaker"] = [GKMatchmaker class];

    class_addProtocol([GKNotificationBanner class], @protocol(JSBGKNotificationBanner));
    context[@"GKNotificationBanner"] = [GKNotificationBanner class];

    class_addProtocol([GKPeerPickerController class], @protocol(JSBGKPeerPickerController));
    context[@"GKPeerPickerController"] = [GKPeerPickerController class];

    class_addProtocol([GKPlayer class], @protocol(JSBGKPlayer));
    context[@"GKPlayer"] = [GKPlayer class];

    class_addProtocol([GKSession class], @protocol(JSBGKSession));
    context[@"GKSession"] = [GKSession class];

    class_addProtocol([GKTurnBasedExchangeReply class], @protocol(JSBGKTurnBasedExchangeReply));
    context[@"GKTurnBasedExchangeReply"] = [GKTurnBasedExchangeReply class];

    class_addProtocol([GKTurnBasedExchange class], @protocol(JSBGKTurnBasedExchange));
    context[@"GKTurnBasedExchange"] = [GKTurnBasedExchange class];

    class_addProtocol([GKTurnBasedEventHandler class], @protocol(JSBGKTurnBasedEventHandler));
    context[@"GKTurnBasedEventHandler"] = [GKTurnBasedEventHandler class];

    class_addProtocol([GKTurnBasedParticipant class], @protocol(JSBGKTurnBasedParticipant));
    context[@"GKTurnBasedParticipant"] = [GKTurnBasedParticipant class];

    class_addProtocol([GKTurnBasedMatch class], @protocol(JSBGKTurnBasedMatch));
    context[@"GKTurnBasedMatch"] = [GKTurnBasedMatch class];

    class_addProtocol([GKTurnBasedMatchmakerViewController class], @protocol(JSBGKTurnBasedMatchmakerViewController));
    context[@"GKTurnBasedMatchmakerViewController"] = [GKTurnBasedMatchmakerViewController class];

    class_addProtocol([GKVoiceChat class], @protocol(JSBGKVoiceChat));
    context[@"GKVoiceChat"] = [GKVoiceChat class];

    class_addProtocol([GKVoiceChatService class], @protocol(JSBGKVoiceChatService));
    context[@"GKVoiceChatService"] = [GKVoiceChatService class];

    class_addProtocol([GKScoreChallenge class], @protocol(JSBGKScoreChallenge));
    context[@"GKScoreChallenge"] = [GKScoreChallenge class];

    class_addProtocol([GKAchievementChallenge class], @protocol(JSBGKAchievementChallenge));
    context[@"GKAchievementChallenge"] = [GKAchievementChallenge class];

    class_addProtocol([GKFriendRequestComposeViewController class], @protocol(JSBGKFriendRequestComposeViewController));
    context[@"GKFriendRequestComposeViewController"] = [GKFriendRequestComposeViewController class];

    class_addProtocol([GKGameCenterViewController class], @protocol(JSBGKGameCenterViewController));
    context[@"GKGameCenterViewController"] = [GKGameCenterViewController class];

    class_addProtocol([GKLocalPlayer class], @protocol(JSBGKLocalPlayer));
    context[@"GKLocalPlayer"] = [GKLocalPlayer class];

    class_addProtocol([GKMatchmakerViewController class], @protocol(JSBGKMatchmakerViewController));
    context[@"GKMatchmakerViewController"] = [GKMatchmakerViewController class];

    class_addProtocol([GKAchievementViewController class], @protocol(JSBGKAchievementViewController));
    context[@"GKAchievementViewController"] = [GKAchievementViewController class];

    class_addProtocol([GKLeaderboardViewController class], @protocol(JSBGKLeaderboardViewController));
    context[@"GKLeaderboardViewController"] = [GKLeaderboardViewController class];

#pragma clang diagnostic pop
}

@end
