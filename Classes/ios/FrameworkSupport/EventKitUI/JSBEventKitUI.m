#import "JSBEventKitUI.h"
#import "JSBEKCalendarChooser.h"
#import "JSBEKEventEditViewController.h"
#import "JSBEKEventViewController.h"

@import ObjectiveC;

@implementation JSBEventKitUI

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([EKCalendarChooser class], @protocol(JSBEKCalendarChooser));
    context[@"EKCalendarChooser"] = [EKCalendarChooser class];

    class_addProtocol([EKEventEditViewController class], @protocol(JSBEKEventEditViewController));
    context[@"EKEventEditViewController"] = [EKEventEditViewController class];

    class_addProtocol([EKEventViewController class], @protocol(JSBEKEventViewController));
    context[@"EKEventViewController"] = [EKEventViewController class];

#pragma clang diagnostic pop
}

@end
