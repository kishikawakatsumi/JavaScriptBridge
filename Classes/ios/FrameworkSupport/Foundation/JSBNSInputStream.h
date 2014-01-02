#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSStream;

@protocol JSBNSInputStream <JSExport, JSBNSStream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)inputStreamWithData:(NSData *)data;
+ (id)inputStreamWithFileAtPath:(NSString *)path;
+ (id)inputStreamWithURL:(NSURL *)url;

- (NSInteger)read:(uint8_t *)buffer maxLength:(NSUInteger)len;
- (BOOL)getBuffer:(uint8_t **)buffer length:(NSUInteger *)len;
- (BOOL)hasBytesAvailable;
- (NSInteger)write:(const uint8_t *)buffer maxLength:(NSUInteger)len;
- (BOOL)hasSpaceAvailable;
- (id)initWithData:(NSData *)data;
- (id)initWithFileAtPath:(NSString *)path;
- (id)initWithURL:(NSURL *)url;

#pragma clang diagnostic pop

@end
