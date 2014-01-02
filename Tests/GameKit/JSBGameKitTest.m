#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBGameKitTests : XCTestCase

@end

@implementation JSBGameKitTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testInstantiation
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"GameKit"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var gkachievement = GKAchievement.new();"];
    value = context[@"gkachievement"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkachievementdescription = GKAchievementDescription.new();"];
    value = context[@"gkachievementdescription"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkscore = GKScore.new();"];
    value = context[@"gkscore"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkachievement = GKAchievement.new();"];
    value = context[@"gkachievement"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkchallenge = GKChallenge.new();"];
    value = context[@"gkchallenge"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkchallengeeventhandler = GKChallengeEventHandler.new();"];
    value = context[@"gkchallengeeventhandler"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkleaderboard = GKLeaderboard.new();"];
    value = context[@"gkleaderboard"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkleaderboardset = GKLeaderboardSet.new();"];
    value = context[@"gkleaderboardset"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkmatch = GKMatch.alloc();"];
    value = context[@"gkmatch"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkinvite = GKInvite.new();"];
    value = context[@"gkinvite"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkmatchrequest = GKMatchRequest.new();"];
    value = context[@"gkmatchrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkmatchmaker = GKMatchmaker.sharedMatchmaker();"];
    value = context[@"gkmatchmaker"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gknotificationbanner = GKNotificationBanner.new();"];
    value = context[@"gknotificationbanner"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkpeerpickercontroller = GKPeerPickerController.new();"];
    value = context[@"gkpeerpickercontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkplayer = GKPlayer.new();"];
    value = context[@"gkplayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkscore = GKScore.new();"];
    value = context[@"gkscore"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gksession = GKSession.new();"];
    value = context[@"gksession"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkturnbasedexchangereply = GKTurnBasedExchangeReply.new();"];
    value = context[@"gkturnbasedexchangereply"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkturnbasedexchange = GKTurnBasedExchange.new();"];
    value = context[@"gkturnbasedexchange"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkturnbasedeventhandler = GKTurnBasedEventHandler.new();"];
    value = context[@"gkturnbasedeventhandler"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkturnbasedparticipant = GKTurnBasedParticipant.new();"];
    value = context[@"gkturnbasedparticipant"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkturnbasedmatch = GKTurnBasedMatch.new();"];
    value = context[@"gkturnbasedmatch"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkturnbasedmatchmakerviewcontroller = GKTurnBasedMatchmakerViewController.alloc();"];
    value = context[@"gkturnbasedmatchmakerviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkvoicechat = GKVoiceChat.new();"];
    value = context[@"gkvoicechat"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkvoicechatservice = GKVoiceChatService.new();"];
    value = context[@"gkvoicechatservice"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkscorechallenge = GKScoreChallenge.new();"];
    value = context[@"gkscorechallenge"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkachievementchallenge = GKAchievementChallenge.new();"];
    value = context[@"gkachievementchallenge"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkfriendrequestcomposeviewcontroller = GKFriendRequestComposeViewController.new();"];
    value = context[@"gkfriendrequestcomposeviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkgamecenterviewcontroller = GKGameCenterViewController.new();"];
    value = context[@"gkgamecenterviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gklocalplayer = GKLocalPlayer.new();"];
    value = context[@"gklocalplayer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkmatchmakerviewcontroller = GKMatchmakerViewController.alloc();"];
    value = context[@"gkmatchmakerviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkachievementviewcontroller = GKAchievementViewController.new();"];
    value = context[@"gkachievementviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var gkleaderboardviewcontroller = GKLeaderboardViewController.new();"];
    value = context[@"gkleaderboardviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
