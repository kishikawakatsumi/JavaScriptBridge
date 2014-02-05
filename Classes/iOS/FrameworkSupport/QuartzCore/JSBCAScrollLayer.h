#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCAScrollLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)scrollToPoint:(CGPoint)p;
- (void)scrollToRect:(CGRect)r;

#pragma clang diagnostic pop

@end
