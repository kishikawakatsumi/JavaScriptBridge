#import <Foundation/Foundation.h>
#import <GameKit/GKDefines.h>
#import <GameKit/GKPublicProtocols.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKSession <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *peerID;
@property (readonly) NSString *displayName;
@property (readonly) GKSessionMode sessionMode;
@property (getter = isAvailable) BOOL available;
@property (readonly) NSString *sessionID;
@property (assign) id delegate;
@property (assign) NSTimeInterval disconnectTimeout;

- (id)initWithSessionID:(NSString *)sessionID displayName:(NSString *)name sessionMode:(GKSessionMode)mode;
- (NSString *)displayNameForPeer:(NSString *)peerID;
- (BOOL)sendData:(NSData *)data toPeers:(NSArray *)peers withDataMode:(GKSendDataMode)mode error:(NSError **)error;
- (BOOL)sendDataToAllPeers:(NSData *)data withDataMode:(GKSendDataMode)mode error:(NSError **)error;
- (void)setDataReceiveHandler:(id)handler withContext:(void *)context;
- (void)connectToPeer:(NSString *)peerID withTimeout:(NSTimeInterval)timeout;
- (void)cancelConnectToPeer:(NSString *)peerID;
- (BOOL)acceptConnectionFromPeer:(NSString *)peerID error:(NSError **)error;
- (void)denyConnectionFromPeer:(NSString *)peerID;
- (void)disconnectPeerFromAllPeers:(NSString *)peerID;
- (void)disconnectFromAllPeers;
- (NSArray *)peersWithConnectionState:(GKPeerConnectionState)state;

#pragma clang diagnostic pop

@end
