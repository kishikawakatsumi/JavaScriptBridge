#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIEvent <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UIEventType type;
@property (nonatomic, readonly) UIEventSubtype subtype;
@property (nonatomic, readonly) NSTimeInterval timestamp;

- (NSSet *)allTouches;
- (NSSet *)touchesForWindow:(UIWindow *)window;
- (NSSet *)touchesForView:(UIView *)view;
- (NSSet *)touchesForGestureRecognizer:(UIGestureRecognizer *)gesture;

#pragma clang diagnostic pop

@end
