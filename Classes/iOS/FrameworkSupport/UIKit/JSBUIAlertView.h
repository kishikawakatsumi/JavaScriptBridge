#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIView.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIView;

@protocol JSBUIAlertView <JSExport, JSBUIView>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSInteger numberOfButtons;
@property (nonatomic, readonly, getter = isVisible) BOOL visible;
@property (nonatomic) NSInteger cancelButtonIndex;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, assign) id delegate;
@property (nonatomic, assign) UIAlertViewStyle alertViewStyle;
@property (nonatomic, readonly) NSInteger firstOtherButtonIndex;

JSExportAs(initWithTitleMessageDelegateCancelButtonTitleOtherButtonTitles,
- (id)__initWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles);
- (NSInteger)addButtonWithTitle:(NSString *)title;
- (NSString *)buttonTitleAtIndex:(NSInteger)buttonIndex;
- (void)show;
- (void)dismissWithClickedButtonIndex:(NSInteger)buttonIndex animated:(BOOL)animated;
- (UITextField *)textFieldAtIndex:(NSInteger)textFieldIndex;

#pragma clang diagnostic pop

@end
