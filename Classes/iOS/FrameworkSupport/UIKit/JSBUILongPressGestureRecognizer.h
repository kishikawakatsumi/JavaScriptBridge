#import <Foundation/Foundation.h>
#import <UIKit/UIGestureRecognizer.h>
#import <CoreGraphics/CoreGraphics.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIGestureRecognizer;

@protocol JSBUILongPressGestureRecognizer <JSExport, JSBUIGestureRecognizer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CGFloat allowableMovement;
@property (nonatomic) CFTimeInterval minimumPressDuration;
@property (nonatomic) NSUInteger numberOfTapsRequired;
@property (nonatomic) NSUInteger numberOfTouchesRequired;

#pragma clang diagnostic pop

@end
