#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBStoreKitTests : XCTestCase

@end

@implementation JSBStoreKitTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testInstantiation
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"StoreKit"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var skdownload = SKDownload.new();"];
    value = context[@"skdownload"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skpayment = SKPayment.new();"];
    value = context[@"skpayment"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skpaymentqueue = SKPaymentQueue.new();"];
    value = context[@"skpaymentqueue"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skpaymenttransaction = SKPaymentTransaction.new();"];
    value = context[@"skpaymenttransaction"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skproduct = SKProduct.new();"];
    value = context[@"skproduct"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skproductsresponse = SKProductsResponse.new();"];
    value = context[@"skproductsresponse"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skrequest = SKRequest.new();"];
    value = context[@"skrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skmutablepayment = SKMutablePayment.new();"];
    value = context[@"skmutablepayment"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skproductsrequest = SKProductsRequest.new();"];
    value = context[@"skproductsrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skreceiptrefreshrequest = SKReceiptRefreshRequest.new();"];
    value = context[@"skreceiptrefreshrequest"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var skstoreproductviewcontroller = SKStoreProductViewController.new();"];
    value = context[@"skstoreproductviewcontroller"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
