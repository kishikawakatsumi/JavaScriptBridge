#import <Foundation/NSObject.h>
#import <Foundation/NSURLRequest.h>
#import <Foundation/NSHTTPCookieStorage.h>
#include<Security/SecureTransport.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSURLSessionDataTask;

@protocol JSBNSURLSessionUploadTask <JSExport, JSBNSURLSessionDataTask>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
