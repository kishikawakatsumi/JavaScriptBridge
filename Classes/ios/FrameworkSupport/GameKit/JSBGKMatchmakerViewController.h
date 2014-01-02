#import <UIKit/UIKit.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBGKMatchmakerViewController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, retain) GKMatchRequest *matchRequest;
@property (nonatomic, assign) id matchmakerDelegate;
@property (nonatomic, assign, getter = isHosted) BOOL hosted;
@property (nonatomic, copy) NSString *defaultInvitationMessage;

- (id)initWithMatchRequest:(GKMatchRequest *)request;
- (id)initWithInvite:(GKInvite *)invite;
- (void)addPlayersToMatch:(GKMatch *)match;
- (void)setHostedPlayer:(NSString *)playerID connected:(BOOL)connected;
- (void)setHostedPlayerReady:(NSString *)playerID;

#pragma clang diagnostic pop

@end
