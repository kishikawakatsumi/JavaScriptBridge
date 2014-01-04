#import <CoreMIDI/MIDIServices.h>
#import <Foundation/Foundation.h>

@import CoreMIDI;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMIDINetworkHost <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSUInteger port;
@property (nonatomic, readonly, retain) NSString *netServiceDomain;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly, retain) NSString *address;
@property (nonatomic, readonly) NSString *networkName;
@property (nonatomic) MIDINetworkConnectionPolicy connectionPolicy;
@property (nonatomic, readonly) NSUInteger networkPort;
@property (nonatomic, retain, readonly) MIDINetworkHost *host;
@property (nonatomic, readonly) NSString *localName;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *netServiceName;

+ (id)hostWithName:(NSString *)name address:(NSString *)address port:(NSUInteger)port;
+ (id)hostWithName:(NSString *)name netService:(NSNetService *)netService;
+ (id)hostWithName:(NSString *)name netServiceName:(NSString *)netServiceName netServiceDomain:(NSString *)netServiceDomain;

- (BOOL)hasSameAddressAs:(MIDINetworkHost *)other;

#pragma clang diagnostic pop

@end
