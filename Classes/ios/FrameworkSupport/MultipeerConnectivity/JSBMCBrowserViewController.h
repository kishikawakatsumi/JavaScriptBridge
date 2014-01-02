#import <UIKit/UIKit.h>

@import MultipeerConnectivity;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBMCBrowserViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (assign) NSUInteger maximumNumberOfPeers;
@property (readonly) MCNearbyServiceBrowser *browser;
@property (assign) id delegate;
@property (readonly) MCSession *session;
@property (assign) NSUInteger minimumNumberOfPeers;

- (instancetype)initWithServiceType:(NSString *)serviceType session:(MCSession *)session;
- (instancetype)initWithBrowser:(MCNearbyServiceBrowser *)browser session:(MCSession *)session;

#pragma clang diagnostic pop

@end
