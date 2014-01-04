#import <UIKit/UIKit.h>
#import <GameKit/GKLeaderboard.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBGKGameCenterViewController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) GKLeaderboardTimeScope leaderboardTimeScope;
@property (nonatomic, retain) NSString *leaderboardIdentifier;
@property (nonatomic, assign) id gameCenterDelegate;
@property (nonatomic, retain) NSString *leaderboardCategory;
@property (nonatomic, assign) GKGameCenterViewControllerState viewState;

#pragma clang diagnostic pop

@end
