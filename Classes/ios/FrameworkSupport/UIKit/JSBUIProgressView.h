#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIProgressView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) UIProgressViewStyle progressViewStyle;
@property (nonatomic, retain) UIImage *trackImage;
@property (nonatomic, retain) UIColor *trackTintColor;
@property (nonatomic, retain) UIImage *progressImage;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic) float progress;

- (id)initWithProgressViewStyle:(UIProgressViewStyle)style;
- (void)setProgress:(float)progress animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
