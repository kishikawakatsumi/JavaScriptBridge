#include<Foundation/Foundation.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKMatchRequest <JSExport, JSBNSObject>

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

+ (NSUInteger)maxPlayersAllowedForMatchOfType:(GKMatchType)matchType;

#pragma clang diagnostic pop

@end
