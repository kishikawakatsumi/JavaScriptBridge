#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIImageView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) NSInteger animationRepeatCount;
@property (nonatomic, copy) NSArray *highlightedAnimationImages;
@property (nonatomic, getter = isHighlighted) BOOL highlighted;
@property (nonatomic) NSTimeInterval animationDuration;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSArray *animationImages;
@property (nonatomic, retain) UIImage *highlightedImage;

- (id)initWithImage:(UIImage *)image;
- (id)initWithImage:(UIImage *)image highlightedImage:(UIImage *)highlightedImage;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;

#pragma clang diagnostic pop

@end
