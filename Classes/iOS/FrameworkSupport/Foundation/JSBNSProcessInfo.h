#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSProcessInfo <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (NSProcessInfo *)processInfo;

- (NSDictionary *)environment;
- (NSArray *)arguments;
- (NSString *)hostName;
- (NSString *)processName;
- (int)processIdentifier;
- (void)setProcessName:(NSString *)newName;
- (NSString *)globallyUniqueString;
- (NSUInteger)operatingSystem;
- (NSString *)operatingSystemName;
- (NSString *)operatingSystemVersionString;
- (NSUInteger)processorCount;
- (NSUInteger)activeProcessorCount;
- (unsigned long long)physicalMemory;
- (NSTimeInterval)systemUptime;
- (void)disableSuddenTermination;
- (void)enableSuddenTermination;
- (void)disableAutomaticTermination:(NSString *)reason;
- (void)enableAutomaticTermination:(NSString *)reason;
- (void)setAutomaticTerminationSupportEnabled:(BOOL)flag;
- (BOOL)automaticTerminationSupportEnabled;
- (id <NSObject>)beginActivityWithOptions:(NSActivityOptions)options reason:(NSString *)reason;
- (void)endActivity:(id <NSObject>)activity;
- (void)performActivityWithOptions:(NSActivityOptions)options reason:(NSString *)reason usingBlock:(void (^)(void))block;

#pragma clang diagnostic pop

@end
