#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIGestureRecognizer;

@protocol JSBUIRotationGestureRecognizer <JSExport, JSBUIGestureRecognizer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CGFloat rotation;
@property (nonatomic, readonly) CGFloat velocity;

#pragma clang diagnostic pop

@end
