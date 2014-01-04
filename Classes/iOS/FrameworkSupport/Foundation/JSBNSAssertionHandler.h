#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <stdarg.h>
#import <setjmp.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSAssertionHandler <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSAssertionHandler *)currentHandler;

- (void)handleFailureInMethod:(SEL)selector object:(id)object file:(NSString *)fileName lineNumber:(NSInteger)line description:(NSString *)format , ...;
- (void)handleFailureInFunction:(NSString *)functionName file:(NSString *)fileName lineNumber:(NSInteger)line description:(NSString *)format , ...;

#pragma clang diagnostic pop

@end
