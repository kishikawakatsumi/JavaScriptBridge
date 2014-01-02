#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIAppearance.h>
#import <UIKit/UIGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIPopoverController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic) CGSize popoverContentSize;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic, readwrite) UIEdgeInsets popoverLayoutMargins;
@property (nonatomic, readwrite, getter = isModalInPopover) BOOL modalInPopover;
@property (nonatomic, readwrite) CGSize contentSizeForViewInPopover;
@property (nonatomic, readonly) UIPopoverArrowDirection popoverArrowDirection;
@property (nonatomic, readwrite, retain) Class popoverBackgroundViewClass;
@property (nonatomic, readonly, getter = isPopoverVisible) BOOL popoverVisible;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, assign) id delegate;

- (id)initWithContentViewController:(UIViewController *)viewController;
- (void)setContentViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (void)setPopoverContentSize:(CGSize)size animated:(BOOL)animated;
- (void)presentPopoverFromRect:(CGRect)rect inView:(UIView *)view permittedArrowDirections:(UIPopoverArrowDirection)arrowDirections animated:(BOOL)animated;
- (void)presentPopoverFromBarButtonItem:(UIBarButtonItem *)item permittedArrowDirections:(UIPopoverArrowDirection)arrowDirections animated:(BOOL)animated;
- (void)dismissPopoverAnimated:(BOOL)animated;

#pragma clang diagnostic pop

@end
