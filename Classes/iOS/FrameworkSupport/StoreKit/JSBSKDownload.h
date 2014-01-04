#import <Foundation/Foundation.h>
#import <StoreKit/StoreKitDefines.h>

@import StoreKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKDownload <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) SKDownloadState downloadState;
@property (nonatomic, readonly) long long contentLength;
@property (nonatomic, readonly) NSURL *contentURL;
@property (nonatomic, readonly) NSTimeInterval timeRemaining;
@property (nonatomic, readonly) SKPaymentTransaction *transaction;
@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) NSString *contentVersion;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) NSError *error;

#pragma clang diagnostic pop

@end
