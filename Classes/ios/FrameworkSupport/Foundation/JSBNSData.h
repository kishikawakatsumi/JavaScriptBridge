#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSData <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)data;
+ (id)dataWithBytes:(const void *)bytes length:(NSUInteger)length;
+ (id)dataWithBytesNoCopy:(void *)bytes length:(NSUInteger)length;
+ (id)dataWithBytesNoCopy:(void *)bytes length:(NSUInteger)length freeWhenDone:(BOOL)b;
+ (id)dataWithContentsOfFile:(NSString *)path options:(NSDataReadingOptions)readOptionsMask error:(NSError **)errorPtr;
+ (id)dataWithContentsOfURL:(NSURL *)url options:(NSDataReadingOptions)readOptionsMask error:(NSError **)errorPtr;
+ (id)dataWithContentsOfFile:(NSString *)path;
+ (id)dataWithContentsOfURL:(NSURL *)url;
+ (id)dataWithData:(NSData *)data;
+ (id)dataWithContentsOfMappedFile:(NSString *)path;

- (NSUInteger)length;
- (const void *)bytes;
- (NSString *)description;
- (void)getBytes:(void *)buffer length:(NSUInteger)length;
- (void)getBytes:(void *)buffer range:(NSRange)range;
- (BOOL)isEqualToData:(NSData *)other;
- (NSData *)subdataWithRange:(NSRange)range;
- (BOOL)writeToFile:(NSString *)path atomically:(BOOL)useAuxiliaryFile;
- (BOOL)writeToURL:(NSURL *)url atomically:(BOOL)atomically;
- (BOOL)writeToFile:(NSString *)path options:(NSDataWritingOptions)writeOptionsMask error:(NSError **)errorPtr;
- (BOOL)writeToURL:(NSURL *)url options:(NSDataWritingOptions)writeOptionsMask error:(NSError **)errorPtr;
- (NSRange)rangeOfData:(NSData *)dataToFind options:(NSDataSearchOptions)mask range:(NSRange)searchRange;
- (void)enumerateByteRangesUsingBlock:(void (^)(const void *bytes , NSRange byteRange , BOOL *stop))block;
- (id)initWithBytes:(const void *)bytes length:(NSUInteger)length;
- (id)initWithBytesNoCopy:(void *)bytes length:(NSUInteger)length;
- (id)initWithBytesNoCopy:(void *)bytes length:(NSUInteger)length freeWhenDone:(BOOL)b;
- (id)initWithBytesNoCopy:(void *)bytes length:(NSUInteger)length deallocator:(void (^)(void *bytes , NSUInteger length))deallocator;
- (id)initWithContentsOfFile:(NSString *)path options:(NSDataReadingOptions)readOptionsMask error:(NSError **)errorPtr;
- (id)initWithContentsOfURL:(NSURL *)url options:(NSDataReadingOptions)readOptionsMask error:(NSError **)errorPtr;
- (id)initWithContentsOfFile:(NSString *)path;
- (id)initWithContentsOfURL:(NSURL *)url;
- (id)initWithData:(NSData *)data;
- (id)initWithBase64EncodedString:(NSString *)base64String options:(NSDataBase64DecodingOptions)options;
- (NSString *)base64EncodedStringWithOptions:(NSDataBase64EncodingOptions)options;
- (id)initWithBase64EncodedData:(NSData *)base64Data options:(NSDataBase64DecodingOptions)options;
- (NSData *)base64EncodedDataWithOptions:(NSDataBase64EncodingOptions)options;
- (void)getBytes:(void *)buffer;
- (id)initWithContentsOfMappedFile:(NSString *)path;
- (id)initWithBase64Encoding:(NSString *)base64String;
- (NSString *)base64Encoding;

#pragma clang diagnostic pop

@end
