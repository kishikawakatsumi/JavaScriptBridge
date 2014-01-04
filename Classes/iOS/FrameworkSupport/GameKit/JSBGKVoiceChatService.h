#import <Foundation/Foundation.h>
#import <GameKit/GKDefines.h>
#import <GameKit/GKPublicProtocols.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKVoiceChatService <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (assign) id client;
@property (readonly) float outputMeterLevel;
@property (nonatomic, getter = isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic, getter = isMicrophoneMuted) BOOL microphoneMuted;
@property (readonly) float inputMeterLevel;
@property (nonatomic) float remoteParticipantVolume;
@property (nonatomic, getter = isInputMeteringEnabled) BOOL inputMeteringEnabled;

+ (GKVoiceChatService *)defaultVoiceChatService;
+ (BOOL)isVoIPAllowed;

- (BOOL)startVoiceChatWithParticipantID:(NSString *)participantID error:(NSError **)error;
- (void)stopVoiceChatWithParticipantID:(NSString *)participantID;
- (BOOL)acceptCallID:(NSInteger)callID error:(NSError **)error;
- (void)denyCallID:(NSInteger)callID;
- (void)receivedRealTimeData:(NSData *)audio fromParticipantID:(NSString *)participantID;
- (void)receivedData:(NSData *)arbitraryData fromParticipantID:(NSString *)participantID;

#pragma clang diagnostic pop

@end
