#import <UIKit/UIKit.h>

@import QuickLook;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBQLPreviewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (assign) id dataSource;
@property (assign) id delegate;
@property NSInteger currentPreviewItemIndex;
@property (readonly) id currentPreviewItem;

+ (BOOL)canPreviewItem:(id <QLPreviewItem>)item;

- (void)reloadData;
- (void)refreshCurrentPreviewItem;

#pragma clang diagnostic pop

@end
