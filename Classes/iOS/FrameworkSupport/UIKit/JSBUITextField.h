#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIFont.h>
#import <UIKit/UIStringDrawing.h>
#import <UIKit/UITextInput.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUITextField <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) UIImage *disabledBackground;
@property (nonatomic, assign) id delegate;
@property (nonatomic) BOOL clearsOnBeginEditing;
@property (nonatomic) BOOL clearsOnInsertion;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIImage *background;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (nonatomic) CGFloat minimumFontSize;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic) UITextFieldViewMode rightViewMode;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) UITextFieldViewMode clearButtonMode;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) UITextFieldViewMode leftViewMode;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSDictionary *defaultTextAttributes;
@property (nonatomic, copy) NSDictionary *typingAttributes;
@property (nonatomic) UITextBorderStyle borderStyle;
@property (nonatomic, readonly, getter = isEditing) BOOL editing;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSAttributedString *attributedPlaceholder;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIView *rightView;

- (CGRect)borderRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (CGRect)placeholderRectForBounds:(CGRect)bounds;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;
- (CGRect)leftViewRectForBounds:(CGRect)bounds;
- (CGRect)rightViewRectForBounds:(CGRect)bounds;
- (void)drawTextInRect:(CGRect)rect;
- (void)drawPlaceholderInRect:(CGRect)rect;

#pragma clang diagnostic pop

@end
