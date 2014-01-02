#import <UIKit/UIKit.h>
#import <Social/SLComposeViewController.h>

@import Twitter;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBTWTweetComposeViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) TWTweetComposeViewControllerCompletionHandler completionHandler;

+ (BOOL)canSendTweet;

- (BOOL)setInitialText:(NSString *)text;
- (BOOL)addImage:(UIImage *)image;
- (BOOL)removeAllImages;
- (BOOL)addURL:(NSURL *)url;
- (BOOL)removeAllURLs;

#pragma clang diagnostic pop

@end
