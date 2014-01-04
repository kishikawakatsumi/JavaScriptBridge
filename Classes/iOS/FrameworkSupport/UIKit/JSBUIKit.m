#import "JSBUIKit.h"
#import "JSBNSMutableAttributedString.h"
#import "JSBNSAttributedString.h"
#import "JSBNSLayoutConstraint.h"
#import "JSBNSLayoutManager.h"
#import "JSBNSParagraphStyle.h"
#import "JSBNSTextTab.h"
#import "JSBNSShadow.h"
#import "JSBNSString.h"
#import "JSBNSStringDrawingContext.h"
#import "JSBNSTextAttachment.h"
#import "JSBNSTextContainer.h"
#import "JSBUIAcceleration.h"
#import "JSBUIAccelerometer.h"
#import "JSBUIAccessibilityElement.h"
#import "JSBUIImage.h"
#import "JSBUIView.h"
#import "JSBUIActivity.h"
#import "JSBUIBarItem.h"
#import "JSBUIBezierPath.h"
#import "JSBNSIndexPath.h"
#import "JSBUICollectionViewLayoutInvalidationContext.h"
#import "JSBUICollectionViewLayout.h"
#import "JSBUICollectionViewLayoutAttributes.h"
#import "JSBUICollectionViewUpdateItem.h"
#import "JSBUICollectionViewTransitionLayout.h"
#import "JSBUIColor.h"
#import "JSBCIColor.h"
#import "JSBUIDevice.h"
#import "JSBUIDocument.h"
#import "JSBUIDocumentInteractionController.h"
#import "JSBUIDynamicAnimator.h"
#import "JSBUIDynamicBehavior.h"
#import "JSBUIEvent.h"
#import "JSBUIFont.h"
#import "JSBUIFontDescriptor.h"
#import "JSBNSValue.h"
#import "JSBNSCoder.h"
#import "JSBUIGestureRecognizer.h"
#import "JSBCIImage.h"
#import "JSBUIInputView.h"
#import "JSBUILocalNotification.h"
#import "JSBUILocalizedIndexedCollation.h"
#import "JSBUIMenuItem.h"
#import "JSBUIMenuController.h"
#import "JSBUIMotionEffect.h"
#import "JSBUINavigationItem.h"
#import "JSBUIViewController.h"
#import "JSBUINib.h"
#import "JSBNSBundle.h"
#import "JSBUIPasteboard.h"
#import "JSBUIPopoverController.h"
#import "JSBUIPrintFormatter.h"
#import "JSBUIPrintInfo.h"
#import "JSBUIPrintInteractionController.h"
#import "JSBUIPrintPageRenderer.h"
#import "JSBUIPrintPaper.h"
#import "JSBUIResponder.h"
#import "JSBUIKeyCommand.h"
#import "JSBUIScreen.h"
#import "JSBUIScreenMode.h"
#import "JSBUISearchDisplayController.h"
#import "JSBUISplitViewController.h"
#import "JSBUIStoryboard.h"
#import "JSBUIStoryboardSegue.h"
#import "JSBUITextChecker.h"
#import "JSBUITextInputStringTokenizer.h"
#import "JSBUITextSelectionRect.h"
#import "JSBUIDictationPhrase.h"
#import "JSBUITextPosition.h"
#import "JSBUITextRange.h"
#import "JSBUITextInputMode.h"
#import "JSBUITouch.h"
#import "JSBUIPercentDrivenInteractiveTransition.h"
#import "JSBNSMutableParagraphStyle.h"
#import "JSBNSTextStorage.h"
#import "JSBUIActionSheet.h"
#import "JSBUIActivityIndicatorView.h"
#import "JSBUIActivityItemProvider.h"
#import "JSBUIActivityViewController.h"
#import "JSBUIAlertView.h"
#import "JSBUIApplication.h"
#import "JSBUIAttachmentBehavior.h"
#import "JSBUIBarButtonItem.h"
#import "JSBUICollectionReusableView.h"
#import "JSBUICollectionViewController.h"
#import "JSBUICollectionViewFlowLayout.h"
#import "JSBUICollectionViewFlowLayoutInvalidationContext.h"
#import "JSBUICollisionBehavior.h"
#import "JSBUIControl.h"
#import "JSBUIDynamicItemBehavior.h"
#import "JSBUIGravityBehavior.h"
#import "JSBUIImageView.h"
#import "JSBUILabel.h"
#import "JSBUILongPressGestureRecognizer.h"
#import "JSBUIManagedDocument.h"
#import "JSBUIMotionEffectGroup.h"
#import "JSBUIInterpolatingMotionEffect.h"
#import "JSBUINavigationBar.h"
#import "JSBUINavigationController.h"
#import "JSBUIPageViewController.h"
#import "JSBUIPanGestureRecognizer.h"
#import "JSBUIPickerView.h"
#import "JSBUIPinchGestureRecognizer.h"
#import "JSBUIPopoverBackgroundView.h"
#import "JSBUISimpleTextPrintFormatter.h"
#import "JSBUIMarkupTextPrintFormatter.h"
#import "JSBUIViewPrintFormatter.h"
#import "JSBUIProgressView.h"
#import "JSBUIPushBehavior.h"
#import "JSBUIReferenceLibraryViewController.h"
#import "JSBUIRotationGestureRecognizer.h"
#import "JSBUIScrollView.h"
#import "JSBUISearchBar.h"
#import "JSBUISnapBehavior.h"
#import "JSBUIStoryboardPopoverSegue.h"
#import "JSBUISwipeGestureRecognizer.h"
#import "JSBUITabBar.h"
#import "JSBUITabBarController.h"
#import "JSBUITabBarItem.h"
#import "JSBUITableViewCell.h"
#import "JSBUITableViewController.h"
#import "JSBUITableViewHeaderFooterView.h"
#import "JSBUITapGestureRecognizer.h"
#import "JSBUIToolbar.h"
#import "JSBUIWebView.h"
#import "JSBUIWindow.h"
#import "JSBUIButton.h"
#import "JSBUICollectionView.h"
#import "JSBUICollectionViewCell.h"
#import "JSBUIDatePicker.h"
#import "JSBUIImagePickerController.h"
#import "JSBUIPageControl.h"
#import "JSBUIRefreshControl.h"
#import "JSBUIScreenEdgePanGestureRecognizer.h"
#import "JSBUISegmentedControl.h"
#import "JSBUISlider.h"
#import "JSBUIStepper.h"
#import "JSBUISwitch.h"
#import "JSBUITableView.h"
#import "JSBUITextField.h"
#import "JSBUITextView.h"
#import "JSBUIVideoEditorController.h"

