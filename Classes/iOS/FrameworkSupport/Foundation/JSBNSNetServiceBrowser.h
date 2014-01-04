#import <Foundation/NSObject.h>
#import <Foundation/NSDate.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSNetServiceBrowser <JSExport, JSBNSObject>

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

- (id)init;
- (void)scheduleInRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;
- (void)removeFromRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;
- (void)searchForBrowsableDomains;
- (void)searchForRegistrationDomains;
- (void)searchForServicesOfType:(NSString *)type inDomain:(NSString *)domainString;
- (void)stop;

#pragma clang diagnostic pop

@end
