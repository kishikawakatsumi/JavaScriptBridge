#import <Foundation/Foundation.h>
#import <StoreKit/StoreKitDefines.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) id delegate;

- (void)cancel;
- (void)start;

#pragma clang diagnostic pop

@end
