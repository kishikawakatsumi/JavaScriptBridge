#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UICollectionView.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUICollectionReusableView;

@protocol JSBUICollectionViewCell <JSExport, JSBUICollectionReusableView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, getter = isHighlighted) BOOL highlighted;
@property (nonatomic, readonly, copy) NSString *reuseIdentifier;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, getter = isSelected) BOOL selected;
@property (nonatomic, retain) UIView *selectedBackgroundView;

#pragma clang diagnostic pop

@end
