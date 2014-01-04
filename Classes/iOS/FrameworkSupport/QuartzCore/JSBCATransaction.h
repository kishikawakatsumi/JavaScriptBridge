#import <QuartzCore/CABase.h>
#import <Foundation/NSObject.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCATransaction <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (void)begin;
+ (void)commit;
+ (void)flush;
+ (void)lock;
+ (void)unlock;
+ (CFTimeInterval)animationDuration;
+ (void)setAnimationDuration:(CFTimeInterval)dur;
+ (CAMediaTimingFunction *)animationTimingFunction;
+ (void)setAnimationTimingFunction:(CAMediaTimingFunction *)function;
+ (BOOL)disableActions;
+ (void)setDisableActions:(BOOL)flag;
+ (void (^)(void))completionBlock;
+ (void)setCompletionBlock:(void (^)(void))block;
+ (id)valueForKey:(NSString *)key;
+ (void)setValue:(id)anObject forKey:(NSString *)key;

#pragma clang diagnostic pop

@end
