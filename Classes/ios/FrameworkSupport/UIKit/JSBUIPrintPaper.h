#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIPrintPaper <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) CGRect printableRect;
@property (readonly) CGSize paperSize;

+ (UIPrintPaper *)bestPaperForPageSize:(CGSize)contentSize withPapersFromArray:(NSArray *)paperList;

- (CGRect)printRect;

#pragma clang diagnostic pop

@end
