#import <Foundation/NSObject.h>
#import <Foundation/NSURLRequest.h>
#import <Foundation/NSHTTPCookieStorage.h>
#include<Security/SecureTransport.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSURLSessionTask;

@protocol JSBNSURLSessionDataTask <JSExport, JSBNSURLSessionTask>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
