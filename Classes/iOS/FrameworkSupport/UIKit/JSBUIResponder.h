#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIEvent.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIResponder <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (readonly, retain) UITextInputMode *textInputMode;
@property (nonatomic, readonly) UIKeyModifierFlags modifierFlags;
@property (readonly, retain) UIView *inputView;
@property (readonly, retain) NSString *textInputContextIdentifier;
@property (readonly, retain) UIView *inputAccessoryView;

+ (UIKeyCommand *)keyCommandWithInput:(NSString *)input modifierFlags:(UIKeyModifierFlags)modifierFlags action:(SEL)action;
+ (void)clearTextInputContextIdentifier:(NSString *)identifier;

- (UIResponder *)nextResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event;
- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event;
- (void)motionCancelled:(UIEventSubtype)motion withEvent:(UIEvent *)event;
- (void)remoteControlReceivedWithEvent:(UIEvent *)event;
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;
- (id)targetForAction:(SEL)action withSender:(id)sender;
- (void)cut:(id)sender;
- (void)copy:(id)sender;
- (void)paste:(id)sender;
- (void)select:(id)sender;
- (void)selectAll:(id)sender;
- (void)delete:(id)sender;
- (void)makeTextWritingDirectionLeftToRight:(id)sender;
- (void)makeTextWritingDirectionRightToLeft:(id)sender;
- (void)toggleBoldface:(id)sender;
- (void)toggleItalics:(id)sender;
- (void)toggleUnderline:(id)sender;
- (void)increaseSize:(id)sender;
- (void)decreaseSize:(id)sender;
- (void)reloadInputViews;

#pragma clang diagnostic pop

@end
