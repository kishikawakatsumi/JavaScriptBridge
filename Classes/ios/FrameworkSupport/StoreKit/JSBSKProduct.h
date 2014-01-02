#import <Foundation/Foundation.h>
#import <StoreKit/StoreKitDefines.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKProduct <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly, getter = isDownloadable) BOOL downloadable;
@property (nonatomic, readonly) NSArray *downloadContentLengths;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *downloadContentVersion;
@property (nonatomic, readonly) NSLocale *priceLocale;

#pragma clang diagnostic pop

@end
