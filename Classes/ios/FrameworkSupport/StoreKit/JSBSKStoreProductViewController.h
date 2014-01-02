#import <StoreKit/StoreKitDefines.h>
#import <UIKit/UIKit.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBSKStoreProductViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id delegate;

- (void)loadProductWithParameters:(NSDictionary *)parameters completionBlock:(void (^)(BOOL result , NSError *error))block;

#pragma clang diagnostic pop

@end
