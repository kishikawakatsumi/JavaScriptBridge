#import <UIKit/UIView.h>
#import <UIKit/UITableView.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUITableViewHeaderFooterView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, retain) UIView *contentView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly, copy) NSString *reuseIdentifier;
@property (nonatomic, readonly, retain) UILabel *textLabel;
@property (nonatomic, readonly, retain) UILabel *detailTextLabel;

- (id)initWithReuseIdentifier:(NSString *)reuseIdentifier;
- (void)prepareForReuse;

#pragma clang diagnostic pop

@end
