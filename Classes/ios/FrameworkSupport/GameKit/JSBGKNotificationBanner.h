#import <Foundation/Foundation.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKNotificationBanner <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (void)showBannerWithTitle:(NSString *)title message:(NSString *)message completionHandler:(void (^)(void))completionHandler;
+ (void)showBannerWithTitle:(NSString *)title message:(NSString *)message duration:(NSTimeInterval)duration completionHandler:(void (^)(void))completionHandler;

#pragma clang diagnostic pop

@end
