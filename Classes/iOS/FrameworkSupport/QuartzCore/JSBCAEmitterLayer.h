#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCAEmitterLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGSize emitterSize;
@property (copy) NSString *renderMode;
@property float birthRate;
@property float scale;
@property float velocity;
@property CGFloat emitterDepth;
@property (copy) NSString *emitterMode;
@property (copy) NSArray *emitterCells;
@property unsigned int seed;
@property CGFloat emitterZPosition;
@property float spin;
@property float lifetime;
@property (copy) NSString *emitterShape;
@property CGPoint emitterPosition;
@property BOOL preservesDepth;

#pragma clang diagnostic pop

@end
