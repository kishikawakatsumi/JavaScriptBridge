#import <Foundation/NSCoder.h>
#import <Foundation/NSPropertyList.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSCoder;

@protocol JSBNSKeyedArchiver <JSExport, JSBNSCoder>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSData *)archivedDataWithRootObject:(id)rootObject;
+ (BOOL)archiveRootObject:(id)rootObject toFile:(NSString *)path;
+ (void)setClassName:(NSString *)codedName forClass:(Class)cls;
+ (NSString *)classNameForClass:(Class)cls;

- (id)initForWritingWithMutableData:(NSMutableData *)data;
- (void)setDelegate:(id <NSKeyedArchiverDelegate>)delegate;
- (id <NSKeyedArchiverDelegate>)delegate;
- (void)setOutputFormat:(NSPropertyListFormat)format;
- (NSPropertyListFormat)outputFormat;
- (void)finishEncoding;
- (void)setClassName:(NSString *)codedName forClass:(Class)cls;
- (NSString *)classNameForClass:(Class)cls;
- (void)encodeObject:(id)objv forKey:(NSString *)key;
- (void)encodeConditionalObject:(id)objv forKey:(NSString *)key;
- (void)encodeBool:(BOOL)boolv forKey:(NSString *)key;
- (void)encodeInt:(int)intv forKey:(NSString *)key;
- (void)encodeInt32:(int32_t)intv forKey:(NSString *)key;
- (void)encodeInt64:(int64_t)intv forKey:(NSString *)key;
- (void)encodeFloat:(float)realv forKey:(NSString *)key;
- (void)encodeDouble:(double)realv forKey:(NSString *)key;
- (void)encodeBytes:(const uint8_t *)bytesp length:(NSUInteger)lenv forKey:(NSString *)key;
- (void)setRequiresSecureCoding:(BOOL)b;

#pragma clang diagnostic pop

@end
