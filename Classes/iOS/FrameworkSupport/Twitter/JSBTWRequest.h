#import <Foundation/Foundation.h>
#import <Social/SLRequest.h>

@import Twitter;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBTWRequest <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) TWRequestMethod requestMethod;
@property (nonatomic, readonly) NSDictionary *parameters;

- (id)initWithURL:(NSURL *)url parameters:(NSDictionary *)parameters requestMethod:(TWRequestMethod)requestMethod;
- (void)addMultiPartData:(NSData *)data withName:(NSString *)name type:(NSString *)type;
- (NSURLRequest *)signedURLRequest;
- (void)performRequestWithHandler:(TWRequestHandler)handler;

#pragma clang diagnostic pop

@end
