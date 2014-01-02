#import <UIKit/UIKitDefines.h>
#import <Foundation/Foundation.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUITextChecker <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (void)learnWord:(NSString *)word;
+ (BOOL)hasLearnedWord:(NSString *)word;
+ (void)unlearnWord:(NSString *)word;
+ (NSArray *)availableLanguages;

- (NSRange)rangeOfMisspelledWordInString:(NSString *)stringToCheck range:(NSRange)range startingAt:(NSInteger)startingOffset wrap:(BOOL)wrapFlag language:(NSString *)language;
- (NSArray *)guessesForWordRange:(NSRange)range inString:(NSString *)string language:(NSString *)language;
- (NSArray *)completionsForPartialWordRange:(NSRange)range inString:(NSString *)string language:(NSString *)language;
- (void)ignoreWord:(NSString *)wordToIgnore;
- (NSArray *)ignoredWords;
- (void)setIgnoredWords:(NSArray *)words;

#pragma clang diagnostic pop

@end
