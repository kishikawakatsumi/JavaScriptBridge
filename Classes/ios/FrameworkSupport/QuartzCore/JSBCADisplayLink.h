#import <QuartzCore/CABase.h>
#import <Foundation/NSObject.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCADisplayLink <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (getter = isPaused, nonatomic) BOOL paused;
@property (readonly, nonatomic) CFTimeInterval timestamp, duration;
@property (nonatomic) NSInteger frameInterval;

+ (CADisplayLink *)displayLinkWithTarget:(id)target selector:(SEL)sel;

- (void)addToRunLoop:(NSRunLoop *)runloop forMode:(NSString *)mode;
- (void)removeFromRunLoop:(NSRunLoop *)runloop forMode:(NSString *)mode;
- (void)invalidate;

#pragma clang diagnostic pop

@end
