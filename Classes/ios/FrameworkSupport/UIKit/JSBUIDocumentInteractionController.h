#import <Foundation/Foundation.h>
#import <UIKit/UIActivityViewController.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIViewController.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIDocumentInteractionController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *icons;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (nonatomic, retain) id annotation;
@property (nonatomic, copy) NSString *UTI;
@property (nonatomic, assign) id delegate;
@property (retain) NSURL *URL;
@property (copy) NSString *name;

+ (UIDocumentInteractionController *)interactionControllerWithURL:(NSURL *)url;

- (BOOL)presentOptionsMenuFromRect:(CGRect)rect inView:(UIView *)view animated:(BOOL)animated;
- (BOOL)presentOptionsMenuFromBarButtonItem:(UIBarButtonItem *)item animated:(BOOL)animated;
- (BOOL)presentPreviewAnimated:(BOOL)animated;
- (BOOL)presentOpenInMenuFromRect:(CGRect)rect inView:(UIView *)view animated:(BOOL)animated;
- (BOOL)presentOpenInMenuFromBarButtonItem:(UIBarButtonItem *)item animated:(BOOL)animated;
- (void)dismissPreviewAnimated:(BOOL)animated;
- (void)dismissMenuAnimated:(BOOL)animated;

#pragma clang diagnostic pop

@end
