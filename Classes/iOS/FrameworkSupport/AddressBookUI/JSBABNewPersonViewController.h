#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>

@import AddressBookUI;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBABNewPersonViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readwrite) id displayedPerson;
@property (nonatomic, readwrite) id addressBook;
@property (nonatomic, assign) id newPersonViewDelegate;
@property (nonatomic, readwrite) id parentGroup;

#pragma clang diagnostic pop

@end
