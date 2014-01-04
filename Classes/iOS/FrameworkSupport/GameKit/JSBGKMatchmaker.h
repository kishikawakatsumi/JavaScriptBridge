#include<Foundation/Foundation.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKMatchmaker <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, retain) NSString *inviter;
@property (readonly, getter = isHosted) BOOL hosted;
@property (readonly, nonatomic, assign) uint32_t playerAttributes;
@property (nonatomic, copy) void (^inviteHandler)(GKInvite *acceptedInvite, NSArray *playerIDsToInvite);
@property (nonatomic, assign) NSUInteger maxPlayers;
@property (nonatomic, assign) NSUInteger defaultNumberOfPlayers;
@property (nonatomic, copy) void (^inviteeResponseHandler)(NSString *playerID, GKInviteeResponse response);
@property (nonatomic, retain) NSArray *playersToInvite;
@property (readonly, nonatomic, assign) NSUInteger playerGroup;
@property (nonatomic, assign) NSUInteger minPlayers;
@property (nonatomic, copy) NSString *inviteMessage;

+ (GKMatchmaker *)sharedMatchmaker;

- (void)matchForInvite:(GKInvite *)invite completionHandler:(void (^)(GKMatch *match , NSError *error))completionHandler;
- (void)findMatchForRequest:(GKMatchRequest *)request withCompletionHandler:(void (^)(GKMatch *match , NSError *error))completionHandler;
- (void)findPlayersForHostedMatchRequest:(GKMatchRequest *)request withCompletionHandler:(void (^)(NSArray *playerIDs , NSError *error))completionHandler;
- (void)addPlayersToMatch:(GKMatch *)match matchRequest:(GKMatchRequest *)matchRequest completionHandler:(void (^)(NSError *error))completionHandler;
- (void)cancel;
- (void)cancelInviteToPlayer:(NSString *)playerID;
- (void)finishMatchmakingForMatch:(GKMatch *)match;
- (void)queryPlayerGroupActivity:(NSUInteger)playerGroup withCompletionHandler:(void (^)(NSInteger activity , NSError *error))completionHandler;
- (void)queryActivityWithCompletionHandler:(void (^)(NSInteger activity , NSError *error))completionHandler;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(void (^)(NSString *playerID , BOOL reachable))reachableHandler;
- (void)stopBrowsingForNearbyPlayers;

#pragma clang diagnostic pop

@end
