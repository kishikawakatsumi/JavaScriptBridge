#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIEvent.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIKeyCommand <JSExport, JSBNSObject>

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

#pragma clang diagnostic pop

@end
