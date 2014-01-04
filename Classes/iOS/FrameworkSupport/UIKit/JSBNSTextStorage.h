#import <Foundation/NSObject.h>
#import <Foundation/NSNotification.h>
#import <Foundation/NSAttributedString.h>
#import <UIKit/NSAttributedString.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSMutableAttributedString;

@protocol JSBNSTextStorage <JSExport, JSBNSMutableAttributedString>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) BOOL fixesAttributesLazily;
@property NSTextStorageEditActions editedMask;
@property (readonly) NSArray *layoutManagers;
@property (assign) id delegate;
@property NSInteger changeInLength;
@property NSRange editedRange;

- (void)addLayoutManager:(NSLayoutManager *)aLayoutManager;
- (void)removeLayoutManager:(NSLayoutManager *)aLayoutManager;
- (void)edited:(NSTextStorageEditActions)editedMask range:(NSRange)editedRange changeInLength:(NSInteger)delta;
- (void)processEditing;
- (void)invalidateAttributesInRange:(NSRange)range;
- (void)ensureAttributesAreFixedInRange:(NSRange)range;

#pragma clang diagnostic pop

@end
