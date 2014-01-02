#import "JSBCoreTelephony.h"
#import "JSBCTCall.h"
#import "JSBCTCallCenter.h"
#import "JSBCTCarrier.h"
#import "JSBCTSubscriber.h"
#import "JSBCTSubscriberInfo.h"
#import "JSBCTTelephonyNetworkInfo.h"

@import ObjectiveC;

@implementation JSBCoreTelephony

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([CTCall class], @protocol(JSBCTCall));
    context[@"CTCall"] = [CTCall class];

    class_addProtocol([CTCallCenter class], @protocol(JSBCTCallCenter));
    context[@"CTCallCenter"] = [CTCallCenter class];

    class_addProtocol([CTCarrier class], @protocol(JSBCTCarrier));
    context[@"CTCarrier"] = [CTCarrier class];

    class_addProtocol([CTSubscriber class], @protocol(JSBCTSubscriber));
    context[@"CTSubscriber"] = [CTSubscriber class];

    class_addProtocol([CTSubscriberInfo class], @protocol(JSBCTSubscriberInfo));
    context[@"CTSubscriberInfo"] = [CTSubscriberInfo class];

    class_addProtocol([CTTelephonyNetworkInfo class], @protocol(JSBCTTelephonyNetworkInfo));
    context[@"CTTelephonyNetworkInfo"] = [CTTelephonyNetworkInfo class];

#pragma clang diagnostic pop
}

@end
