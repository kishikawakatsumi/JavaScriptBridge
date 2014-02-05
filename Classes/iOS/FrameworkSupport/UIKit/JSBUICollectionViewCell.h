#import <UIKit/UIView.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UICollectionView.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUICollectionReusableView;

@protocol JSBUICollectionViewCell <JSExport, JSBUICollectionReusableView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
