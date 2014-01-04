#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLCredentialStorage <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSURLCredentialStorage *)sharedCredentialStorage;

- (NSDictionary *)credentialsForProtectionSpace:(NSURLProtectionSpace *)space;
- (NSDictionary *)allCredentials;
- (void)setCredential:(NSURLCredential *)credential forProtectionSpace:(NSURLProtectionSpace *)space;
- (void)removeCredential:(NSURLCredential *)credential forProtectionSpace:(NSURLProtectionSpace *)space;
- (void)removeCredential:(NSURLCredential *)credential forProtectionSpace:(NSURLProtectionSpace *)space options:(NSDictionary *)options;
- (NSURLCredential *)defaultCredentialForProtectionSpace:(NSURLProtectionSpace *)space;
- (void)setDefaultCredential:(NSURLCredential *)credential forProtectionSpace:(NSURLProtectionSpace *)space;

#pragma clang diagnostic pop

@end
