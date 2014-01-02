#import <Foundation/NSFormatter.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSFormatter;

@protocol JSBNSByteCountFormatter <JSExport, JSBNSFormatter>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (getter = isAdaptive) BOOL adaptive;
@property NSByteCountFormatterUnits allowedUnits;
@property NSByteCountFormatterCountStyle countStyle;
@property BOOL includesUnit;
@property BOOL includesCount;
@property BOOL includesActualByteCount;
@property BOOL zeroPadsFractionDigits;
@property BOOL allowsNonnumericFormatting;

+ (NSString *)stringFromByteCount:(long long)byteCount countStyle:(NSByteCountFormatterCountStyle)countStyle;

- (NSString *)stringFromByteCount:(long long)byteCount;

#pragma clang diagnostic pop

@end
