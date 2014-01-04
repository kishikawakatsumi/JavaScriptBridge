#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIGestureRecognizer;

@protocol JSBUITapGestureRecognizer <JSExport, JSBUIGestureRecognizer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) NSUInteger numberOfTapsRequired;
@property (nonatomic) NSUInteger numberOfTouchesRequired;

#pragma clang diagnostic pop

@end
