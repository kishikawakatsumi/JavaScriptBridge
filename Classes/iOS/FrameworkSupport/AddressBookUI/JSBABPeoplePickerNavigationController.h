#import <UIKit/UINavigationController.h>
#import <AddressBook/ABAddressBook.h>
#import <AddressBook/ABMultiValue.h>
#import <AddressBook/ABRecord.h>

@import AddressBookUI;
@import JavaScriptCore;

@protocol JSBUINavigationController;

@protocol JSBABPeoplePickerNavigationController <JSExport, JSBUINavigationController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSArray *displayedProperties;
@property (nonatomic, readwrite) id addressBook;
@property (nonatomic, assign) id peoplePickerDelegate;

#pragma clang diagnostic pop

@end
