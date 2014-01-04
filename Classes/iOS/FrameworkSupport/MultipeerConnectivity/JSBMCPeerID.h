#import <Foundation/Foundation.h>

@import MultipeerConnectivity;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMCPeerID <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *displayName;

- (instancetype)initWithDisplayName:(NSString *)myDisplayName;

#pragma clang diagnostic pop

@end
