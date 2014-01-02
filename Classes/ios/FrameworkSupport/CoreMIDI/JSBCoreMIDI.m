#import "JSBCoreMIDI.h"
#import "JSBMIDINetworkConnection.h"
#import "JSBMIDINetworkHost.h"
#import "JSBMIDINetworkSession.h"

@import ObjectiveC;

@implementation JSBCoreMIDI

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([MIDINetworkConnection class], @protocol(JSBMIDINetworkConnection));
    context[@"MIDINetworkConnection"] = [MIDINetworkConnection class];

    class_addProtocol([MIDINetworkHost class], @protocol(JSBMIDINetworkHost));
    context[@"MIDINetworkHost"] = [MIDINetworkHost class];

    class_addProtocol([MIDINetworkSession class], @protocol(JSBMIDINetworkSession));
    context[@"MIDINetworkSession"] = [MIDINetworkSession class];

#pragma clang diagnostic pop
}

@end
