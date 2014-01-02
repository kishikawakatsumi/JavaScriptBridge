#import <UIKit/UIGeometry.h>
#import <UIKit/UIPanGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIPanGestureRecognizer;

@protocol JSBUIScreenEdgePanGestureRecognizer <JSExport, JSBUIPanGestureRecognizer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readwrite, nonatomic, assign) UIRectEdge edges;

#pragma clang diagnostic pop

@end
