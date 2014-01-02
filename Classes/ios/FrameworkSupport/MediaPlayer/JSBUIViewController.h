#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <UIKit/UIViewController.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIViewController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) MPMoviePlayerController *moviePlayer;

- (void)presentMoviePlayerViewControllerAnimated:(MPMoviePlayerViewController *)moviePlayerViewController;
- (void)dismissMoviePlayerViewControllerAnimated;

#pragma clang diagnostic pop

@end
