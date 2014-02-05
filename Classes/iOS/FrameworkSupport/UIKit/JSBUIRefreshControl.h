#import <Foundation/Foundation.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUIRefreshControl <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, readonly, getter = isRefreshing) BOOL refreshing;

- (id)init;
- (void)beginRefreshing;
- (void)endRefreshing;

#pragma clang diagnostic pop

@end
