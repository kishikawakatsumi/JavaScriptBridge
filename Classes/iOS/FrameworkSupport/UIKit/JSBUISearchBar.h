#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIInterface.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIBarButtonItem.h>
#import <UIKit/UIBarCommon.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUISearchBar <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) UISearchBarStyle searchBarStyle;
@property (nonatomic) BOOL showsBookmarkButton;
@property (nonatomic) NSInteger selectedScopeButtonIndex;
@property (nonatomic, assign) id delegate;
@property (nonatomic, copy) NSArray *scopeButtonTitles;
@property (nonatomic) BOOL showsSearchResultsButton;
@property (nonatomic, assign, getter = isTranslucent) BOOL translucent;
@property (nonatomic, copy) NSString *placeholder;
//@property (nonatomic, readwrite, retain) UIView *inputAccessoryView;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, getter = isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property (nonatomic) UIKeyboardType keyboardType;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) UIBarStyle barStyle;
@property (nonatomic) UITextSpellCheckingType spellCheckingType;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;
@property (nonatomic) BOOL showsScopeBar;
@property (nonatomic) UIOffset searchTextPositionAdjustment;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIImage *scopeBarBackgroundImage;
@property (nonatomic) UITextAutocorrectionType autocorrectionType;
@property (nonatomic) UITextAutocapitalizationType autocapitalizationType;

- (void)setShowsCancelButton:(BOOL)showsCancelButton animated:(BOOL)animated;
- (void)setBackgroundImage:(UIImage *)backgroundImage forBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;
- (UIImage *)backgroundImageForBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics;
- (void)setSearchFieldBackgroundImage:(UIImage *)backgroundImage forState:(UIControlState)state;
- (UIImage *)searchFieldBackgroundImageForState:(UIControlState)state;
- (void)setImage:(UIImage *)iconImage forSearchBarIcon:(UISearchBarIcon)icon state:(UIControlState)state;
- (UIImage *)imageForSearchBarIcon:(UISearchBarIcon)icon state:(UIControlState)state;
- (void)setScopeBarButtonBackgroundImage:(UIImage *)backgroundImage forState:(UIControlState)state;
- (UIImage *)scopeBarButtonBackgroundImageForState:(UIControlState)state;
- (void)setScopeBarButtonDividerImage:(UIImage *)dividerImage forLeftSegmentState:(UIControlState)leftState rightSegmentState:(UIControlState)rightState;
- (UIImage *)scopeBarButtonDividerImageForLeftSegmentState:(UIControlState)leftState rightSegmentState:(UIControlState)rightState;
- (void)setScopeBarButtonTitleTextAttributes:(NSDictionary *)attributes forState:(UIControlState)state;
- (NSDictionary *)scopeBarButtonTitleTextAttributesForState:(UIControlState)state;
- (void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(UISearchBarIcon)icon;
- (UIOffset)positionAdjustmentForSearchBarIcon:(UISearchBarIcon)icon;

#pragma clang diagnostic pop

@end
