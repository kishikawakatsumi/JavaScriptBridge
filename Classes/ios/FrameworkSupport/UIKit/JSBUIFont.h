#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIFont.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIFont <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (CGFloat)labelFontSize;
+ (CGFloat)buttonFontSize;
+ (CGFloat)smallSystemFontSize;
+ (CGFloat)systemFontSize;
+ (UIFont *)preferredFontForTextStyle:(NSString *)style;
+ (UIFont *)fontWithName:(NSString *)fontName size:(CGFloat)fontSize;
+ (NSArray *)familyNames;
+ (NSArray *)fontNamesForFamilyName:(NSString *)familyName;
+ (UIFont *)systemFontOfSize:(CGFloat)fontSize;
+ (UIFont *)boldSystemFontOfSize:(CGFloat)fontSize;
+ (UIFont *)italicSystemFontOfSize:(CGFloat)fontSize;
+ (UIFont *)fontWithDescriptor:(UIFontDescriptor *)descriptor size:(CGFloat)pointSize;

- (UIFont *)fontWithSize:(CGFloat)fontSize;
- (UIFontDescriptor *)fontDescriptor;

#pragma clang diagnostic pop

@end
