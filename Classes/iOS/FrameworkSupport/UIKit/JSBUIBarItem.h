#import <Foundation/Foundation.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIAppearance.h>
#import <UIKit/UIControl.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIBarItem <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) NSInteger tag;
@property (nonatomic) UIEdgeInsets imageInsets;
@property (nonatomic) UIEdgeInsets landscapeImagePhoneInsets;
@property (nonatomic, retain) UIImage *landscapeImagePhone;

- (void)setTitleTextAttributes:(NSDictionary *)attributes forState:(UIControlState)state;
- (NSDictionary *)titleTextAttributesForState:(UIControlState)state;

#pragma clang diagnostic pop

@end
