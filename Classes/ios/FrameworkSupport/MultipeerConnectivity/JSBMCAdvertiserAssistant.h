#import <UIKit/UIKit.h>

@import MultipeerConnectivity;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMCAdvertiserAssistant <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (assign) id delegate;
@property (readonly) MCSession *session;
@property (readonly) NSString *serviceType;
@property (readonly) NSDictionary *discoveryInfo;

- (instancetype)initWithServiceType:(NSString *)serviceType discoveryInfo:(NSDictionary *)info session:(MCSession *)session;
- (void)start;
- (void)stop;

#pragma clang diagnostic pop

@end
