#import <Foundation/NSObject.h>

@import Foundation;
@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSIndexPath <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)indexPathWithIndex:(NSUInteger)index;
+ (instancetype)indexPathWithIndexes:(const NSUInteger [])indexes length:(NSUInteger)length;

- (instancetype)init;
- (instancetype)initWithIndexes:(const NSUInteger [])indexes length:(NSUInteger)length;
- (instancetype)initWithIndex:(NSUInteger)index;
- (NSIndexPath *)indexPathByAddingIndex:(NSUInteger)index;
- (NSIndexPath *)indexPathByRemovingLastIndex;
- (NSUInteger)indexAtPosition:(NSUInteger)position;
- (NSUInteger)length;
- (void)getIndexes:(NSUInteger *)indexes;
- (NSComparisonResult)compare:(NSIndexPath *)otherObject;

#pragma mark - UIKit

@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) CGFloat sectionHeaderHeight;
@property (nonatomic, readonly) UITableViewStyle style;
@property (nonatomic) CGFloat estimatedSectionFooterHeight;
@property (nonatomic) NSInteger sectionIndexMinimumDisplayRowCount;
@property (nonatomic, assign) id delegate;
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

+ (NSIndexPath *)indexPathForRow:(NSInteger)row inSection:(NSInteger)section;
+ (NSIndexPath *)indexPathForItem:(NSInteger)item inSection:(NSInteger)section;

#pragma clang diagnostic pop

@end
