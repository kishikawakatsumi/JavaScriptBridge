#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSStream;

@protocol JSBNSOutputStream <JSExport, JSBNSStream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)inputStreamWithData:(NSData *)data;
+ (id)inputStreamWithFileAtPath:(NSString *)path;
+ (id)inputStreamWithURL:(NSURL *)url;
+ (id)outputStreamToMemory;
+ (id)outputStreamToBuffer:(uint8_t *)buffer capacity:(NSUInteger)capacity;
+ (id)outputStreamToFileAtPath:(NSString *)path append:(BOOL)shouldAppend;
+ (id)outputStreamWithURL:(NSURL *)url append:(BOOL)shouldAppend;

- (NSInteger)write:(const uint8_t *)buffer maxLength:(NSUInteger)len;
- (BOOL)hasSpaceAvailable;
- (id)initWithData:(NSData *)data;
- (id)initWithFileAtPath:(NSString *)path;
- (id)initWithURL:(NSURL *)url;
- (id)initToMemory;
- (id)initToBuffer:(uint8_t *)buffer capacity:(NSUInteger)capacity;
- (id)initToFileAtPath:(NSString *)path append:(BOOL)shouldAppend;
- (id)initWithURL:(NSURL *)url append:(BOOL)shouldAppend;

#pragma clang diagnostic pop

@end
