#import <Foundation/Foundation.h>
#import <Social/SocialDefines.h>
#import <Social/SLServiceTypes.h>

@import Social;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSLRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain) ACAccount *account;
@property (readonly) NSURL *URL;
@property (readonly) SLRequestMethod requestMethod;
@property (readonly) NSDictionary *parameters;

+ (SLRequest *)requestForServiceType:(NSString *)serviceType requestMethod:(SLRequestMethod)requestMethod URL:(NSURL *)url parameters:(NSDictionary *)parameters;

- (void)addMultipartData:(NSData *)data withName:(NSString *)name type:(NSString *)type filename:(NSString *)filename;
- (NSURLRequest *)preparedURLRequest;
JSExportAs(performRequestWithHandler,
- (void)__performRequestWithHandler:(JSValue *)handler);

#pragma clang diagnostic pop

@end
