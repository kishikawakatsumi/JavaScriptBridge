#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSOperation;

@protocol JSBUIActivityItemProvider <JSExport, JSBNSOperation>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain, readonly) id placeholderItem;
@property (nonatomic, readonly) NSString *activityType;

- (id)initWithPlaceholderItem:(id)placeholderItem;
- (id)item;

#pragma clang diagnostic pop

@end
