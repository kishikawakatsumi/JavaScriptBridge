#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSNotification <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (instancetype)notificationWithName:(NSString *)aName object:(id)anObject;
+ (instancetype)notificationWithName:(NSString *)aName object:(id)anObject userInfo:(NSDictionary *)aUserInfo;

- (NSString *)name;
- (id)object;
- (NSDictionary *)userInfo;
- (instancetype)initWithName:(NSString *)name object:(id)object userInfo:(NSDictionary *)userInfo;
- (id)init;

#pragma clang diagnostic pop

@end
