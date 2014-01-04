#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUILocalNotification <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSCalendar *repeatCalendar;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic) NSCalendarUnit repeatInterval;
@property (nonatomic, copy) NSString *alertAction;
@property (nonatomic) NSInteger applicationIconBadgeNumber;
@property (nonatomic, copy) NSString *alertBody;
@property (nonatomic, copy) NSString *soundName;
@property (nonatomic, copy) NSString *alertLaunchImage;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic) BOOL hasAction;

#pragma clang diagnostic pop

@end
