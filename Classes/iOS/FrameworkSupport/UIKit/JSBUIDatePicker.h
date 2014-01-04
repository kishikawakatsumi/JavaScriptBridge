#import <Foundation/Foundation.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIControl;

@protocol JSBUIDatePicker <JSExport, JSBUIControl>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) UIDatePickerMode datePickerMode;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic) NSTimeInterval countDownDuration;
@property (nonatomic) NSInteger minuteInterval;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDate *minimumDate;
@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *maximumDate;

- (void)setDate:(NSDate *)date animated:(BOOL)animated;

#pragma clang diagnostic pop

@end
