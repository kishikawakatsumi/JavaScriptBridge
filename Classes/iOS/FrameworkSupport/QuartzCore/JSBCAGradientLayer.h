#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCAGradientLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (copy) NSArray *colors;
@property (copy) NSString *type;
@property (copy) NSArray *locations;
@property CGPoint startPoint, endPoint;

#pragma clang diagnostic pop

@end
