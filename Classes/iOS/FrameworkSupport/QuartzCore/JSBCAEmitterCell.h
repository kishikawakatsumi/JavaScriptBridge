#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCAEmitterCell <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat emissionRange;
@property (copy) NSDictionary *style;
@property float lifetime, lifetimeRange;
@property CGFloat velocity, velocityRange;
@property CGFloat xAcceleration, yAcceleration, zAcceleration;
@property CGFloat scale, scaleRange, scaleSpeed;
@property (copy) NSArray *emitterCells;
@property float redSpeed, greenSpeed, blueSpeed, alphaSpeed;
@property CGRect contentsRect;
@property id color;
@property CGFloat spin, spinRange;
@property float redRange, greenRange, blueRange, alphaRange;
@property CGFloat emissionLatitude, emissionLongitude;
@property (getter = isEnabled) BOOL enabled;
@property (copy) NSString *minificationFilter, *magnificationFilter;
@property float minificationFilterBias;
@property (retain) id contents;
@property float birthRate;
@property (copy) NSString *name;

+ (id)emitterCell;
+ (id)defaultValueForKey:(NSString *)key;

- (BOOL)shouldArchiveValueForKey:(NSString *)key;

#pragma clang diagnostic pop

@end
