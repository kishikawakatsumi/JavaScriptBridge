#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLAuthenticationChallenge <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithProtectionSpace:(NSURLProtectionSpace *)space proposedCredential:(NSURLCredential *)credential previousFailureCount:(NSInteger)previousFailureCount failureResponse:(NSURLResponse *)response error:(NSError *)error sender:(id <NSURLAuthenticationChallengeSender>)sender;
- (id)initWithAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge sender:(id <NSURLAuthenticationChallengeSender>)sender;
- (NSURLProtectionSpace *)protectionSpace;
- (NSURLCredential *)proposedCredential;
- (NSInteger)previousFailureCount;
- (NSURLResponse *)failureResponse;
- (NSError *)error;
- (id <NSURLAuthenticationChallengeSender>)sender;

#pragma clang diagnostic pop

@end
