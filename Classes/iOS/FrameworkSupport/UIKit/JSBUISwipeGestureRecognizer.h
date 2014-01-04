#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIGestureRecognizer;

@protocol JSBUISwipeGestureRecognizer <JSExport, JSBUIGestureRecognizer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) NSUInteger numberOfTouchesRequired;
@property (nonatomic) UISwipeGestureRecognizerDirection direction;

#pragma clang diagnostic pop

@end
