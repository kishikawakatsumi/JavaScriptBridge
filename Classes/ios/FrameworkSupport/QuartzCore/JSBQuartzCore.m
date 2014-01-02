#import "JSBQuartzCore.h"
#import "JSBCAAnimation.h"
#import "JSBCADisplayLink.h"
#import "JSBCAEmitterBehavior.h"
#import "JSBCAEmitterCell.h"
#import "JSBCALayer.h"
#import "JSBCAMediaTimingFunction.h"
#import "JSBCATransaction.h"
#import "JSBNSValue.h"
#import "JSBCAValueFunction.h"
#import "JSBCATransition.h"
#import "JSBCAAnimationGroup.h"
#import "JSBCAPropertyAnimation.h"
#import "JSBCAEAGLLayer.h"
#import "JSBCAEmitterLayer.h"
#import "JSBCAGradientLayer.h"
#import "JSBCAReplicatorLayer.h"
#import "JSBCAScrollLayer.h"
#import "JSBCAShapeLayer.h"
#import "JSBCATextLayer.h"
#import "JSBCATiledLayer.h"
#import "JSBCATransformLayer.h"
#import "JSBCABasicAnimation.h"
#import "JSBCAKeyframeAnimation.h"

@import ObjectiveC;

@implementation JSBQuartzCore

+ (void)addScriptingSupportToContext:(JSContext *)context
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    class_addProtocol([CAAnimation class], @protocol(JSBCAAnimation));
    context[@"CAAnimation"] = [CAAnimation class];

    class_addProtocol([CADisplayLink class], @protocol(JSBCADisplayLink));
    context[@"CADisplayLink"] = [CADisplayLink class];

    class_addProtocol([CAEmitterBehavior class], @protocol(JSBCAEmitterBehavior));
    context[@"CAEmitterBehavior"] = [CAEmitterBehavior class];

    class_addProtocol([CAEmitterCell class], @protocol(JSBCAEmitterCell));
    context[@"CAEmitterCell"] = [CAEmitterCell class];

    class_addProtocol([CALayer class], @protocol(JSBCALayer));
    context[@"CALayer"] = [CALayer class];

    class_addProtocol([CAMediaTimingFunction class], @protocol(JSBCAMediaTimingFunction));
    context[@"CAMediaTimingFunction"] = [CAMediaTimingFunction class];

    class_addProtocol([CATransaction class], @protocol(JSBCATransaction));
    context[@"CATransaction"] = [CATransaction class];

    class_addProtocol([NSValue class], @protocol(JSBNSValue));
    context[@"NSValue"] = [NSValue class];

    class_addProtocol([CAValueFunction class], @protocol(JSBCAValueFunction));
    context[@"CAValueFunction"] = [CAValueFunction class];

    class_addProtocol([CATransition class], @protocol(JSBCATransition));
    context[@"CATransition"] = [CATransition class];

    class_addProtocol([CAAnimationGroup class], @protocol(JSBCAAnimationGroup));
    context[@"CAAnimationGroup"] = [CAAnimationGroup class];

    class_addProtocol([CAPropertyAnimation class], @protocol(JSBCAPropertyAnimation));
    context[@"CAPropertyAnimation"] = [CAPropertyAnimation class];

    class_addProtocol([CAEAGLLayer class], @protocol(JSBCAEAGLLayer));
    context[@"CAEAGLLayer"] = [CAEAGLLayer class];

    class_addProtocol([CAEmitterLayer class], @protocol(JSBCAEmitterLayer));
    context[@"CAEmitterLayer"] = [CAEmitterLayer class];

    class_addProtocol([CAGradientLayer class], @protocol(JSBCAGradientLayer));
    context[@"CAGradientLayer"] = [CAGradientLayer class];

    class_addProtocol([CAReplicatorLayer class], @protocol(JSBCAReplicatorLayer));
    context[@"CAReplicatorLayer"] = [CAReplicatorLayer class];

    class_addProtocol([CAScrollLayer class], @protocol(JSBCAScrollLayer));
    context[@"CAScrollLayer"] = [CAScrollLayer class];

    class_addProtocol([CAShapeLayer class], @protocol(JSBCAShapeLayer));
    context[@"CAShapeLayer"] = [CAShapeLayer class];

    class_addProtocol([CATextLayer class], @protocol(JSBCATextLayer));
    context[@"CATextLayer"] = [CATextLayer class];

    class_addProtocol([CATiledLayer class], @protocol(JSBCATiledLayer));
    context[@"CATiledLayer"] = [CATiledLayer class];

    class_addProtocol([CATransformLayer class], @protocol(JSBCATransformLayer));
    context[@"CATransformLayer"] = [CATransformLayer class];

    class_addProtocol([CABasicAnimation class], @protocol(JSBCABasicAnimation));
    context[@"CABasicAnimation"] = [CABasicAnimation class];

    class_addProtocol([CAKeyframeAnimation class], @protocol(JSBCAKeyframeAnimation));
    context[@"CAKeyframeAnimation"] = [CAKeyframeAnimation class];

#pragma clang diagnostic pop
}

@end
