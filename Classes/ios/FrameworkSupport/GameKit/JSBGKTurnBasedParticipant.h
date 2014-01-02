#import <GameKit/GKPlayer.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKTurnBasedParticipant <JSExport, JSBNSObject>

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

#pragma clang diagnostic pop

@end
