#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/NSText.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSTextTab <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSDictionary *options;
@property (readwrite) CGFloat paragraphSpacing;
@property (readwrite, copy) NSArray *tabStops;
@property (readwrite) CGFloat headIndent;
@property (readwrite) NSLineBreakMode lineBreakMode;
@property (readwrite) float hyphenationFactor;
@property (readwrite) NSTextAlignment alignment;
@property (readonly) CGFloat location;
@property (readwrite) CGFloat tailIndent;
@property (readwrite) CGFloat firstLineHeadIndent;
@property (readwrite) CGFloat lineSpacing;
@property (readwrite) CGFloat minimumLineHeight;
@property (readwrite) CGFloat paragraphSpacingBefore;
@property (readwrite) CGFloat maximumLineHeight;
@property (readwrite) CGFloat lineHeightMultiple;
@property (readwrite) NSWritingDirection baseWritingDirection;
@property (readwrite) CGFloat defaultTabInterval;

+ (NSCharacterSet *)columnTerminatorsForLocale:(NSLocale *)aLocale;

- (id)initWithTextAlignment:(NSTextAlignment)alignment location:(CGFloat)loc options:(NSDictionary *)options;

#pragma clang diagnostic pop

@end
