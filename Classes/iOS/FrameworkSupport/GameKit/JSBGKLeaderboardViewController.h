#import <UIKit/UIKit.h>
#import <GameKit/GKLeaderboard.h>
#import <GameKit/GKGameCenterViewController.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBGKGameCenterViewController;

@protocol JSBGKLeaderboardViewController <JSExport, JSBGKGameCenterViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id leaderboardDelegate;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, assign) GKLeaderboardTimeScope timeScope;

#pragma clang diagnostic pop

@end
