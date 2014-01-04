#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSURLResponse;

@protocol JSBNSHTTPURLResponse <JSExport, JSBNSURLResponse>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSString *)localizedStringForStatusCode:(NSInteger)statusCode;

- (id)initWithURL:(NSURL *)url statusCode:(NSInteger)statusCode HTTPVersion:(NSString *)HTTPVersion headerFields:(NSDictionary *)headerFields;
- (NSInteger)statusCode;
- (NSDictionary *)allHeaderFields;

#pragma clang diagnostic pop

@end
