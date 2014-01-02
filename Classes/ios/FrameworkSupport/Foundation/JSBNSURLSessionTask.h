#import <Foundation/NSObject.h>
#import <Foundation/NSURLRequest.h>
#import <Foundation/NSHTTPCookieStorage.h>
#include<Security/SecureTransport.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLSessionTask <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property NSTimeInterval timeoutIntervalForResource;
@property BOOL HTTPShouldSetCookies;
@property (retain) NSURLCache *URLCache;
@property (readonly) NSURLSessionTaskState state;
@property (readonly, copy) NSURLRequest *originalRequest;
@property BOOL sessionSendsLaunchEvents;
@property (readonly, copy) NSURLResponse *response;
@property BOOL allowsCellularAccess;
@property (readonly) int64_t countOfBytesSent;
@property (readonly, retain) id delegate;
@property (readonly) int64_t countOfBytesReceived;
@property (copy) NSString *taskDescription;
@property NSInteger HTTPMaximumConnectionsPerHost;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property BOOL HTTPShouldUsePipelining;
@property (readonly) int64_t countOfBytesExpectedToReceive;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly) NSUInteger taskIdentifier;
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property (readonly, copy) NSURLRequest *currentRequest;
@property SSLProtocol TLSMinimumSupportedProtocol;
@property (copy) NSDictionary *HTTPAdditionalHeaders;
@property (readonly, copy) NSString *identifier;
@property NSHTTPCookieAcceptPolicy HTTPCookieAcceptPolicy;
@property NSURLRequestCachePolicy requestCachePolicy;
@property NSTimeInterval timeoutIntervalForRequest;
@property (copy) NSDictionary *connectionProxyDictionary;
@property (readonly) int64_t countOfBytesExpectedToSend;
@property (copy) NSString *sessionDescription;
@property NSURLRequestNetworkServiceType networkServiceType;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (copy) NSArray *protocolClasses;
@property SSLProtocol TLSMaximumSupportedProtocol;
@property (readonly, copy) NSError *error;
@property (getter = isDiscretionary) BOOL discretionary;

- (void)cancel;
- (void)suspend;
- (void)resume;

#pragma clang diagnostic pop

@end
