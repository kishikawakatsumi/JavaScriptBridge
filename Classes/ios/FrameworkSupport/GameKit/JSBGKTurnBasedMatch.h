#import <GameKit/GKPlayer.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKTurnBasedMatch <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, retain) NSArray *participants;
@property (readonly) NSUInteger exchangeMaxInitiatedExchangesPerPlayer;
@property (readonly, readonly, readonly) GKTurnBasedExchangeStatus status;
@property (readonly, retain) NSArray *activeExchanges;
@property (readonly) NSArray *replies;
@property (assign) NSObject *delegate;
@property (readonly) NSUInteger exchangeDataMaximumSize;
@property (readonly) NSString *exchangeID;
@property (readonly, readonly, copy) NSDate *timeoutDate;
@property (readonly, retain) NSData *matchData;
@property (readonly, retain) NSArray *exchanges;
@property (assign) GKTurnBasedMatchOutcome matchOutcome;
@property (readonly, retain) NSArray *completedExchanges;
@property (readonly) NSDate *sendDate;
@property (readonly, copy) NSString *playerID;
@property (readonly) NSUInteger matchDataMaximumSize;
@property (readonly) GKTurnBasedParticipant *sender;
@property (readwrite, copy) NSString *message;
@property (readonly) NSDate *completionDate;
@property (readonly) GKTurnBasedParticipant *recipient;
@property (readonly) NSArray *recipients;
@property (readonly, retain) GKTurnBasedParticipant *currentParticipant;
@property (readonly, retain) NSDate *creationDate;
@property (readonly, retain) NSString *matchID;
@property (readonly, copy) NSDate *lastTurnDate;
@property (readonly, readonly) NSData *data;

+ (void)findMatchForRequest:(GKMatchRequest *)request withCompletionHandler:(void (^)(GKTurnBasedMatch *match , NSError *error))completionHandler;
+ (void)loadMatchesWithCompletionHandler:(void (^)(NSArray *matches , NSError *error))completionHandler;
+ (void)loadMatchWithID:(NSString *)matchID withCompletionHandler:(void (^)(GKTurnBasedMatch *match , NSError *error))completionHandler;

- (void)setLocalizableMessageWithKey:(NSString *)key arguments:(NSArray *)arguments;
- (void)rematchWithCompletionHandler:(void (^)(GKTurnBasedMatch *match , NSError *error))completionHandler;
- (void)acceptInviteWithCompletionHandler:(void (^)(GKTurnBasedMatch *match , NSError *error))completionHandler;
- (void)declineInviteWithCompletionHandler:(void (^)(NSError *error))completionHandler;
- (void)removeWithCompletionHandler:(void (^)(NSError *error))completionHandler;
- (void)loadMatchDataWithCompletionHandler:(void (^)(NSData *matchData , NSError *error))completionHandler;
- (void)endTurnWithNextParticipants:(NSArray *)nextParticipants turnTimeout:(NSTimeInterval)timeout matchData:(NSData *)matchData completionHandler:(void (^)(NSError *error))completionHandler;
- (void)participantQuitInTurnWithOutcome:(GKTurnBasedMatchOutcome)matchOutcome nextParticipants:(NSArray *)nextParticipants turnTimeout:(NSTimeInterval)timeout matchData:(NSData *)matchData completionHandler:(void (^)(NSError *error))completionHandler;
- (void)participantQuitOutOfTurnWithOutcome:(GKTurnBasedMatchOutcome)matchOutcome withCompletionHandler:(void (^)(NSError *error))completionHandler;
- (void)endMatchInTurnWithMatchData:(NSData *)matchData completionHandler:(void (^)(NSError *error))completionHandler;
- (void)endMatchInTurnWithMatchData:(NSData *)matchData scores:(NSArray *)scores achievements:(NSArray *)achievements completionHandler:(void (^)(NSError *error))completionHandler;
- (void)saveCurrentTurnWithMatchData:(NSData *)matchData completionHandler:(void (^)(NSError *error))completionHandler;
- (void)saveMergedMatchData:(NSData *)matchData withResolvedExchanges:(NSArray *)exchanges completionHandler:(void (^)(NSError *error))completionHandler;
- (void)sendExchangeToParticipants:(NSArray *)participants data:(NSData *)data localizableMessageKey:(NSString *)key arguments:(NSArray *)arguments timeout:(NSTimeInterval)timeout completionHandler:(void (^)(GKTurnBasedExchange *exchange , NSError *error))completionHandler;
- (void)sendReminderToParticipants:(NSArray *)participants localizableMessageKey:(NSString *)key arguments:(NSArray *)arguments completionHandler:(void (^)(NSError *error))completionHandler;
- (void)endTurnWithNextParticipant:(GKTurnBasedParticipant *)nextParticipant matchData:(NSData *)matchData completionHandler:(void (^)(NSError *error))completionHandler;
- (void)participantQuitInTurnWithOutcome:(GKTurnBasedMatchOutcome)matchOutcome nextParticipant:(GKTurnBasedParticipant *)nextParticipant matchData:(NSData *)matchData completionHandler:(void (^)(NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
