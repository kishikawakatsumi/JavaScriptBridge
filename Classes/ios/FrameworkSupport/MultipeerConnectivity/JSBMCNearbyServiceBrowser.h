#import <UIKit/UIKit.h>

@import MultipeerConnectivity;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMCNearbyServiceBrowser <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *serviceType;
@property (assign) id delegate;
@property (readonly) MCPeerID *myPeerID;

- (instancetype)initWithPeer:(MCPeerID *)myPeerID serviceType:(NSString *)serviceType;
- (void)startBrowsingForPeers;
- (void)stopBrowsingForPeers;
- (void)invitePeer:(MCPeerID *)peerID toSession:(MCSession *)session withContext:(NSData *)context timeout:(NSTimeInterval)timeout;

#pragma clang diagnostic pop

@end
