#import <Foundation/Foundation.h>
#import <StoreKit/SKRequest.h>
#import <StoreKit/StoreKitDefines.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBSKRequest;

@protocol JSBSKReceiptRefreshRequest <JSExport, JSBSKRequest>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSDictionary *receiptProperties;

- (id)initWithReceiptProperties:(NSDictionary *)properties;

#pragma clang diagnostic pop

@end
