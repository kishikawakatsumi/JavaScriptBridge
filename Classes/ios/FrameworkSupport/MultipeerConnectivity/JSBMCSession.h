#import <Foundation/Foundation.h>

@import MultipeerConnectivity;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMCSession <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSArray *connectedPeers;
@property (assign) id delegate;
@property (readonly) NSArray *securityIdentity;
@property (readonly) MCPeerID *myPeerID;
@property (readonly) MCEncryptionPreference encryptionPreference;

- (instancetype)initWithPeer:(MCPeerID *)myPeerID;
- (instancetype)initWithPeer:(MCPeerID *)myPeerID securityIdentity:(NSArray *)identity encryptionPreference:(MCEncryptionPreference)encryptionPreference;
- (BOOL)sendData:(NSData *)data toPeers:(NSArray *)peerIDs withMode:(MCSessionSendDataMode)mode error:(NSError **)error;
- (void)disconnect;
- (NSProgress *)sendResourceAtURL:(NSURL *)resourceURL withName:(NSString *)resourceName toPeer:(MCPeerID *)peerID withCompletionHandler:(void (^)(NSError *error))completionHandler;
- (NSOutputStream *)startStreamWithName:(NSString *)streamName toPeer:(MCPeerID *)peerID error:(NSError **)error;
- (void)session:(MCSession *)session peer:(MCPeerID *)peerID didChangeState:(MCSessionState)state;
- (void)session:(MCSession *)session didReceiveData:(NSData *)data fromPeer:(MCPeerID *)peerID;
- (void)session:(MCSession *)session didReceiveStream:(NSInputStream *)stream withName:(NSString *)streamName fromPeer:(MCPeerID *)peerID;
- (void)session:(MCSession *)session didStartReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID withProgress:(NSProgress *)progress;
- (void)session:(MCSession *)session didFinishReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID atURL:(NSURL *)localURL withError:(NSError *)error;
- (void)session:(MCSession *)session didReceiveCertificate:(NSArray *)certificate fromPeer:(MCPeerID *)peerID certificateHandler:(void (^)(BOOL accept))certificateHandler;
- (void)nearbyConnectionDataForPeer:(MCPeerID *)peerID withCompletionHandler:(void (^)(NSData *connectionData , NSError *error))completionHandler;
- (void)connectPeer:(MCPeerID *)peerID withNearbyConnectionData:(NSData *)data;
- (void)cancelConnectPeer:(MCPeerID *)peerID;

#pragma clang diagnostic pop

@end
