#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIPrintInteractionController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) id printingItem;
@property (nonatomic, retain) UIPrintFormatter *printFormatter;
@property (nonatomic) BOOL showsPageRange;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic, readonly) UIPrintPaper *printPaper;
@property (nonatomic, copy) NSArray *printingItems;
@property (nonatomic, retain) UIPrintPageRenderer *printPageRenderer;
@property (nonatomic, assign) id delegate;
@property (nonatomic) BOOL showsNumberOfCopies;

+ (BOOL)isPrintingAvailable;
+ (NSSet *)printableUTIs;
+ (BOOL)canPrintURL:(NSURL *)url;
+ (BOOL)canPrintData:(NSData *)data;
+ (UIPrintInteractionController *)sharedPrintController;

- (BOOL)presentAnimated:(BOOL)animated completionHandler:(UIPrintInteractionCompletionHandler)completion;
- (BOOL)presentFromRect:(CGRect)rect inView:(UIView *)view animated:(BOOL)animated completionHandler:(UIPrintInteractionCompletionHandler)completion;
- (BOOL)presentFromBarButtonItem:(UIBarButtonItem *)item animated:(BOOL)animated completionHandler:(UIPrintInteractionCompletionHandler)completion;
- (void)dismissAnimated:(BOOL)animated;

#pragma clang diagnostic pop

@end
