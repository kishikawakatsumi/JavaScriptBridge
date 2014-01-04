#import <Foundation/NSObject.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSRecursiveLock <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (BOOL)tryLock;
- (BOOL)lockBeforeDate:(NSDate *)limit;
- (void)setName:(NSString *)n;
- (NSString *)name;

#pragma clang diagnostic pop

@end
