#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSError <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)errorWithDomain:(NSString *)domain code:(NSInteger)code userInfo:(NSDictionary *)dict;

- (id)initWithDomain:(NSString *)domain code:(NSInteger)code userInfo:(NSDictionary *)dict;
- (NSString *)domain;
- (NSInteger)code;
- (NSDictionary *)userInfo;
- (NSString *)localizedDescription;
- (NSString *)localizedFailureReason;
- (NSString *)localizedRecoverySuggestion;
- (NSArray *)localizedRecoveryOptions;
- (id)recoveryAttempter;
- (NSString *)helpAnchor;

#pragma clang diagnostic pop

@end
