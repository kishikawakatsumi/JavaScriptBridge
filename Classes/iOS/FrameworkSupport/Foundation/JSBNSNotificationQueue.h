#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSNotificationQueue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)defaultQueue;

- (id)initWithNotificationCenter:(NSNotificationCenter *)notificationCenter;
- (void)enqueueNotification:(NSNotification *)notification postingStyle:(NSPostingStyle)postingStyle;
- (void)enqueueNotification:(NSNotification *)notification postingStyle:(NSPostingStyle)postingStyle coalesceMask:(NSUInteger)coalesceMask forModes:(NSArray *)modes;
- (void)dequeueNotificationsMatching:(NSNotification *)notification coalesceMask:(NSUInteger)coalesceMask;

#pragma clang diagnostic pop

@end
