#import <Foundation/NSObject.h>
#import <UIKit/NSParagraphStyle.h>
#import <UIKit/NSLayoutManager.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSTextContainer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property BOOL heightTracksTextView;
@property CGFloat lineFragmentPadding;
@property NSUInteger maximumNumberOfLines;
@property CGSize size;
@property (copy) NSArray *exclusionPaths;
@property BOOL widthTracksTextView;
@property (assign) NSLayoutManager *layoutManager;
@property NSLineBreakMode lineBreakMode;

- (id)initWithSize:(CGSize)size;
- (CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect atIndex:(NSUInteger)characterIndex writingDirection:(NSWritingDirection)baseWritingDirection remainingRect:(CGRect *)remainingRect;

#pragma clang diagnostic pop

@end
