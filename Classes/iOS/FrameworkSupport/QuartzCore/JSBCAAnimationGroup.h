#import <QuartzCore/CALayer.h>
#import <Foundation/NSObject.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCAAnimation;

@protocol JSBCAAnimationGroup <JSExport, JSBCAAnimation>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain) CAMediaTimingFunction *timingFunction;
@property (copy) NSArray *values;
@property (copy) NSString *subtype;
@property (retain) id delegate;
@property (retain) id filter;
@property (copy) NSArray *keyTimes;
@property (retain) CAValueFunction *valueFunction;
@property (getter = isCumulative) BOOL cumulative;
@property (copy) NSArray *timingFunctions;
@property id path;
@property (copy) NSString *calculationMode;
@property (copy) NSString *rotationMode;
@property (copy) NSString *type;
@property float startProgress, endProgress;
@property (copy) NSArray *animations;
@property (copy) NSArray *tensionValues, *continuityValues, *biasValues;
@property (copy) NSString *keyPath;
@property (retain) id fromValue, toValue, byValue;
@property (getter = isAdditive) BOOL additive;
@property (getter = isRemovedOnCompletion) BOOL removedOnCompletion;

#pragma clang diagnostic pop

@end
