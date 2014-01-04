#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIStoryboardSegue <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) id sourceViewController;
@property (nonatomic, readonly) id destinationViewController;
@property (nonatomic, readonly) NSString *identifier;

+ (id)segueWithIdentifier:(NSString *)identifier source:(UIViewController *)source destination:(UIViewController *)destination performHandler:(void (^)(void))performHandler;

- (id)initWithIdentifier:(NSString *)identifier source:(UIViewController *)source destination:(UIViewController *)destination;
- (void)perform;

#pragma clang diagnostic pop

@end
