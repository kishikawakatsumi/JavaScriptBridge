#import <UIKit/UIKit.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBGKFriendRequestComposeViewController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id composeViewDelegate;

+ (NSUInteger)maxNumberOfRecipients;

- (void)setMessage:(NSString *)message;
- (void)addRecipientsWithPlayerIDs:(NSArray *)playerIDs;
- (void)addRecipientsWithEmailAddresses:(NSArray *)emailAddresses;

#pragma clang diagnostic pop

@end
