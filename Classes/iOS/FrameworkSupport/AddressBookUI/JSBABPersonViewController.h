#import <UIKit/UIViewController.h>
#import <AddressBook/AddressBook.h>

@import AddressBookUI;
@import JavaScriptCore;

@protocol JSBUIViewController;

@protocol JSBABPersonViewController <JSExport, JSBUIViewController>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, copy) NSArray *displayedProperties;
@property (nonatomic, readwrite) id addressBook;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic, readwrite) id displayedPerson;
@property (nonatomic, assign) id personViewDelegate;
@property (nonatomic) BOOL shouldShowLinkedPeople;

- (void)setHighlightedItemForProperty:(ABPropertyID)property withIdentifier:(ABMultiValueIdentifier)identifier;

#pragma clang diagnostic pop

@end
