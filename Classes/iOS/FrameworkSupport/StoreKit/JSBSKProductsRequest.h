#import <StoreKit/SKRequest.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBSKRequest;

@protocol JSBSKProductsRequest <JSExport, JSBSKRequest>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *invalidProductIdentifiers;
@property (nonatomic, readonly) NSArray *products;

- (id)initWithProductIdentifiers:(NSSet *)productIdentifiers;

#pragma clang diagnostic pop

@end
