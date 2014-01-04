#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UITextInputTraits.h>
#import <UIKit/UIResponder.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUITextInputMode <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, readonly) id tokenizer;
@property (nonatomic, readonly) CGRect rect;
@property (nonatomic, readonly) UITextWritingDirection writingDirection;
@property (nonatomic, readonly, getter = isEmpty) BOOL empty;
@property (readwrite, copy) UITextRange *selectedTextRange;
@property (nonatomic) UITextStorageDirection selectionAffinity;
@property (nonatomic, readonly) BOOL isVertical;
@property (nonatomic, readonly) BOOL containsEnd;
@property (nonatomic, assign) id inputDelegate;
@property (nonatomic, readonly) BOOL containsStart;
@property (nonatomic, readonly) NSArray *alternativeInterpretations;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) UITextPosition *end;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UITextPosition *start;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly, retain) NSString *primaryLanguage;

+ (UITextInputMode *)currentInputMode;
+ (NSArray *)activeInputModes;

#pragma clang diagnostic pop

@end
