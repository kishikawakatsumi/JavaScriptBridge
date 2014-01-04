#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSProgress <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, getter = isPaused) BOOL paused;
@property (getter = isPausable) BOOL pausable;
@property (copy) void (^cancellationHandler)(void);
@property (copy) NSString *localizedAdditionalDescription;
@property (readonly, getter = isOld) BOOL old;
@property (readonly, getter = isIndeterminate) BOOL indeterminate;
@property (getter = isCancellable) BOOL cancellable;
@property (readonly, getter = isCancelled) BOOL cancelled;
@property (copy) void (^pausingHandler)(void);
@property (copy) NSString *localizedDescription;
@property (readonly) double fractionCompleted;
@property int64_t completedUnitCount;
@property (copy) NSString *kind;
@property int64_t totalUnitCount;

+ (NSProgress *)currentProgress;
+ (NSProgress *)progressWithTotalUnitCount:(int64_t)unitCount;
+ (id)addSubscriberForFileURL:(NSURL *)url withPublishingHandler:(NSProgressPublishingHandler)publishingHandler;
+ (void)removeSubscriber:(id)subscriber;

- (instancetype)initWithParent:(NSProgress *)parentProgressOrNil userInfo:(NSDictionary *)userInfoOrNil;
- (void)becomeCurrentWithPendingUnitCount:(int64_t)unitCount;
- (void)resignCurrent;
- (void)setUserInfoObject:(id)objectOrNil forKey:(NSString *)key;
- (void)cancel;
- (void)pause;
- (NSDictionary *)userInfo;
- (void)publish;
- (void)unpublish;

#pragma clang diagnostic pop

@end
