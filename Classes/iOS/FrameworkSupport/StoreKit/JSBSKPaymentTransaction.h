#import <Foundation/Foundation.h>
#import <StoreKit/StoreKitDefines.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKPaymentTransaction <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *transactionIdentifier;
@property (nonatomic, readonly) NSData *transactionReceipt;
@property (nonatomic, readonly) SKPaymentTransactionState transactionState;
@property (nonatomic, readonly) SKPayment *payment;
@property (nonatomic, readonly) SKPaymentTransaction *originalTransaction;
@property (nonatomic, readonly) NSArray *downloads;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDate *transactionDate;

#pragma clang diagnostic pop

@end
