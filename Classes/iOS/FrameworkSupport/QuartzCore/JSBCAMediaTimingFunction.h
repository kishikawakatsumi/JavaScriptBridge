#import <QuartzCore/CAMediaTiming.h>
#import <Foundation/NSObject.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCAMediaTimingFunction <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (id)functionWithName:(NSString *)name;
+ (id)functionWithControlPoints:(float)c1x :(float)c1y :(float)c2x :(float)c2y;

- (id)initWithControlPoints:(float)c1x :(float)c1y :(float)c2x :(float)c2y;
- (void)getControlPointAtIndex:(size_t)idx values:(float [2])ptr;

#pragma clang diagnostic pop

@end
