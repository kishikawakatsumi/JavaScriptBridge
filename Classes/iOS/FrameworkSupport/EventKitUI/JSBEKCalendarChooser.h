#import <UIKit/UIKit.h>
#import <EventKitUI/EventKitUIDefines.h>
#import <EventKit/EventKit.h>

@import EventKitUI;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBEKCalendarChooser <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic, readonly) EKCalendarChooserSelectionStyle selectionStyle;
@property (nonatomic, weak) id delegate;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic, copy) NSSet *selectedCalendars;

- (id)initWithSelectionStyle:(EKCalendarChooserSelectionStyle)selectionStyle displayStyle:(EKCalendarChooserDisplayStyle)displayStyle eventStore:(EKEventStore *)eventStore;
- (id)initWithSelectionStyle:(EKCalendarChooserSelectionStyle)style displayStyle:(EKCalendarChooserDisplayStyle)displayStyle entityType:(EKEntityType)entityType eventStore:(EKEventStore *)eventStore;

#pragma clang diagnostic pop

@end
