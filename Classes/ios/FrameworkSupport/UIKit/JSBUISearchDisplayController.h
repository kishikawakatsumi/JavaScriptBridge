#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UILabel.h>
#import <UIKit/UITableView.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUISearchDisplayController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, getter = isActive) BOOL active;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) UIViewController *searchContentsController;
@property (nonatomic, copy) NSString *searchResultsTitle;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, assign) id searchResultsDelegate;
@property (nonatomic, readonly) UITableView *searchResultsTableView;
@property (nonatomic, assign) id delegate;
@property (nonatomic, assign) id searchResultsDataSource;
@property (nonatomic, assign) BOOL displaysSearchBarInNavigationBar;

- (id)initWithSearchBar:(UISearchBar *)searchBar contentsController:(UIViewController *)viewController;
- (void)setActive:(BOOL)visible animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
