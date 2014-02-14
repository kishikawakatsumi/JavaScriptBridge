#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBSKKeyframeSequence <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property SKRepeatMode repeatMode;
@property SKInterpolationMode interpolationMode;

- (instancetype)initWithKeyframeValues:(NSArray *)values times:(NSArray *)times;
- (instancetype)initWithCapacity:(NSUInteger)numItems;
- (NSUInteger)count;
- (void)addKeyframeValue:(id)value time:(CGFloat)time;
- (void)removeLastKeyframe;
- (void)removeKeyframeAtIndex:(NSUInteger)index;
- (void)setKeyframeValue:(id)value forIndex:(NSUInteger)index;
- (void)setKeyframeTime:(CGFloat)time forIndex:(NSUInteger)index;
- (void)setKeyframeValue:(id)value time:(CGFloat)time forIndex:(NSUInteger)index;
- (id)getKeyframeValueForIndex:(NSUInteger)index;
- (CGFloat)getKeyframeTimeForIndex:(NSUInteger)index;
- (id)sampleAtTime:(CGFloat)time;

#pragma clang diagnostic pop

@end
