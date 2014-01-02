#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIView.h>
#import <UIKit/UIStringDrawing.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIGestureRecognizer.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUITableViewCell <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) CGFloat indentationWidth;
@property (nonatomic, readonly, copy) NSString *reuseIdentifier;
@property (nonatomic, retain) UIView *selectedBackgroundView;
@property (nonatomic, readonly, retain) UILabel *textLabel;
@property (nonatomic, retain) UIView *multipleSelectionBackgroundView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) BOOL showingDeleteConfirmation;
@property (nonatomic, assign) id target;
@property (nonatomic, readonly) UITableViewCellEditingStyle editingStyle;
@property (nonatomic, getter = isSelected) BOOL selected;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) UIEdgeInsets separatorInset;
@property (nonatomic) UITableViewCellAccessoryType editingAccessoryType;
@property (nonatomic, readonly, retain) UILabel *detailTextLabel;
@property (nonatomic, readonly, retain) UIView *contentView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) UITableViewCellSelectionStyle selectionStyle;
@property (nonatomic, getter = isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL hidesAccessoryWhenEditing;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) NSLineBreakMode lineBreakMode;
@property (nonatomic, getter = isEditing) BOOL editing;
@property (nonatomic) BOOL showsReorderControl;
@property (nonatomic) SEL editAction;
@property (nonatomic) NSInteger indentationLevel;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) SEL accessoryAction;
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic, retain) UIView *editingAccessoryView;
@property (nonatomic, retain) UIColor *selectedTextColor;
@property (nonatomic) UITableViewCellAccessoryType accessoryType;
@property (nonatomic, readonly, retain) UIImageView *imageView;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic) BOOL shouldIndentWhileEditing;
@property (nonatomic, retain) UIFont *font;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (void)willTransitionToState:(UITableViewCellStateMask)state;
- (void)didTransitionToState:(UITableViewCellStateMask)state;
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(NSString *)reuseIdentifier;

#pragma clang diagnostic pop

@end
