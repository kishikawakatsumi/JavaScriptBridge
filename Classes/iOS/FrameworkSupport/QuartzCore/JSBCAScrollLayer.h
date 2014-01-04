#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCAScrollLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) CGRect visibleRect;
@property (copy) NSString *scrollMode;

- (void)scrollToPoint:(CGPoint)p;
- (void)scrollToRect:(CGRect)r;

#pragma clang diagnostic pop

@end
