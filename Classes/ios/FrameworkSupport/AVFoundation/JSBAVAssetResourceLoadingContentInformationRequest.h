#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetResourceLoadingContentInformationRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) long long currentOffset;
@property (nonatomic) long long contentLength;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, readonly) long long requestedOffset;
@property (nonatomic, copy) NSURLRequest *redirect;
@property (nonatomic, getter = isByteRangeAccessSupported) BOOL byteRangeAccessSupported;
@property (nonatomic, readonly, getter = isCancelled) BOOL cancelled;
@property (nonatomic, readonly) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
@property (nonatomic, readonly) AVAssetResourceLoadingDataRequest *dataRequest;
@property (nonatomic, readonly) dispatch_queue_t delegateQueue;
@property (nonatomic, readonly) id delegate;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, copy) NSURLResponse *response;
@property (nonatomic, readonly, getter = isFinished) BOOL finished;
@property (nonatomic, readonly) NSInteger requestedLength;

#pragma clang diagnostic pop

@end
