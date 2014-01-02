#import <UIKit/UIKit.h>
#import <EventKit/EventKit.h>
#import <EventKitUI/EventKitUIDefines.h>

@import EventKitUI;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBEKEventEditViewController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, weak) id editViewDelegate;
@property (nonatomic, retain) EKEventStore *eventStore;

- (void)cancelEditing;

#pragma clang diagnostic pop

@end
