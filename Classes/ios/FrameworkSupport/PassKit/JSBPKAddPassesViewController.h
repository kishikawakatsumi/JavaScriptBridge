#import <UIKit/UIKit.h>

@import PassKit;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBPKAddPassesViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id delegate;

- (id)initWithPass:(id)pass;
- (id)initWithPasses:(NSArray *)passes;

#pragma clang diagnostic pop

@end
