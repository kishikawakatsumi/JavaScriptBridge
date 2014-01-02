#import <UIKit/UIViewController.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBUIReferenceLibraryViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (BOOL)dictionaryHasDefinitionForTerm:(NSString *)term;

- (id)initWithTerm:(NSString *)term;

#pragma clang diagnostic pop

@end
