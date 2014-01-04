#import <UIKit/UIKit.h>

@import MultipeerConnectivity;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMCNearbyServiceAdvertiser <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (assign) id delegate;
@property (readonly) NSString *serviceType;
@property (readonly) MCPeerID *myPeerID;
@property (readonly) NSDictionary *discoveryInfo;

- (instancetype)initWithPeer:(MCPeerID *)myPeerID discoveryInfo:(NSDictionary *)info serviceType:(NSString *)serviceType;
- (void)startAdvertisingPeer;
- (void)stopAdvertisingPeer;

#pragma clang diagnostic pop

@end
