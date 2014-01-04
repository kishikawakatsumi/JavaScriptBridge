#import <UIKit/UICollectionViewLayout.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UIKitDefines.h>
#import <Foundation/Foundation.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUICollectionViewLayoutInvalidationContext;

@protocol JSBUICollectionViewFlowLayoutInvalidationContext <JSExport, JSBUICollectionViewLayoutInvalidationContext>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) UIEdgeInsets sectionInset;
@property (nonatomic) CGSize headerReferenceSize;
@property (nonatomic) CGFloat minimumLineSpacing;
@property (nonatomic) UICollectionViewScrollDirection scrollDirection;
@property (nonatomic) BOOL invalidateFlowLayoutAttributes;
@property (nonatomic) BOOL invalidateFlowLayoutDelegateMetrics;
@property (nonatomic) CGSize footerReferenceSize;
@property (nonatomic) CGSize itemSize;
@property (nonatomic) CGFloat minimumInteritemSpacing;

#pragma clang diagnostic pop

@end
