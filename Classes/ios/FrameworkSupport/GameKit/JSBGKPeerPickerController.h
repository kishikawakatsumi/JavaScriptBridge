#import <UIKit/UIKit.h>
#import <GameKit/GKSession.h>

@import GameKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBGKPeerPickerController <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly, getter = isVisible) BOOL visible;
@property (nonatomic, assign) GKPeerPickerConnectionType connectionTypesMask;
@property (nonatomic, assign) id delegate;

- (void)show;
- (void)dismiss;

#pragma clang diagnostic pop

@end
