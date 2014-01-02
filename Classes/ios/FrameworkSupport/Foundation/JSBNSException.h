#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <stdarg.h>
#import <setjmp.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSException <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSException *)exceptionWithName:(NSString *)name reason:(NSString *)reason userInfo:(NSDictionary *)userInfo;
+ (void)raise:(NSString *)name format:(NSString *)format , ...;
+ (void)raise:(NSString *)name format:(NSString *)format arguments:(va_list)argList;

- (id)initWithName:(NSString *)aName reason:(NSString *)aReason userInfo:(NSDictionary *)aUserInfo;
- (NSString *)name;
- (NSString *)reason;
- (NSDictionary *)userInfo;
- (NSArray *)callStackReturnAddresses;
- (NSArray *)callStackSymbols;
- (void)raise;

#pragma clang diagnostic pop

@end
