#import <UIKit/UIKit.h>
#import <EventKitUI/EventKitUIDefines.h>

@import EventKitUI;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBEKEventViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic) BOOL allowsCalendarPreview;
@property (nonatomic, weak) id delegate;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic, retain) EKEvent *event;

#pragma clang diagnostic pop

@end
