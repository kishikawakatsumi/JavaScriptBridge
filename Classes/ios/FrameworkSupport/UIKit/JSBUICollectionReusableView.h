#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UICollectionView.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUICollectionReusableView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, getter = isHighlighted) BOOL highlighted;
@property (nonatomic, readonly, copy) NSString *reuseIdentifier;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, getter = isSelected) BOOL selected;
@property (nonatomic, retain) UIView *selectedBackgroundView;

- (void)prepareForReuse;
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes *)layoutAttributes;
- (void)willTransitionFromLayout:(UICollectionViewLayout *)oldLayout toLayout:(UICollectionViewLayout *)newLayout;
- (void)didTransitionFromLayout:(UICollectionViewLayout *)oldLayout toLayout:(UICollectionViewLayout *)newLayout;

#pragma clang diagnostic pop

@end
