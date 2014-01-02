#import <Foundation/Foundation.h>
#import <GameKit/GKChallenge.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKChallengeEventHandler <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id delegate;

+ (GKChallengeEventHandler *)challengeEventHandler;

#pragma clang diagnostic pop

@end
