#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSPort <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSPort *)port;

- (void)invalidate;
- (BOOL)isValid;
- (void)setDelegate:(id <NSPortDelegate>)anObject;
- (id <NSPortDelegate>)delegate;
- (void)scheduleInRunLoop:(NSRunLoop *)runLoop forMode:(NSString *)mode;
- (void)removeFromRunLoop:(NSRunLoop *)runLoop forMode:(NSString *)mode;
- (NSUInteger)reservedSpaceLength;
- (BOOL)sendBeforeDate:(NSDate *)limitDate components:(NSMutableArray *)components from:(NSPort *)receivePort reserved:(NSUInteger)headerSpaceReserved;
- (BOOL)sendBeforeDate:(NSDate *)limitDate msgid:(NSUInteger)msgID components:(NSMutableArray *)components from:(NSPort *)receivePort reserved:(NSUInteger)headerSpaceReserved;

#pragma clang diagnostic pop

@end
