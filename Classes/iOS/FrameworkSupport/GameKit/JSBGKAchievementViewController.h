#import <UIKit/UIKit.h>
#import <GameKit/GKGameCenterViewController.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBGKGameCenterViewController;

@protocol JSBGKAchievementViewController <JSExport, JSBGKGameCenterViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id achievementDelegate;

#pragma clang diagnostic pop

@end
