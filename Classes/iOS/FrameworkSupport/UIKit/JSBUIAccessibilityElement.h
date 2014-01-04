#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIAccessibilityConstants.h>
#import <UIKit/UIAccessibilityIdentification.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIAccessibilityElement <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) NSString *accessibilityHint;
@property (nonatomic, assign) BOOL isAccessibilityElement;
@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, assign) id accessibilityContainer;
@property (nonatomic, retain) NSString *accessibilityValue;
@property (nonatomic, assign) CGRect accessibilityFrame;
@property (nonatomic, assign) UIAccessibilityTraits accessibilityTraits;

- (id)initWithAccessibilityContainer:(id)container;

#pragma clang diagnostic pop

@end
