#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIPrintPageRenderer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CGFloat footerHeight;
@property (nonatomic, copy) NSArray *printFormatters;
@property (nonatomic, readonly) CGRect paperRect;
@property (nonatomic, readonly) CGRect printableRect;
@property (nonatomic) CGFloat headerHeight;

- (NSArray *)printFormattersForPageAtIndex:(NSInteger)pageIndex;
- (void)addPrintFormatter:(UIPrintFormatter *)formatter startingAtPageAtIndex:(NSInteger)pageIndex;
- (NSInteger)numberOfPages;
- (void)prepareForDrawingPages:(NSRange)range;
- (void)drawPageAtIndex:(NSInteger)pageIndex inRect:(CGRect)printableRect;
- (void)drawPrintFormatter:(UIPrintFormatter *)printFormatter forPageAtIndex:(NSInteger)pageIndex;
- (void)drawHeaderForPageAtIndex:(NSInteger)pageIndex inRect:(CGRect)headerRect;
- (void)drawContentForPageAtIndex:(NSInteger)pageIndex inRect:(CGRect)contentRect;
- (void)drawFooterForPageAtIndex:(NSInteger)pageIndex inRect:(CGRect)footerRect;

#pragma clang diagnostic pop

@end
