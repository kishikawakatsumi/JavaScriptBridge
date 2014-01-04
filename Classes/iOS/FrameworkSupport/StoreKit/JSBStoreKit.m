#import "JSBStoreKit.h"
#import "JSBSKDownload.h"
#import "JSBSKPayment.h"
#import "JSBSKPaymentQueue.h"
#import "JSBSKPaymentTransaction.h"
#import "JSBSKProduct.h"
#import "JSBSKProductsResponse.h"
#import "JSBSKRequest.h"
#import "JSBSKMutablePayment.h"
#import "JSBSKProductsRequest.h"
#import "JSBSKReceiptRefreshRequest.h"
#import "JSBSKStoreProductViewController.h"

@import ObjectiveC;

@implementation JSBStoreKit

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([SKDownload class], @protocol(JSBSKDownload));
    context[@"SKDownload"] = [SKDownload class];

    class_addProtocol([SKPayment class], @protocol(JSBSKPayment));
    context[@"SKPayment"] = [SKPayment class];

    class_addProtocol([SKPaymentQueue class], @protocol(JSBSKPaymentQueue));
    context[@"SKPaymentQueue"] = [SKPaymentQueue class];

    class_addProtocol([SKPaymentTransaction class], @protocol(JSBSKPaymentTransaction));
    context[@"SKPaymentTransaction"] = [SKPaymentTransaction class];

    class_addProtocol([SKProduct class], @protocol(JSBSKProduct));
    context[@"SKProduct"] = [SKProduct class];

    class_addProtocol([SKProductsResponse class], @protocol(JSBSKProductsResponse));
    context[@"SKProductsResponse"] = [SKProductsResponse class];

    class_addProtocol([SKRequest class], @protocol(JSBSKRequest));
    context[@"SKRequest"] = [SKRequest class];

    class_addProtocol([SKMutablePayment class], @protocol(JSBSKMutablePayment));
    context[@"SKMutablePayment"] = [SKMutablePayment class];

    class_addProtocol([SKProductsRequest class], @protocol(JSBSKProductsRequest));
    context[@"SKProductsRequest"] = [SKProductsRequest class];

    class_addProtocol([SKReceiptRefreshRequest class], @protocol(JSBSKReceiptRefreshRequest));
    context[@"SKReceiptRefreshRequest"] = [SKReceiptRefreshRequest class];

    class_addProtocol([SKStoreProductViewController class], @protocol(JSBSKStoreProductViewController));
    context[@"SKStoreProductViewController"] = [SKStoreProductViewController class];

#pragma clang diagnostic pop
}

@end
