#import <Foundation/Foundation.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKMatch <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSUInteger expectedPlayerCount;
@property (nonatomic, assign) id delegate;
@property (nonatomic, readonly) NSArray *playerIDs;

- (BOOL)sendData:(NSData *)data toPlayers:(NSArray *)playerIDs withDataMode:(GKMatchSendDataMode)mode error:(NSError **)error;
- (BOOL)sendDataToAllPlayers:(NSData *)data withDataMode:(GKMatchSendDataMode)mode error:(NSError **)error;
- (void)disconnect;
- (GKVoiceChat *)voiceChatWithName:(NSString *)name;
- (void)chooseBestHostPlayerWithCompletionHandler:(void (^)(NSString *playerID))completionHandler;
- (void)rematchWithCompletionHandler:(void (^)(GKMatch *match , NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
