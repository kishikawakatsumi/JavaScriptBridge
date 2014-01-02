#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSTextCheckingResult.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSRegularExpression <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *pattern;
@property (readonly) NSUInteger numberOfCaptureGroups;
@property (readonly) NSRegularExpressionOptions options;
@property (readonly) NSTextCheckingTypes checkingTypes;

+ (NSRegularExpression *)regularExpressionWithPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options error:(NSError **)error;
+ (NSString *)escapedPatternForString:(NSString *)string;
+ (NSString *)escapedTemplateForString:(NSString *)string;

- (id)initWithPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options error:(NSError **)error;
- (void)enumerateMatchesInString:(NSString *)string options:(NSMatchingOptions)options range:(NSRange)range usingBlock:(void (^)(NSTextCheckingResult *result , NSMatchingFlags flags , BOOL *stop))block;
- (NSArray *)matchesInString:(NSString *)string options:(NSMatchingOptions)options range:(NSRange)range;
- (NSUInteger)numberOfMatchesInString:(NSString *)string options:(NSMatchingOptions)options range:(NSRange)range;
- (NSTextCheckingResult *)firstMatchInString:(NSString *)string options:(NSMatchingOptions)options range:(NSRange)range;
- (NSRange)rangeOfFirstMatchInString:(NSString *)string options:(NSMatchingOptions)options range:(NSRange)range;
- (NSString *)stringByReplacingMatchesInString:(NSString *)string options:(NSMatchingOptions)options range:(NSRange)range withTemplate:(NSString *)templ;
- (NSUInteger)replaceMatchesInString:(NSMutableString *)string options:(NSMatchingOptions)options range:(NSRange)range withTemplate:(NSString *)templ;
- (NSString *)replacementStringForResult:(NSTextCheckingResult *)result inString:(NSString *)string offset:(NSInteger)offset template:(NSString *)templ;

#pragma clang diagnostic pop

@end
