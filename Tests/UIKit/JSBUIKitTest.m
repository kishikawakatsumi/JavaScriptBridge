#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBUIKitTests : XCTestCase

@end

@implementation JSBUIKitTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testInstantiation
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"UIKit"];
    
    JSValue *value = nil;
    
    [context evaluateScript:@"var nsattributedstring = NSAttributedString.new();"];
    value = context[@"nsattributedstring"];
    XCTAssertTrue(value && !value.isUndefined);
    
    [context evaluateScript:@"var nsmutableattributedstring = NSMutableAttributedString.new();"];
    value = context[@"nsmutableattributedstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nslayoutconstraint = NSLayoutConstraint.new();"];
    value = context[@"nslayoutconstraint"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nslayoutmanager = NSLayoutManager.new();"];
    value = context[@"nslayoutmanager"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsparagraphstyle = NSParagraphStyle.new();"];
    value = context[@"nsparagraphstyle"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nstexttab = NSTextTab.new();"];
    value = context[@"nstexttab"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsshadow = NSShadow.new();"];
    value = context[@"nsshadow"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsstring = NSString.new();"];
    value = context[@"nsstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsstringdrawingcontext = NSStringDrawingContext.new();"];
    value = context[@"nsstringdrawingcontext"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsattributedstring = NSAttributedString.new();"];
    value = context[@"nsattributedstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nstextattachment = NSTextAttachment.new();"];
    value = context[@"nstextattachment"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsattributedstring = NSAttributedString.new();"];
    value = context[@"nsattributedstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nstextcontainer = NSTextContainer.new();"];
    value = context[@"nstextcontainer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiacceleration = UIAcceleration.new();"];
    value = context[@"uiacceleration"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiaccelerometer = UIAccelerometer.new();"];
    value = context[@"uiaccelerometer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiaccessibilityelement = UIAccessibilityElement.new();"];
    value = context[@"uiaccessibilityelement"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiimage = UIImage.new();"];
    value = context[@"uiimage"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiview = UIView.new();"];
    value = context[@"uiview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiactivity = UIActivity.new();"];
    value = context[@"uiactivity"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uibaritem = UIBarItem.new();"];
    value = context[@"uibaritem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uibezierpath = UIBezierPath.new();"];
    value = context[@"uibezierpath"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsindexpath = NSIndexPath.new();"];
    value = context[@"nsindexpath"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewlayoutinvalidationcontext = UICollectionViewLayoutInvalidationContext.new();"];
    value = context[@"uicollectionviewlayoutinvalidationcontext"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewlayout = UICollectionViewLayout.new();"];
    value = context[@"uicollectionviewlayout"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewlayoutattributes = UICollectionViewLayoutAttributes.new();"];
    value = context[@"uicollectionviewlayoutattributes"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewupdateitem = UICollectionViewUpdateItem.new();"];
    value = context[@"uicollectionviewupdateitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewtransitionlayout = UICollectionViewTransitionLayout.new();"];
    value = context[@"uicollectionviewtransitionlayout"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicolor = UIColor.new();"];
    value = context[@"uicolor"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var cicolor = CIColor.new();"];
    value = context[@"cicolor"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidevice = UIDevice.new();"];
    value = context[@"uidevice"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidocument = UIDocument.alloc();"];
    value = context[@"uidocument"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidocumentinteractioncontroller = UIDocumentInteractionController.new();"];
    value = context[@"uidocumentinteractioncontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidynamicanimator = UIDynamicAnimator.new();"];
    value = context[@"uidynamicanimator"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidynamicbehavior = UIDynamicBehavior.new();"];
    value = context[@"uidynamicbehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uievent = UIEvent.new();"];
    value = context[@"uievent"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uifont = UIFont.new();"];
    value = context[@"uifont"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uifontdescriptor = UIFontDescriptor.new();"];
    value = context[@"uifontdescriptor"];
    XCTAssertTrue(value && !value.isUndefined);
#if 0
    [context evaluateScript:@"var nsvalue = NSValue.new();"];
    value = context[@"nsvalue"];
    XCTAssertTrue(value && !value.isUndefined);
#endif
    [context evaluateScript:@"var nscoder = NSCoder.new();"];
    value = context[@"nscoder"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uigesturerecognizer = UIGestureRecognizer.new();"];
    value = context[@"uigesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uigesturerecognizer = UIGestureRecognizer.new();"];
    value = context[@"uigesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiimage = UIImage.new();"];
    value = context[@"uiimage"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ciimage = CIImage.new();"];
    value = context[@"ciimage"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiinputview = UIInputView.new();"];
    value = context[@"uiinputview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicolor = UIColor.new();"];
    value = context[@"uicolor"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uifont = UIFont.new();"];
    value = context[@"uifont"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uilocalnotification = UILocalNotification.new();"];
    value = context[@"uilocalnotification"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uilocalizedindexedcollation = UILocalizedIndexedCollation.new();"];
    value = context[@"uilocalizedindexedcollation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uimenuitem = UIMenuItem.new();"];
    value = context[@"uimenuitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uimenucontroller = UIMenuController.new();"];
    value = context[@"uimenucontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uimotioneffect = UIMotionEffect.new();"];
    value = context[@"uimotioneffect"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uinavigationitem = UINavigationItem.new();"];
    value = context[@"uinavigationitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uinib = UINib.new();"];
    value = context[@"uinib"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsbundle = NSBundle.new();"];
    value = context[@"nsbundle"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipasteboard = UIPasteboard.generalPasteboard();"];
    value = context[@"uipasteboard"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipopovercontroller = UIPopoverController.alloc();"];
    value = context[@"uipopovercontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiprintformatter = UIPrintFormatter.new();"];
    value = context[@"uiprintformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiview = UIView.new();"];
    value = context[@"uiview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiprintinfo = UIPrintInfo.printInfo();"];
    value = context[@"uiprintinfo"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiprintinteractioncontroller = UIPrintInteractionController.sharedPrintController();"];
    value = context[@"uiprintinteractioncontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiprintpagerenderer = UIPrintPageRenderer.new();"];
    value = context[@"uiprintpagerenderer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiprintpaper = UIPrintPaper.new();"];
    value = context[@"uiprintpaper"];
    XCTAssertTrue(value && !value.isUndefined);
#if 0
    [context evaluateScript:@"var uiresponder = UIResponder.new();"];
    value = context[@"uiresponder"];
    XCTAssertTrue(value && !value.isUndefined);
#endif
    [context evaluateScript:@"var uikeycommand = UIKeyCommand.new();"];
    value = context[@"uikeycommand"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiscreen = UIScreen.new();"];
    value = context[@"uiscreen"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiscreenmode = UIScreenMode.new();"];
    value = context[@"uiscreenmode"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uisearchdisplaycontroller = UISearchDisplayController.new();"];
    value = context[@"uisearchdisplaycontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uisplitviewcontroller = UISplitViewController.alloc();"];
    value = context[@"uisplitviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uistoryboard = UIStoryboard.new();"];
    value = context[@"uistoryboard"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uistoryboardsegue = UIStoryboardSegue.new();"];
    value = context[@"uistoryboardsegue"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsstring = NSString.new();"];
    value = context[@"nsstring"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsindexpath = NSIndexPath.new();"];
    value = context[@"nsindexpath"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextchecker = UITextChecker.new();"];
    value = context[@"uitextchecker"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiview = UIView.new();"];
    value = context[@"uiview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextinputstringtokenizer = UITextInputStringTokenizer.new();"];
    value = context[@"uitextinputstringtokenizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextselectionrect = UITextSelectionRect.new();"];
    value = context[@"uitextselectionrect"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidictationphrase = UIDictationPhrase.new();"];
    value = context[@"uidictationphrase"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextposition = UITextPosition.new();"];
    value = context[@"uitextposition"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextrange = UITextRange.new();"];
    value = context[@"uitextrange"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextinputmode = UITextInputMode.new();"];
    value = context[@"uitextinputmode"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitouch = UITouch.new();"];
    value = context[@"uitouch"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipercentdriveninteractivetransition = UIPercentDrivenInteractiveTransition.new();"];
    value = context[@"uipercentdriveninteractivetransition"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nsmutableparagraphstyle = NSMutableParagraphStyle.new();"];
    value = context[@"nsmutableparagraphstyle"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var nstextstorage = NSTextStorage.new();"];
    value = context[@"nstextstorage"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiactionsheet = UIActionSheet.new();"];
    value = context[@"uiactionsheet"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiactivityindicatorview = UIActivityIndicatorView.new();"];
    value = context[@"uiactivityindicatorview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiactivityitemprovider = UIActivityItemProvider.new();"];
    value = context[@"uiactivityitemprovider"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiactivityviewcontroller = UIActivityViewController.new();"];
    value = context[@"uiactivityviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uialertview = UIAlertView.new();"];
    value = context[@"uialertview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiapplication = UIApplication.sharedApplication();"];
    value = context[@"uiapplication"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiattachmentbehavior = UIAttachmentBehavior.alloc();"];
    value = context[@"uiattachmentbehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uibarbuttonitem = UIBarButtonItem.new();"];
    value = context[@"uibarbuttonitem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionreusableview = UICollectionReusableView.new();"];
    value = context[@"uicollectionreusableview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewcontroller = UICollectionViewController.new();"];
    value = context[@"uicollectionviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewflowlayout = UICollectionViewFlowLayout.new();"];
    value = context[@"uicollectionviewflowlayout"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewflowlayoutinvalidationcontext = UICollectionViewFlowLayoutInvalidationContext.new();"];
    value = context[@"uicollectionviewflowlayoutinvalidationcontext"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollisionbehavior = UICollisionBehavior.new();"];
    value = context[@"uicollisionbehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicontrol = UIControl.new();"];
    value = context[@"uicontrol"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidynamicitembehavior = UIDynamicItemBehavior.new();"];
    value = context[@"uidynamicitembehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uigravitybehavior = UIGravityBehavior.new();"];
    value = context[@"uigravitybehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiimageview = UIImageView.new();"];
    value = context[@"uiimageview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uilabel = UILabel.new();"];
    value = context[@"uilabel"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uilongpressgesturerecognizer = UILongPressGestureRecognizer.new();"];
    value = context[@"uilongpressgesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uimanageddocument = UIManagedDocument.alloc();"];
    value = context[@"uimanageddocument"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uimotioneffectgroup = UIMotionEffectGroup.new();"];
    value = context[@"uimotioneffectgroup"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiinterpolatingmotioneffect = UIInterpolatingMotionEffect.new();"];
    value = context[@"uiinterpolatingmotioneffect"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uinavigationbar = UINavigationBar.new();"];
    value = context[@"uinavigationbar"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uinavigationcontroller = UINavigationController.new();"];
    value = context[@"uinavigationcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipageviewcontroller = UIPageViewController.new();"];
    value = context[@"uipageviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipangesturerecognizer = UIPanGestureRecognizer.new();"];
    value = context[@"uipangesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipickerview = UIPickerView.new();"];
    value = context[@"uipickerview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipinchgesturerecognizer = UIPinchGestureRecognizer.new();"];
    value = context[@"uipinchgesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipopoverbackgroundview = UIPopoverBackgroundView.new();"];
    value = context[@"uipopoverbackgroundview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uisimpletextprintformatter = UISimpleTextPrintFormatter.new();"];
    value = context[@"uisimpletextprintformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uimarkuptextprintformatter = UIMarkupTextPrintFormatter.new();"];
    value = context[@"uimarkuptextprintformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewprintformatter = UIViewPrintFormatter.new();"];
    value = context[@"uiviewprintformatter"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiprogressview = UIProgressView.new();"];
    value = context[@"uiprogressview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipushbehavior = UIPushBehavior.new();"];
    value = context[@"uipushbehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uireferencelibraryviewcontroller = UIReferenceLibraryViewController.alloc().initWithTerm('term');"];
    value = context[@"uireferencelibraryviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uirotationgesturerecognizer = UIRotationGestureRecognizer.new();"];
    value = context[@"uirotationgesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiscrollview = UIScrollView.new();"];
    value = context[@"uiscrollview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uisearchbar = UISearchBar.new();"];
    value = context[@"uisearchbar"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uisnapbehavior = UISnapBehavior.alloc();"];
    value = context[@"uisnapbehavior"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uistoryboardpopoversegue = UIStoryboardPopoverSegue.new();"];
    value = context[@"uistoryboardpopoversegue"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiswipegesturerecognizer = UISwipeGestureRecognizer.new();"];
    value = context[@"uiswipegesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitabbar = UITabBar.new();"];
    value = context[@"uitabbar"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitabbarcontroller = UITabBarController.new();"];
    value = context[@"uitabbarcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitabbaritem = UITabBarItem.new();"];
    value = context[@"uitabbaritem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitableviewcell = UITableViewCell.new();"];
    value = context[@"uitableviewcell"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitableviewcontroller = UITableViewController.new();"];
    value = context[@"uitableviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitableviewheaderfooterview = UITableViewHeaderFooterView.new();"];
    value = context[@"uitableviewheaderfooterview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitapgesturerecognizer = UITapGestureRecognizer.new();"];
    value = context[@"uitapgesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitoolbar = UIToolbar.new();"];
    value = context[@"uitoolbar"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiview = UIView.new();"];
    value = context[@"uiview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiviewcontroller = UIViewController.new();"];
    value = context[@"uiviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiwebview = UIWebView.new();"];
    value = context[@"uiwebview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiwindow = UIWindow.new();"];
    value = context[@"uiwindow"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uibutton = UIButton.new();"];
    value = context[@"uibutton"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionview = UICollectionView.alloc().initWithFrameCollectionViewLayout({x: 0, y: 0, width: 0, height: 0}, UICollectionViewFlowLayout.new());"];
    value = context[@"uicollectionview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uicollectionviewcell = UICollectionViewCell.new();"];
    value = context[@"uicollectionviewcell"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uidatepicker = UIDatePicker.new();"];
    value = context[@"uidatepicker"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiimagepickercontroller = UIImagePickerController.new();"];
    value = context[@"uiimagepickercontroller"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uipagecontrol = UIPageControl.new();"];
    value = context[@"uipagecontrol"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uirefreshcontrol = UIRefreshControl.new();"];
    value = context[@"uirefreshcontrol"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiscreenedgepangesturerecognizer = UIScreenEdgePanGestureRecognizer.new();"];
    value = context[@"uiscreenedgepangesturerecognizer"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uisegmentedcontrol = UISegmentedControl.new();"];
    value = context[@"uisegmentedcontrol"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uislider = UISlider.new();"];
    value = context[@"uislider"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uistepper = UIStepper.new();"];
    value = context[@"uistepper"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uiswitch = UISwitch.new();"];
    value = context[@"uiswitch"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitableview = UITableView.new();"];
    value = context[@"uitableview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextfield = UITextField.new();"];
    value = context[@"uitextfield"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uitextview = UITextView.new();"];
    value = context[@"uitextview"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var uivideoeditorcontroller = UIVideoEditorController.new();"];
    value = context[@"uivideoeditorcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
