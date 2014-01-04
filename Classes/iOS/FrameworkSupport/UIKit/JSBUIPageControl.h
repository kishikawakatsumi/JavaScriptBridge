#import <Foundation/Foundation.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUIPageControl <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) NSInteger numberOfPages;
@property (nonatomic) BOOL defersCurrentPageDisplay;
@property (nonatomic, retain) UIColor *pageIndicatorTintColor;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic) NSInteger currentPage;
@property (nonatomic, retain) UIColor *currentPageIndicatorTintColor;

- (void)updateCurrentPageDisplay;
- (CGSize)sizeForNumberOfPages:(NSInteger)pageCount;

#pragma clang diagnostic pop

@end
