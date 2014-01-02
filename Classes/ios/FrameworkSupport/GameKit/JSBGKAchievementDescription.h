#import <Foundation/Foundation.h>
#import <GameKit/GKDefines.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKAchievementDescription <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (getter = isHidden, assign, readonly) BOOL hidden;
@property (assign, readonly) NSInteger maximumPoints;
@property (copy, readonly) NSString *title;
@property (nonatomic, retain, readonly) NSString *groupIdentifier;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *unachievedDescription;
@property (copy, readonly) NSString *achievedDescription;
@property (nonatomic, getter = isReplayable, assign, readonly) BOOL replayable;
@property (nonatomic, retain, readonly) UIImage *image;

+ (void)loadAchievementDescriptionsWithCompletionHandler:(void (^)(NSArray *descriptions , NSError *error))completionHandler;
+ (UIImage *)incompleteAchievementImage;
+ (UIImage *)placeholderCompletedAchievementImage;

- (void)loadImageWithCompletionHandler:(void (^)(UIImage *image , NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