@import ObjectiveC;

@implementation JSBUIKit

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([NSAttributedString class], @protocol(JSBNSAttributedString));
    context[@"NSAttributedString"] = [NSAttributedString class];
    
    class_addProtocol([NSMutableAttributedString class], @protocol(JSBNSMutableAttributedString));
    context[@"NSMutableAttributedString"] = [NSMutableAttributedString class];

    class_addProtocol([NSLayoutConstraint class], @protocol(JSBNSLayoutConstraint));
    context[@"NSLayoutConstraint"] = [NSLayoutConstraint class];

    class_addProtocol([NSLayoutManager class], @protocol(JSBNSLayoutManager));
    context[@"NSLayoutManager"] = [NSLayoutManager class];

    class_addProtocol([NSParagraphStyle class], @protocol(JSBNSParagraphStyle));
    context[@"NSParagraphStyle"] = [NSParagraphStyle class];

    class_addProtocol([NSTextTab class], @protocol(JSBNSTextTab));
    context[@"NSTextTab"] = [NSTextTab class];

    class_addProtocol([NSShadow class], @protocol(JSBNSShadow));
    context[@"NSShadow"] = [NSShadow class];

    class_addProtocol([NSString class], @protocol(JSBNSString));
    context[@"NSString"] = [NSString class];

    class_addProtocol([NSStringDrawingContext class], @protocol(JSBNSStringDrawingContext));
    context[@"NSStringDrawingContext"] = [NSStringDrawingContext class];

    class_addProtocol([NSTextAttachment class], @protocol(JSBNSTextAttachment));
    context[@"NSTextAttachment"] = [NSTextAttachment class];

    class_addProtocol([NSTextContainer class], @protocol(JSBNSTextContainer));
    context[@"NSTextContainer"] = [NSTextContainer class];

    class_addProtocol([UIAcceleration class], @protocol(JSBUIAcceleration));
    context[@"UIAcceleration"] = [UIAcceleration class];

    class_addProtocol([UIAccelerometer class], @protocol(JSBUIAccelerometer));
    context[@"UIAccelerometer"] = [UIAccelerometer class];

    class_addProtocol([UIAccessibilityElement class], @protocol(JSBUIAccessibilityElement));
    context[@"UIAccessibilityElement"] = [UIAccessibilityElement class];

    class_addProtocol([UIImage class], @protocol(JSBUIImage));
    context[@"UIImage"] = [UIImage class];

    class_addProtocol([UIView class], @protocol(JSBUIView));
    context[@"UIView"] = [UIView class];

    class_addProtocol([UIActivity class], @protocol(JSBUIActivity));
    context[@"UIActivity"] = [UIActivity class];

    class_addProtocol([UIBarItem class], @protocol(JSBUIBarItem));
    context[@"UIBarItem"] = [UIBarItem class];

    class_addProtocol([UIBezierPath class], @protocol(JSBUIBezierPath));
    context[@"UIBezierPath"] = [UIBezierPath class];

    class_addProtocol([NSIndexPath class], @protocol(JSBNSIndexPath));
    context[@"NSIndexPath"] = [NSIndexPath class];

    class_addProtocol([UICollectionViewLayoutInvalidationContext class], @protocol(JSBUICollectionViewLayoutInvalidationContext));
    context[@"UICollectionViewLayoutInvalidationContext"] = [UICollectionViewLayoutInvalidationContext class];

    class_addProtocol([UICollectionViewLayout class], @protocol(JSBUICollectionViewLayout));
    context[@"UICollectionViewLayout"] = [UICollectionViewLayout class];

    class_addProtocol([UICollectionViewLayoutAttributes class], @protocol(JSBUICollectionViewLayoutAttributes));
    context[@"UICollectionViewLayoutAttributes"] = [UICollectionViewLayoutAttributes class];

    class_addProtocol([UICollectionViewUpdateItem class], @protocol(JSBUICollectionViewUpdateItem));
    context[@"UICollectionViewUpdateItem"] = [UICollectionViewUpdateItem class];

    class_addProtocol([UICollectionViewTransitionLayout class], @protocol(JSBUICollectionViewTransitionLayout));
    context[@"UICollectionViewTransitionLayout"] = [UICollectionViewTransitionLayout class];

    class_addProtocol([UIColor class], @protocol(JSBUIColor));
    context[@"UIColor"] = [UIColor class];

    class_addProtocol([CIColor class], @protocol(JSBCIColor));
    context[@"CIColor"] = [CIColor class];

    class_addProtocol([UIDevice class], @protocol(JSBUIDevice));
    context[@"UIDevice"] = [UIDevice class];

    class_addProtocol([UIDocument class], @protocol(JSBUIDocument));
    context[@"UIDocument"] = [UIDocument class];

    class_addProtocol([UIDocumentInteractionController class], @protocol(JSBUIDocumentInteractionController));
    context[@"UIDocumentInteractionController"] = [UIDocumentInteractionController class];

    class_addProtocol([UIDynamicAnimator class], @protocol(JSBUIDynamicAnimator));
    context[@"UIDynamicAnimator"] = [UIDynamicAnimator class];

    class_addProtocol([UIDynamicBehavior class], @protocol(JSBUIDynamicBehavior));
    context[@"UIDynamicBehavior"] = [UIDynamicBehavior class];

    class_addProtocol([UIEvent class], @protocol(JSBUIEvent));
    context[@"UIEvent"] = [UIEvent class];

    class_addProtocol([UIFont class], @protocol(JSBUIFont));
    context[@"UIFont"] = [UIFont class];

    class_addProtocol([UIFontDescriptor class], @protocol(JSBUIFontDescriptor));
    context[@"UIFontDescriptor"] = [UIFontDescriptor class];

    class_addProtocol([NSValue class], @protocol(JSBNSValue));
    context[@"NSValue"] = [NSValue class];

    class_addProtocol([NSCoder class], @protocol(JSBNSCoder));
    context[@"NSCoder"] = [NSCoder class];

    class_addProtocol([UIGestureRecognizer class], @protocol(JSBUIGestureRecognizer));
    context[@"UIGestureRecognizer"] = [UIGestureRecognizer class];

    class_addProtocol([CIImage class], @protocol(JSBCIImage));
    context[@"CIImage"] = [CIImage class];

    class_addProtocol([UIInputView class], @protocol(JSBUIInputView));
    context[@"UIInputView"] = [UIInputView class];

    class_addProtocol([UILocalNotification class], @protocol(JSBUILocalNotification));
    context[@"UILocalNotification"] = [UILocalNotification class];

    class_addProtocol([UILocalizedIndexedCollation class], @protocol(JSBUILocalizedIndexedCollation));
    context[@"UILocalizedIndexedCollation"] = [UILocalizedIndexedCollation class];

    class_addProtocol([UIMenuItem class], @protocol(JSBUIMenuItem));
    context[@"UIMenuItem"] = [UIMenuItem class];

    class_addProtocol([UIMenuController class], @protocol(JSBUIMenuController));
    context[@"UIMenuController"] = [UIMenuController class];

    class_addProtocol([UIMotionEffect class], @protocol(JSBUIMotionEffect));
    context[@"UIMotionEffect"] = [UIMotionEffect class];

    class_addProtocol([UINavigationItem class], @protocol(JSBUINavigationItem));
    context[@"UINavigationItem"] = [UINavigationItem class];

    class_addProtocol([UIViewController class], @protocol(JSBUIViewController));
    context[@"UIViewController"] = [UIViewController class];

    class_addProtocol([UINib class], @protocol(JSBUINib));
    context[@"UINib"] = [UINib class];

    class_addProtocol([NSBundle class], @protocol(JSBNSBundle));
    context[@"NSBundle"] = [NSBundle class];

    class_addProtocol([UIPasteboard class], @protocol(JSBUIPasteboard));
    context[@"UIPasteboard"] = [UIPasteboard class];

    class_addProtocol([UIPopoverController class], @protocol(JSBUIPopoverController));
    context[@"UIPopoverController"] = [UIPopoverController class];

    class_addProtocol([UIPrintFormatter class], @protocol(JSBUIPrintFormatter));
    context[@"UIPrintFormatter"] = [UIPrintFormatter class];

    class_addProtocol([UIPrintInfo class], @protocol(JSBUIPrintInfo));
    context[@"UIPrintInfo"] = [UIPrintInfo class];

    class_addProtocol([UIPrintInteractionController class], @protocol(JSBUIPrintInteractionController));
    context[@"UIPrintInteractionController"] = [UIPrintInteractionController class];

    class_addProtocol([UIPrintPageRenderer class], @protocol(JSBUIPrintPageRenderer));
    context[@"UIPrintPageRenderer"] = [UIPrintPageRenderer class];

    class_addProtocol([UIPrintPaper class], @protocol(JSBUIPrintPaper));
    context[@"UIPrintPaper"] = [UIPrintPaper class];

    class_addProtocol([UIResponder class], @protocol(JSBUIResponder));
    context[@"UIResponder"] = [UIResponder class];

    class_addProtocol([UIKeyCommand class], @protocol(JSBUIKeyCommand));
    context[@"UIKeyCommand"] = [UIKeyCommand class];

    class_addProtocol([UIScreen class], @protocol(JSBUIScreen));
    context[@"UIScreen"] = [UIScreen class];

    class_addProtocol([UIScreenMode class], @protocol(JSBUIScreenMode));
    context[@"UIScreenMode"] = [UIScreenMode class];

    class_addProtocol([UISearchDisplayController class], @protocol(JSBUISearchDisplayController));
    context[@"UISearchDisplayController"] = [UISearchDisplayController class];

    class_addProtocol([UISplitViewController class], @protocol(JSBUISplitViewController));
    context[@"UISplitViewController"] = [UISplitViewController class];

    class_addProtocol([UIStoryboard class], @protocol(JSBUIStoryboard));
    context[@"UIStoryboard"] = [UIStoryboard class];

    class_addProtocol([UIStoryboardSegue class], @protocol(JSBUIStoryboardSegue));
    context[@"UIStoryboardSegue"] = [UIStoryboardSegue class];

    class_addProtocol([UITextChecker class], @protocol(JSBUITextChecker));
    context[@"UITextChecker"] = [UITextChecker class];

    class_addProtocol([UITextInputStringTokenizer class], @protocol(JSBUITextInputStringTokenizer));
    context[@"UITextInputStringTokenizer"] = [UITextInputStringTokenizer class];

    class_addProtocol([UITextSelectionRect class], @protocol(JSBUITextSelectionRect));
    context[@"UITextSelectionRect"] = [UITextSelectionRect class];

    class_addProtocol([UIDictationPhrase class], @protocol(JSBUIDictationPhrase));
    context[@"UIDictationPhrase"] = [UIDictationPhrase class];

    class_addProtocol([UITextPosition class], @protocol(JSBUITextPosition));
    context[@"UITextPosition"] = [UITextPosition class];

    class_addProtocol([UITextRange class], @protocol(JSBUITextRange));
    context[@"UITextRange"] = [UITextRange class];

    class_addProtocol([UITextInputMode class], @protocol(JSBUITextInputMode));
    context[@"UITextInputMode"] = [UITextInputMode class];

    class_addProtocol([UITouch class], @protocol(JSBUITouch));
    context[@"UITouch"] = [UITouch class];

    class_addProtocol([UIPercentDrivenInteractiveTransition class], @protocol(JSBUIPercentDrivenInteractiveTransition));
    context[@"UIPercentDrivenInteractiveTransition"] = [UIPercentDrivenInteractiveTransition class];

    class_addProtocol([NSMutableParagraphStyle class], @protocol(JSBNSMutableParagraphStyle));
    context[@"NSMutableParagraphStyle"] = [NSMutableParagraphStyle class];

    class_addProtocol([NSTextStorage class], @protocol(JSBNSTextStorage));
    context[@"NSTextStorage"] = [NSTextStorage class];

    class_addProtocol([UIActionSheet class], @protocol(JSBUIActionSheet));
    context[@"UIActionSheet"] = [UIActionSheet class];

    class_addProtocol([UIActivityIndicatorView class], @protocol(JSBUIActivityIndicatorView));
    context[@"UIActivityIndicatorView"] = [UIActivityIndicatorView class];

    class_addProtocol([UIActivityItemProvider class], @protocol(JSBUIActivityItemProvider));
    context[@"UIActivityItemProvider"] = [UIActivityItemProvider class];

    class_addProtocol([UIActivityViewController class], @protocol(JSBUIActivityViewController));
    context[@"UIActivityViewController"] = [UIActivityViewController class];

    class_addProtocol([UIAlertView class], @protocol(JSBUIAlertView));
    context[@"UIAlertView"] = [UIAlertView class];

    class_addProtocol([UIApplication class], @protocol(JSBUIApplication));
    context[@"UIApplication"] = [UIApplication class];

    class_addProtocol([UIAttachmentBehavior class], @protocol(JSBUIAttachmentBehavior));
    context[@"UIAttachmentBehavior"] = [UIAttachmentBehavior class];

    class_addProtocol([UIBarButtonItem class], @protocol(JSBUIBarButtonItem));
    context[@"UIBarButtonItem"] = [UIBarButtonItem class];

    class_addProtocol([UICollectionReusableView class], @protocol(JSBUICollectionReusableView));
    context[@"UICollectionReusableView"] = [UICollectionReusableView class];

    class_addProtocol([UICollectionViewController class], @protocol(JSBUICollectionViewController));
    context[@"UICollectionViewController"] = [UICollectionViewController class];

    class_addProtocol([UICollectionViewFlowLayout class], @protocol(JSBUICollectionViewFlowLayout));
    context[@"UICollectionViewFlowLayout"] = [UICollectionViewFlowLayout class];

    class_addProtocol([UICollectionViewFlowLayoutInvalidationContext class], @protocol(JSBUICollectionViewFlowLayoutInvalidationContext));
    context[@"UICollectionViewFlowLayoutInvalidationContext"] = [UICollectionViewFlowLayoutInvalidationContext class];

    class_addProtocol([UICollisionBehavior class], @protocol(JSBUICollisionBehavior));
    context[@"UICollisionBehavior"] = [UICollisionBehavior class];

    class_addProtocol([UIControl class], @protocol(JSBUIControl));
    context[@"UIControl"] = [UIControl class];

    class_addProtocol([UIDynamicItemBehavior class], @protocol(JSBUIDynamicItemBehavior));
    context[@"UIDynamicItemBehavior"] = [UIDynamicItemBehavior class];

    class_addProtocol([UIGravityBehavior class], @protocol(JSBUIGravityBehavior));
    context[@"UIGravityBehavior"] = [UIGravityBehavior class];

    class_addProtocol([UIImageView class], @protocol(JSBUIImageView));
    context[@"UIImageView"] = [UIImageView class];

    class_addProtocol([UILabel class], @protocol(JSBUILabel));
    context[@"UILabel"] = [UILabel class];

    class_addProtocol([UILongPressGestureRecognizer class], @protocol(JSBUILongPressGestureRecognizer));
    context[@"UILongPressGestureRecognizer"] = [UILongPressGestureRecognizer class];

    class_addProtocol([UIManagedDocument class], @protocol(JSBUIManagedDocument));
    context[@"UIManagedDocument"] = [UIManagedDocument class];

    class_addProtocol([UIMotionEffectGroup class], @protocol(JSBUIMotionEffectGroup));
    context[@"UIMotionEffectGroup"] = [UIMotionEffectGroup class];

    class_addProtocol([UIInterpolatingMotionEffect class], @protocol(JSBUIInterpolatingMotionEffect));
    context[@"UIInterpolatingMotionEffect"] = [UIInterpolatingMotionEffect class];

    class_addProtocol([UINavigationBar class], @protocol(JSBUINavigationBar));
    context[@"UINavigationBar"] = [UINavigationBar class];

    class_addProtocol([UINavigationController class], @protocol(JSBUINavigationController));
    context[@"UINavigationController"] = [UINavigationController class];

    class_addProtocol([UIPageViewController class], @protocol(JSBUIPageViewController));
    context[@"UIPageViewController"] = [UIPageViewController class];

    class_addProtocol([UIPanGestureRecognizer class], @protocol(JSBUIPanGestureRecognizer));
    context[@"UIPanGestureRecognizer"] = [UIPanGestureRecognizer class];

    class_addProtocol([UIPickerView class], @protocol(JSBUIPickerView));
    context[@"UIPickerView"] = [UIPickerView class];

    class_addProtocol([UIPinchGestureRecognizer class], @protocol(JSBUIPinchGestureRecognizer));
    context[@"UIPinchGestureRecognizer"] = [UIPinchGestureRecognizer class];

    class_addProtocol([UIPopoverBackgroundView class], @protocol(JSBUIPopoverBackgroundView));
    context[@"UIPopoverBackgroundView"] = [UIPopoverBackgroundView class];

    class_addProtocol([UISimpleTextPrintFormatter class], @protocol(JSBUISimpleTextPrintFormatter));
    context[@"UISimpleTextPrintFormatter"] = [UISimpleTextPrintFormatter class];

    class_addProtocol([UIMarkupTextPrintFormatter class], @protocol(JSBUIMarkupTextPrintFormatter));
    context[@"UIMarkupTextPrintFormatter"] = [UIMarkupTextPrintFormatter class];

    class_addProtocol([UIViewPrintFormatter class], @protocol(JSBUIViewPrintFormatter));
    context[@"UIViewPrintFormatter"] = [UIViewPrintFormatter class];

    class_addProtocol([UIProgressView class], @protocol(JSBUIProgressView));
    context[@"UIProgressView"] = [UIProgressView class];

    class_addProtocol([UIPushBehavior class], @protocol(JSBUIPushBehavior));
    context[@"UIPushBehavior"] = [UIPushBehavior class];

    class_addProtocol([UIReferenceLibraryViewController class], @protocol(JSBUIReferenceLibraryViewController));
    context[@"UIReferenceLibraryViewController"] = [UIReferenceLibraryViewController class];

    class_addProtocol([UIRotationGestureRecognizer class], @protocol(JSBUIRotationGestureRecognizer));
    context[@"UIRotationGestureRecognizer"] = [UIRotationGestureRecognizer class];

    class_addProtocol([UIScrollView class], @protocol(JSBUIScrollView));
    context[@"UIScrollView"] = [UIScrollView class];

    class_addProtocol([UISearchBar class], @protocol(JSBUISearchBar));
    context[@"UISearchBar"] = [UISearchBar class];

    class_addProtocol([UISnapBehavior class], @protocol(JSBUISnapBehavior));
    context[@"UISnapBehavior"] = [UISnapBehavior class];

    class_addProtocol([UIStoryboardPopoverSegue class], @protocol(JSBUIStoryboardPopoverSegue));
    context[@"UIStoryboardPopoverSegue"] = [UIStoryboardPopoverSegue class];

    class_addProtocol([UISwipeGestureRecognizer class], @protocol(JSBUISwipeGestureRecognizer));
    context[@"UISwipeGestureRecognizer"] = [UISwipeGestureRecognizer class];

    class_addProtocol([UITabBar class], @protocol(JSBUITabBar));
    context[@"UITabBar"] = [UITabBar class];

    class_addProtocol([UITabBarController class], @protocol(JSBUITabBarController));
    context[@"UITabBarController"] = [UITabBarController class];

    class_addProtocol([UITabBarItem class], @protocol(JSBUITabBarItem));
    context[@"UITabBarItem"] = [UITabBarItem class];

    class_addProtocol([UITableViewCell class], @protocol(JSBUITableViewCell));
    context[@"UITableViewCell"] = [UITableViewCell class];

    class_addProtocol([UITableViewController class], @protocol(JSBUITableViewController));
    context[@"UITableViewController"] = [UITableViewController class];

    class_addProtocol([UITableViewHeaderFooterView class], @protocol(JSBUITableViewHeaderFooterView));
    context[@"UITableViewHeaderFooterView"] = [UITableViewHeaderFooterView class];

    class_addProtocol([UITapGestureRecognizer class], @protocol(JSBUITapGestureRecognizer));
    context[@"UITapGestureRecognizer"] = [UITapGestureRecognizer class];

    class_addProtocol([UIToolbar class], @protocol(JSBUIToolbar));
    context[@"UIToolbar"] = [UIToolbar class];

    class_addProtocol([UIWebView class], @protocol(JSBUIWebView));
    context[@"UIWebView"] = [UIWebView class];

    class_addProtocol([UIWindow class], @protocol(JSBUIWindow));
    context[@"UIWindow"] = [UIWindow class];

    class_addProtocol([UIButton class], @protocol(JSBUIButton));
    context[@"UIButton"] = [UIButton class];

    class_addProtocol([UICollectionView class], @protocol(JSBUICollectionView));
    context[@"UICollectionView"] = [UICollectionView class];

    class_addProtocol([UICollectionViewCell class], @protocol(JSBUICollectionViewCell));
    context[@"UICollectionViewCell"] = [UICollectionViewCell class];

    class_addProtocol([UIDatePicker class], @protocol(JSBUIDatePicker));
    context[@"UIDatePicker"] = [UIDatePicker class];

    class_addProtocol([UIImagePickerController class], @protocol(JSBUIImagePickerController));
    context[@"UIImagePickerController"] = [UIImagePickerController class];

    class_addProtocol([UIPageControl class], @protocol(JSBUIPageControl));
    context[@"UIPageControl"] = [UIPageControl class];

    class_addProtocol([UIRefreshControl class], @protocol(JSBUIRefreshControl));
    context[@"UIRefreshControl"] = [UIRefreshControl class];

    class_addProtocol([UIScreenEdgePanGestureRecognizer class], @protocol(JSBUIScreenEdgePanGestureRecognizer));
    context[@"UIScreenEdgePanGestureRecognizer"] = [UIScreenEdgePanGestureRecognizer class];

    class_addProtocol([UISegmentedControl class], @protocol(JSBUISegmentedControl));
    context[@"UISegmentedControl"] = [UISegmentedControl class];

    class_addProtocol([UISlider class], @protocol(JSBUISlider));
    context[@"UISlider"] = [UISlider class];

    class_addProtocol([UIStepper class], @protocol(JSBUIStepper));
    context[@"UIStepper"] = [UIStepper class];

    class_addProtocol([UISwitch class], @protocol(JSBUISwitch));
    context[@"UISwitch"] = [UISwitch class];

    class_addProtocol([UITableView class], @protocol(JSBUITableView));
    context[@"UITableView"] = [UITableView class];

    class_addProtocol([UITextField class], @protocol(JSBUITextField));
    context[@"UITextField"] = [UITextField class];

    class_addProtocol([UITextView class], @protocol(JSBUITextView));
    context[@"UITextView"] = [UITextView class];

    class_addProtocol([UIVideoEditorController class], @protocol(JSBUIVideoEditorController));
    context[@"UIVideoEditorController"] = [UIVideoEditorController class];

#pragma clang diagnostic pop
}

@end
