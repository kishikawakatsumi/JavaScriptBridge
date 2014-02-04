#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>

@import AddressBookUI;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBABUnknownPersonViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readwrite) id addressBook;
@property (nonatomic) BOOL allowsAddingToAddressBook;
@property (nonatomic, assign) id unknownPersonViewDelegate;
@property (nonatomic, copy) NSString *alternateName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic, readwrite) id displayedPerson;

#pragma clang diagnostic pop

@end
