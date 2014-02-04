#import <EventKit/EventKitDefines.h>
#import <EventKit/EKObject.h>
#import <EventKit/EKTypes.h>
#import <AddressBook/AddressBook.h>

@import EventKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBEKParticipant <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) EKParticipantType participantType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) EKParticipantRole participantRole;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL isCurrentUser;
@property (nonatomic, readonly) EKParticipantStatus participantStatus;

- (id)ABRecordWithAddressBook:(id)addressBook;

#pragma clang diagnostic pop

@end
