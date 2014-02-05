#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <UIKit/UIViewController.h>

@import MediaPlayer;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBMPMoviePlayerViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithContentURL:(NSURL *)contentURL;
- (BOOL)shouldAutorotate;
- (NSUInteger)supportedInterfaceOrientations;

#pragma clang diagnostic pop

@end
