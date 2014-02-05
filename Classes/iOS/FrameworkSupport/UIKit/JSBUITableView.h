#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UISwipeGestureRecognizer.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIScrollView;

@protocol JSBUITableView <JSExport, JSBUIScrollView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) CGFloat sectionHeaderHeight;
@property (nonatomic, readonly) UITableViewStyle style;
@property (nonatomic) CGFloat estimatedSectionFooterHeight;
@property (nonatomic) NSInteger sectionIndexMinimumDisplayRowCount;
@property (nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (nonatomic) CGFloat rowHeight;
@property (nonatomic, readwrite, retain) UIView *backgroundView;
@property (nonatomic) UITableViewCellSeparatorStyle separatorStyle;
@property (nonatomic, retain) UIView *tableHeaderView;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) CGFloat sectionFooterHeight;
@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) BOOL allowsSelectionDuringEditing;
@property (nonatomic, retain) UIColor *sectionIndexBackgroundColor;
@property (nonatomic, retain) UIColor *sectionIndexColor;
@property (nonatomic, retain) UIColor *sectionIndexTrackingBackgroundColor;
@property (nonatomic, retain) UIView *tableFooterView;
@property (nonatomic, readonly) NSInteger row;
@property (nonatomic) CGFloat estimatedSectionHeaderHeight;
@property (nonatomic) CGFloat estimatedRowHeight;
@property (nonatomic, getter = isEditing) BOOL editing;
@property (nonatomic) UIEdgeInsets separatorInset;
@property (nonatomic, readonly) NSInteger section;
@property (nonatomic, assign) id dataSource;

- (id)initWithFrame:(CGRect)frame style:(UITableViewStyle)style;
- (void)reloadData;
- (void)reloadSectionIndexTitles;
- (NSInteger)numberOfSections;
- (NSInteger)numberOfRowsInSection:(NSInteger)section;
- (CGRect)rectForSection:(NSInteger)section;
- (CGRect)rectForHeaderInSection:(NSInteger)section;
- (CGRect)rectForFooterInSection:(NSInteger)section;
- (CGRect)rectForRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSIndexPath *)indexPathForRowAtPoint:(CGPoint)point;
- (NSIndexPath *)indexPathForCell:(UITableViewCell *)cell;
- (NSArray *)indexPathsForRowsInRect:(CGRect)rect;
- (UITableViewCell *)cellForRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSArray *)visibleCells;
- (NSArray *)indexPathsForVisibleRows;
- (UITableViewHeaderFooterView *)headerViewForSection:(NSInteger)section;
- (UITableViewHeaderFooterView *)footerViewForSection:(NSInteger)section;
- (void)scrollToRowAtIndexPath:(NSIndexPath *)indexPath atScrollPosition:(UITableViewScrollPosition)scrollPosition animated:(BOOL)animated;
- (void)scrollToNearestSelectedRowAtScrollPosition:(UITableViewScrollPosition)scrollPosition animated:(BOOL)animated;
- (void)beginUpdates;
- (void)endUpdates;
- (void)insertSections:(NSIndexSet *)sections withRowAnimation:(UITableViewRowAnimation)animation;
- (void)deleteSections:(NSIndexSet *)sections withRowAnimation:(UITableViewRowAnimation)animation;
- (void)reloadSections:(NSIndexSet *)sections withRowAnimation:(UITableViewRowAnimation)animation;
- (void)moveSection:(NSInteger)section toSection:(NSInteger)newSection;
- (void)insertRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UITableViewRowAnimation)animation;
- (void)deleteRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UITableViewRowAnimation)animation;
- (void)reloadRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UITableViewRowAnimation)animation;
- (void)moveRowAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)newIndexPath;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (NSIndexPath *)indexPathForSelectedRow;
- (NSArray *)indexPathsForSelectedRows;
- (void)selectRowAtIndexPath:(NSIndexPath *)indexPath animated:(BOOL)animated scrollPosition:(UITableViewScrollPosition)scrollPosition;
- (void)deselectRowAtIndexPath:(NSIndexPath *)indexPath animated:(BOOL)animated;
- (id)dequeueReusableCellWithIdentifier:(NSString *)identifier;
- (id)dequeueReusableCellWithIdentifier:(NSString *)identifier forIndexPath:(NSIndexPath *)indexPath;
- (id)dequeueReusableHeaderFooterViewWithIdentifier:(NSString *)identifier;
- (void)registerNib:(UINib *)nib forCellReuseIdentifier:(NSString *)identifier;
- (void)registerClass:(id)cellClass forCellReuseIdentifier:(NSString *)identifier;
- (void)registerNib:(UINib *)nib forHeaderFooterViewReuseIdentifier:(NSString *)identifier;
- (void)registerClass:(id)aClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier;

#pragma clang diagnostic pop

@end
