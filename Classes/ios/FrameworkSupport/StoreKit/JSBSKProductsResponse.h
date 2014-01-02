#import <StoreKit/SKRequest.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKProductsResponse <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *invalidProductIdentifiers;
@property (nonatomic, assign) id delegate;
@property (nonatomic, readonly) NSArray *products;

#pragma clang diagnostic pop

@end
