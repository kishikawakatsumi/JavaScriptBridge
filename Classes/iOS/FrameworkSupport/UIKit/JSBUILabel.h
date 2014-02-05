#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIView.h>
#import <UIKit/UIStringDrawing.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUILabel <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) CGFloat minimumFontSize;
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic) CGFloat preferredMaxLayoutWidth;
@property (nonatomic) UIBaselineAdjustment baselineAdjustment;
@property (nonatomic) NSLineBreakMode lineBreakMode;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, getter = isHighlighted) BOOL highlighted;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL adjustsLetterSpacingToFitWidth;

- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)numberOfLines;
- (void)drawTextInRect:(CGRect)rect;

#pragma clang diagnostic pop

@end
