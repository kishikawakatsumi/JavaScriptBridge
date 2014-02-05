#import <Foundation/Foundation.h>
#import <GameKit/GKScore.h>
#import <GameKit/GKAchievement.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBGKChallenge;

@protocol JSBGKAchievementChallenge <JSExport, JSBGKChallenge>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
