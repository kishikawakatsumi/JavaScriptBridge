#import "JSBMultipeerConnectivity.h"
#import "JSBMCAdvertiserAssistant.h"
#import "JSBMCNearbyServiceAdvertiser.h"
#import "JSBMCNearbyServiceBrowser.h"
#import "JSBMCPeerID.h"
#import "JSBMCSession.h"
#import "JSBMCBrowserViewController.h"

@import ObjectiveC;

@implementation JSBMultipeerConnectivity

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([MCAdvertiserAssistant class], @protocol(JSBMCAdvertiserAssistant));
    context[@"MCAdvertiserAssistant"] = [MCAdvertiserAssistant class];

    class_addProtocol([MCNearbyServiceAdvertiser class], @protocol(JSBMCNearbyServiceAdvertiser));
    context[@"MCNearbyServiceAdvertiser"] = [MCNearbyServiceAdvertiser class];

    class_addProtocol([MCNearbyServiceBrowser class], @protocol(JSBMCNearbyServiceBrowser));
    context[@"MCNearbyServiceBrowser"] = [MCNearbyServiceBrowser class];

    class_addProtocol([MCPeerID class], @protocol(JSBMCPeerID));
    context[@"MCPeerID"] = [MCPeerID class];

    class_addProtocol([MCSession class], @protocol(JSBMCSession));
    context[@"MCSession"] = [MCSession class];

    class_addProtocol([MCBrowserViewController class], @protocol(JSBMCBrowserViewController));
    context[@"MCBrowserViewController"] = [MCBrowserViewController class];

#pragma clang diagnostic pop
}

@end
