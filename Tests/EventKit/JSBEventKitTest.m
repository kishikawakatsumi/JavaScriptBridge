#import <XCTest/XCTest.h>
#import "JavaScriptBridge.h"

@import JavaScriptCore;

@interface JSBEventKitTests : XCTestCase

@end

@implementation JSBEventKitTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

- (void)testInstantiation
{
    JSContext *context = [[JSContext alloc] init];
    [context addScriptingSupport:@"EventKit"];

    JSValue *value = nil;
    
    [context evaluateScript:@"var ekeventstore = EKEventStore.new();"];
    value = context[@"ekeventstore"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekrecurrencedayofweek = EKRecurrenceDayOfWeek.new();"];
    value = context[@"ekrecurrencedayofweek"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekrecurrenceend = EKRecurrenceEnd.new();"];
    value = context[@"ekrecurrenceend"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekalarm = EKAlarm.new();"];
    value = context[@"ekalarm"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekcalendar = EKCalendar.calendarForEntityTypeEventStore(0, ekeventstore);"];
    value = context[@"ekcalendar"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekcalendaritem = EKCalendarItem.new();"];
    value = context[@"ekcalendaritem"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekparticipant = EKParticipant.new();"];
    value = context[@"ekparticipant"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekrecurrencerule = EKRecurrenceRule.new();"];
    value = context[@"ekrecurrencerule"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var eksource = EKSource.new();"];
    value = context[@"eksource"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekstructuredlocation = EKStructuredLocation.new();"];
    value = context[@"ekstructuredlocation"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekevent = EKEvent.eventWithEventStore(ekeventstore);"];
    value = context[@"ekevent"];
    XCTAssertTrue(value && !value.isUndefined);

    [context evaluateScript:@"var ekreminder = EKReminder.reminderWithEventStore(ekeventstore);"];
    value = context[@"ekreminder"];
    XCTAssertTrue(value && !value.isUndefined);

}

@end
