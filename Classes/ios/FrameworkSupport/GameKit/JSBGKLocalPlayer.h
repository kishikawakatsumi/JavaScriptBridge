#import <Foundation/Foundation.h>
#import <GameKit/GKPlayer.h>
#import <GameKit/GKDefines.h>
#import <GameKit/GKEventListener.h>
#import <GameKit/GKTurnBasedMatch.h>
#import <GameKit/GKMatchmaker.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBGKPlayer;

@protocol JSBGKLocalPlayer <JSExport, JSBGKPlayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) void (^authenticateHandler)(UIViewController *viewController, NSError *error);
@property (readonly, getter = isUnderage) BOOL underage;
@property (nonatomic, readonly, retain) NSArray *friends;
@property (readonly, getter = isAuthenticated) BOOL authenticated;

+ (GKLocalPlayer *)localPlayer;

- (void)loadFriendsWithCompletionHandler:(void (^)(NSArray *friendIDs , NSError *error))completionHandler;
- (void)setDefaultLeaderboardIdentifier:(NSString *)leaderboardIdentifier completionHandler:(void (^)(NSError *error))completionHandler;
- (void)setDefaultLeaderboardCategoryID:(NSString *)catogoryID completionHandler:(void (^)(NSError *error))completionHandler;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(void (^)(NSString *leaderboardIdentifier , NSError *error))completionHandler;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(void (^)(NSString *categoryID , NSError *error))completionHandler;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(void (^)(NSURL *publicKeyUrl , NSData *signature , NSData *salt , uint64_t timestamp , NSError *error))completionHandler;
- (void)authenticateWithCompletionHandler:(void (^)(NSError *error))completionHandler;
- (void)registerListener:(id <GKLocalPlayerListener>)listener;
- (void)unregisterListener:(id <GKLocalPlayerListener>)listener;
- (void)unregisterAllListeners;

#pragma clang diagnostic pop

@end
