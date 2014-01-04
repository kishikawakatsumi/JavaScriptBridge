#import <Foundation/NSCoder.h>
#import <Foundation/NSPropertyList.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSCoder;

@protocol JSBNSKeyedUnarchiver <JSExport, JSBNSCoder>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)unarchiveObjectWithData:(NSData *)data;
+ (id)unarchiveObjectWithFile:(NSString *)path;
+ (void)setClass:(Class)cls forClassName:(NSString *)codedName;
+ (Class)classForClassName:(NSString *)codedName;

- (id)initForReadingWithData:(NSData *)data;
- (void)setDelegate:(id <NSKeyedUnarchiverDelegate>)delegate;
- (id <NSKeyedUnarchiverDelegate>)delegate;
- (void)finishDecoding;
- (void)setClass:(Class)cls forClassName:(NSString *)codedName;
- (Class)classForClassName:(NSString *)codedName;
- (BOOL)containsValueForKey:(NSString *)key;
- (id)decodeObjectForKey:(NSString *)key;
- (BOOL)decodeBoolForKey:(NSString *)key;
- (int)decodeIntForKey:(NSString *)key;
- (int32_t)decodeInt32ForKey:(NSString *)key;
- (int64_t)decodeInt64ForKey:(NSString *)key;
- (float)decodeFloatForKey:(NSString *)key;
- (double)decodeDoubleForKey:(NSString *)key;
- (const uint8_t *)decodeBytesForKey:(NSString *)key returnedLength:(NSUInteger *)lengthp;
- (void)setRequiresSecureCoding:(BOOL)b;

#pragma clang diagnostic pop

@end
