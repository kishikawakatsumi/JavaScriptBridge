#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSTextCheckingResult.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSRegularExpression;

@protocol JSBNSDataDetector <JSExport, JSBNSRegularExpression>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *pattern;
@property (readonly) NSUInteger numberOfCaptureGroups;
@property (readonly) NSRegularExpressionOptions options;
@property (readonly) NSTextCheckingTypes checkingTypes;

+ (NSDataDetector *)dataDetectorWithTypes:(NSTextCheckingTypes)checkingTypes error:(NSError **)error;

- (id)initWithTypes:(NSTextCheckingTypes)checkingTypes error:(NSError **)error;

#pragma clang diagnostic pop

@end
