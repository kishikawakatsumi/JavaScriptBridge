#import <UIKit/UIKit.h>
#import <Social/SocialDefines.h>

@import Social;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBSLComposeViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, copy) SLComposeViewControllerCompletionHandler completionHandler;

+ (BOOL)isAvailableForServiceType:(NSString *)serviceType;
+ (SLComposeViewController *)composeViewControllerForServiceType:(NSString *)serviceType;

- (BOOL)setInitialText:(NSString *)text;
- (BOOL)addImage:(UIImage *)image;
- (BOOL)removeAllImages;
- (BOOL)addURL:(NSURL *)url;
- (BOOL)removeAllURLs;

#pragma clang diagnostic pop

@end
