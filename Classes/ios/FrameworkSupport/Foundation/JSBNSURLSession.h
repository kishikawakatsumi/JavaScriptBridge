#import <Foundation/NSObject.h>
#import <Foundation/NSURLRequest.h>
#import <Foundation/NSHTTPCookieStorage.h>
#include<Security/SecureTransport.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSURLSession <JSExport, JSBNSObject>

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

+ (NSURLSession *)sharedSession;
+ (NSURLSession *)sessionWithConfiguration:(NSURLSessionConfiguration *)configuration;
+ (NSURLSession *)sessionWithConfiguration:(NSURLSessionConfiguration *)configuration delegate:(id <NSURLSessionDelegate>)delegate delegateQueue:(NSOperationQueue *)queue;
+ (NSURLSessionConfiguration *)defaultSessionConfiguration;
+ (NSURLSessionConfiguration *)ephemeralSessionConfiguration;
+ (NSURLSessionConfiguration *)backgroundSessionConfiguration:(NSString *)identifier;

- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (void)resetWithCompletionHandler:(void (^)(void))completionHandler;
- (void)flushWithCompletionHandler:(void (^)(void))completionHandler;
- (void)getTasksWithCompletionHandler:(void (^)(NSArray *dataTasks , NSArray *uploadTasks , NSArray *downloadTasks))completionHandler;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)request;
- (NSURLSessionDataTask *)dataTaskWithURL:(NSURL *)url;
- (NSURLSessionUploadTask *)uploadTaskWithRequest:(NSURLRequest *)request fromFile:(NSURL *)fileURL;
- (NSURLSessionUploadTask *)uploadTaskWithRequest:(NSURLRequest *)request fromData:(NSData *)bodyData;
- (NSURLSessionUploadTask *)uploadTaskWithStreamedRequest:(NSURLRequest *)request;
- (NSURLSessionDownloadTask *)downloadTaskWithRequest:(NSURLRequest *)request;
- (NSURLSessionDownloadTask *)downloadTaskWithURL:(NSURL *)url;
- (NSURLSessionDownloadTask *)downloadTaskWithResumeData:(NSData *)resumeData;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)request completionHandler:(void (^)(NSData *data , NSURLResponse *response , NSError *error))completionHandler;
- (NSURLSessionDataTask *)dataTaskWithURL:(NSURL *)url completionHandler:(void (^)(NSData *data , NSURLResponse *response , NSError *error))completionHandler;
- (NSURLSessionUploadTask *)uploadTaskWithRequest:(NSURLRequest *)request fromFile:(NSURL *)fileURL completionHandler:(void (^)(NSData *data , NSURLResponse *response , NSError *error))completionHandler;
- (NSURLSessionUploadTask *)uploadTaskWithRequest:(NSURLRequest *)request fromData:(NSData *)bodyData completionHandler:(void (^)(NSData *data , NSURLResponse *response , NSError *error))completionHandler;
- (NSURLSessionDownloadTask *)downloadTaskWithRequest:(NSURLRequest *)request completionHandler:(void (^)(NSURL *location , NSURLResponse *response , NSError *error))completionHandler;
- (NSURLSessionDownloadTask *)downloadTaskWithURL:(NSURL *)url completionHandler:(void (^)(NSURL *location , NSURLResponse *response , NSError *error))completionHandler;
- (NSURLSessionDownloadTask *)downloadTaskWithResumeData:(NSData *)resumeData completionHandler:(void (^)(NSURL *location , NSURLResponse *response , NSError *error))completionHandler;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)cancelByProducingResumeData:(void (^)(NSData *resumeData))completionHandler;
- (void)URLSession:(NSURLSession *)session didBecomeInvalidWithError:(NSError *)error;
- (void)URLSession:(NSURLSession *)session didReceiveChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition disposition , NSURLCredential *credential))completionHandler;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)session;
- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task willPerformHTTPRedirection:(NSHTTPURLResponse *)response newRequest:(NSURLRequest *)request completionHandler:(void (^)(NSURLRequest *))completionHandler;
- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didReceiveChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition disposition , NSURLCredential *credential))completionHandler;
- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task needNewBodyStream:(void (^)(NSInputStream *bodyStream))completionHandler;
- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error;
- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveResponse:(NSURLResponse *)response completionHandler:(void (^)(NSURLSessionResponseDisposition disposition))completionHandler;
- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didBecomeDownloadTask:(NSURLSessionDownloadTask *)downloadTask;
- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveData:(NSData *)data;
- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask willCacheResponse:(NSCachedURLResponse *)proposedResponse completionHandler:(void (^)(NSCachedURLResponse *cachedResponse))completionHandler;
- (void)URLSession:(NSURLSession *)session downloadTask:(NSURLSessionDownloadTask *)downloadTask didFinishDownloadingToURL:(NSURL *)location;
- (void)URLSession:(NSURLSession *)session downloadTask:(NSURLSessionDownloadTask *)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;
- (void)URLSession:(NSURLSession *)session downloadTask:(NSURLSessionDownloadTask *)downloadTask didResumeAtOffset:(int64_t)fileOffset expectedTotalBytes:(int64_t)expectedTotalBytes;
- (NSURLSessionDataTask *)dataTaskWithHTTPGetRequest:(NSURL *)url;
- (NSURLSessionDataTask *)dataTaskWithHTTPGetRequest:(NSURL *)url completionHandler:(void (^)(NSData *data , NSURLResponse *response , NSError *error))completionHandler;

#pragma clang diagnostic pop

@end
