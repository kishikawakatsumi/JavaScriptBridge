#import <Foundation/Foundation.h>
#import <UIKit/UIGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIMotionEffect;

@protocol JSBUIInterpolatingMotionEffect <JSExport, JSBUIMotionEffect>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (instancetype)initWithKeyPath:(NSString *)keyPath type:(UIInterpolatingMotionEffectType)type;

#pragma clang diagnostic pop

@end
