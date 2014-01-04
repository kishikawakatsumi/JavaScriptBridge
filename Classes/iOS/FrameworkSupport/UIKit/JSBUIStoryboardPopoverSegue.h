#import <UIKit/UIStoryboardSegue.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIStoryboardSegue;

@protocol JSBUIStoryboardPopoverSegue <JSExport, JSBUIStoryboardSegue>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain, readonly) UIPopoverController *popoverController;

#pragma clang diagnostic pop

@end
