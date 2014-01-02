#import <Foundation/Foundation.h>
#import <StoreKit/StoreKitDefines.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKPaymentQueue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *transactions;

+ (SKPaymentQueue *)defaultQueue;
+ (BOOL)canMakePayments;

- (void)addPayment:(SKPayment *)payment;
- (void)restoreCompletedTransactions;
- (void)restoreCompletedTransactionsWithApplicationUsername:(NSString *)username;
- (void)finishTransaction:(SKPaymentTransaction *)transaction;
- (void)startDownloads:(NSArray *)downloads;
- (void)pauseDownloads:(NSArray *)downloads;
- (void)resumeDownloads:(NSArray *)downloads;
- (void)cancelDownloads:(NSArray *)downloads;
- (void)addTransactionObserver:(id <SKPaymentTransactionObserver>)observer;
- (void)removeTransactionObserver:(id <SKPaymentTransactionObserver>)observer;

#pragma clang diagnostic pop

@end
