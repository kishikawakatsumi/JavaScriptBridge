#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSData;

@protocol JSBNSMutableData <JSExport, JSBNSData>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)dataWithCapacity:(NSUInteger)aNumItems;
+ (id)dataWithLength:(NSUInteger)length;

- (void *)mutableBytes;
- (void)setLength:(NSUInteger)length;
- (void)appendBytes:(const void *)bytes length:(NSUInteger)length;
- (void)appendData:(NSData *)other;
- (void)increaseLengthBy:(NSUInteger)extraLength;
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;
- (void)resetBytesInRange:(NSRange)range;
- (void)setData:(NSData *)data;
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)replacementBytes length:(NSUInteger)replacementLength;
- (id)initWithCapacity:(NSUInteger)capacity;
- (id)initWithLength:(NSUInteger)length;

#pragma clang diagnostic pop

@end
