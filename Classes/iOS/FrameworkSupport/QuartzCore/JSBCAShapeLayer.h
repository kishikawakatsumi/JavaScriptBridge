#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCAShapeLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat miterLimit;
@property (copy) NSString *lineCap;
@property (copy) NSArray *lineDashPattern;
@property CGFloat lineDashPhase;
@property id fillColor;
@property CGFloat strokeStart, strokeEnd;
@property id strokeColor;
@property id path;
@property (copy) NSString *fillRule;
@property (copy) NSString *lineJoin;
@property CGFloat lineWidth;

#pragma clang diagnostic pop

@end
