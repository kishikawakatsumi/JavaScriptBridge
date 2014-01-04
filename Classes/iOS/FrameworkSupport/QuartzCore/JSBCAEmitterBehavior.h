#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBCAEmitterBehavior <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSString *type;
@property (copy) NSString *name;
@property (getter = isEnabled) BOOL enabled;

+ (NSArray *)behaviorTypes;
+ (CAEmitterBehavior *)behaviorWithType:(NSString *)type;

- (id)initWithType:(NSString *)type;

#pragma clang diagnostic pop

@end
