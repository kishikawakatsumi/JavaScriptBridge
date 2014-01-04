#import <Foundation/Foundation.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKVoiceChat <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (assign, getter = isActive) BOOL active;
@property (copy) void (^playerStateUpdateHandler)(NSString *playerID, GKVoiceChatPlayerState state);
@property (readonly, copy) NSString *name;
@property (assign) float volume;
@property (readonly) NSArray *playerIDs;

+ (BOOL)isVoIPAllowed;

- (void)start;
- (void)stop;
- (void)setMute:(BOOL)isMuted forPlayer:(NSString *)playerID;

#pragma clang diagnostic pop

@end
