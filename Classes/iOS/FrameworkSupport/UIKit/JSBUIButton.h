#import <Foundation/Foundation.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIStringDrawing.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUIButton <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, retain) UIImageView *imageView;
@property (nonatomic, readonly, retain) UIImage *currentBackgroundImage;
@property (nonatomic) BOOL reversesTitleShadowWhenHighlighted;
@property (nonatomic, readonly, retain) NSString *currentTitle;
@property (nonatomic) BOOL adjustsImageWhenDisabled;
@property (nonatomic, readonly) UIButtonType buttonType;
@property (nonatomic, readonly, retain) UIImage *currentImage;
@property (nonatomic, readonly, retain) NSAttributedString *currentAttributedTitle;
@property (nonatomic) UIEdgeInsets contentEdgeInsets;
@property (nonatomic, readonly, retain) UIColor *currentTitleColor;
@property (nonatomic) CGSize titleShadowOffset;
@property (nonatomic) UIEdgeInsets titleEdgeInsets;
@property (nonatomic) NSLineBreakMode lineBreakMode;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly, retain) UIColor *currentTitleShadowColor;
@property (nonatomic, readonly, retain) UILabel *titleLabel;
@property (nonatomic) UIEdgeInsets imageEdgeInsets;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic) BOOL showsTouchWhenHighlighted;

+ (id)buttonWithType:(UIButtonType)buttonType;

- (void)setTitle:(NSString *)title forState:(UIControlState)state;
- (void)setTitleColor:(UIColor *)color forState:(UIControlState)state;
- (void)setTitleShadowColor:(UIColor *)color forState:(UIControlState)state;
- (void)setImage:(UIImage *)image forState:(UIControlState)state;
- (void)setBackgroundImage:(UIImage *)image forState:(UIControlState)state;
- (void)setAttributedTitle:(NSAttributedString *)title forState:(UIControlState)state;
- (NSString *)titleForState:(UIControlState)state;
- (UIColor *)titleColorForState:(UIControlState)state;
- (UIColor *)titleShadowColorForState:(UIControlState)state;
- (UIImage *)imageForState:(UIControlState)state;
- (UIImage *)backgroundImageForState:(UIControlState)state;
- (NSAttributedString *)attributedTitleForState:(UIControlState)state;
- (CGRect)backgroundRectForBounds:(CGRect)bounds;
- (CGRect)contentRectForBounds:(CGRect)bounds;
- (CGRect)titleRectForContentRect:(CGRect)contentRect;
- (CGRect)imageRectForContentRect:(CGRect)contentRect;

#pragma clang diagnostic pop

@end
