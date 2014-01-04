#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSCachedURLResponse <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (id)initWithResponse:(NSURLResponse *)response data:(NSData *)data;
- (id)initWithResponse:(NSURLResponse *)response data:(NSData *)data userInfo:(NSDictionary *)userInfo storagePolicy:(NSURLCacheStoragePolicy)storagePolicy;
- (NSURLResponse *)response;
- (NSData *)data;
- (NSDictionary *)userInfo;
- (NSURLCacheStoragePolicy)storagePolicy;

#pragma clang diagnostic pop

@end
