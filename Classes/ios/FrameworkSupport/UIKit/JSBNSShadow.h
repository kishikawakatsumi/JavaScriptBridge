#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSShadow <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, assign) CGSize shadowOffset;
@property (nonatomic, assign) CGFloat shadowBlurRadius;
@property (nonatomic, retain) id shadowColor;

#pragma clang diagnostic pop

@end
