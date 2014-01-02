#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSNetService <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *domain;
@property (readonly) NSInteger port;
@property (readonly, copy) NSArray *addresses;
@property (readonly, copy) NSString *type;
@property (assign) id delegate;
@property BOOL includesPeerToPeer;
@property (readonly, copy) NSString *hostName;

+ (NSDictionary *)dictionaryFromTXTRecordData:(NSData *)txtData;
+ (NSData *)dataFromTXTRecordDictionary:(NSDictionary *)txtDictionary;

- (id)initWithDomain:(NSString *)domain type:(NSString *)type name:(NSString *)name port:(int)port;
- (id)initWithDomain:(NSString *)domain type:(NSString *)type name:(NSString *)name;
- (void)scheduleInRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;
- (void)removeFromRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;
- (void)publish;
- (void)publishWithOptions:(NSNetServiceOptions)options;
- (void)resolve;
- (void)stop;
- (void)resolveWithTimeout:(NSTimeInterval)timeout;
- (BOOL)getInputStream:(out NSInputStream **)inputStream outputStream:(out NSOutputStream **)outputStream;
- (BOOL)setTXTRecordData:(NSData *)recordData;
- (NSData *)TXTRecordData;
- (void)startMonitoring;
- (void)stopMonitoring;

#pragma clang diagnostic pop

@end
