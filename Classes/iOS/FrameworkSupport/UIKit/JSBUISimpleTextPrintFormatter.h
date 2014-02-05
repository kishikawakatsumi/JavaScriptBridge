#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIView.h>
#import <UIKit/UIStringDrawing.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIPrintFormatter;

@protocol JSBUISimpleTextPrintFormatter <JSExport, JSBUIPrintFormatter>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithText:(NSString *)text;
- (instancetype)initWithAttributedText:(NSAttributedString *)attributedText;

#pragma clang diagnostic pop

@end
