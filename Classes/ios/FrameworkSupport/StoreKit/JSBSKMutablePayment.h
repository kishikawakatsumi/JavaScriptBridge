#import <Foundation/Foundation.h>
#import <StoreKit/StoreKitDefines.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBSKPayment;

@protocol JSBSKMutablePayment <JSExport, JSBSKPayment>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readwrite) NSInteger quantity;
@property (nonatomic, copy, readwrite) NSData *requestData;
@property (nonatomic, copy, readwrite) NSString *applicationUsername;
@property (nonatomic, copy, readwrite) NSString *productIdentifier;

#pragma clang diagnostic pop

@end
