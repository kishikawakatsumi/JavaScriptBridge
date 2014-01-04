#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSStream <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)open;
- (void)close;
- (id <NSStreamDelegate>)delegate;
- (void)setDelegate:(id <NSStreamDelegate>)delegate;
- (id)propertyForKey:(NSString *)key;
- (BOOL)setProperty:(id)property forKey:(NSString *)key;
- (void)scheduleInRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;
- (void)removeFromRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;
- (NSStreamStatus)streamStatus;
- (NSError *)streamError;

#pragma clang diagnostic pop

@end
