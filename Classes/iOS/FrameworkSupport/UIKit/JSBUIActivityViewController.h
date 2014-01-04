#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBUIActivityViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, copy) UIActivityViewControllerCompletionHandler completionHandler;

- (id)initWithActivityItems:(NSArray *)activityItems applicationActivities:(NSArray *)applicationActivities;

#pragma clang diagnostic pop

@end
