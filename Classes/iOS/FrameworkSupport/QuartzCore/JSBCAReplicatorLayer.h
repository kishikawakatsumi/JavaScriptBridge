#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCAReplicatorLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property BOOL preservesDepth;
@property NSInteger instanceCount;
@property id instanceColor;
@property CATransform3D instanceTransform;
@property float instanceRedOffset, instanceGreenOffset;
@property CFTimeInterval instanceDelay;
@property float instanceBlueOffset, instanceAlphaOffset;

#pragma clang diagnostic pop

@end
