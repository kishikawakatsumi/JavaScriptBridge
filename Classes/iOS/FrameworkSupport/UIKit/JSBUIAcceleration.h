#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIAcceleration <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) UIAccelerationValue y;
@property (nonatomic, readonly) NSTimeInterval timestamp;
@property (nonatomic, readonly) UIAccelerationValue z;
@property (nonatomic, readonly) UIAccelerationValue x;
@property (nonatomic) NSTimeInterval updateInterval;
@property (nonatomic, assign) id delegate;

#pragma clang diagnostic pop

@end
