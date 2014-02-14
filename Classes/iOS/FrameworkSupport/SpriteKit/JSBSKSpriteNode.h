#import <SpriteKit/SKNode.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKNode;

@protocol JSBSKSpriteNode <JSExport, JSBSKNode>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain) SKColor *color;
@property CGSize size;
@property CGFloat colorBlendFactor;
@property CGPoint anchorPoint;
@property SKBlendMode blendMode;
@property (retain) SKTexture *texture;
@property CGRect centerRect;

+ (instancetype)spriteNodeWithTexture:(SKTexture *)texture size:(CGSize)size;
+ (instancetype)spriteNodeWithTexture:(SKTexture *)texture;
+ (instancetype)spriteNodeWithImageNamed:(NSString *)name;
+ (instancetype)spriteNodeWithColor:(SKColor *)color size:(CGSize)size;

- (instancetype)initWithTexture:(SKTexture *)texture color:(SKColor *)color size:(CGSize)size;
- (instancetype)initWithTexture:(SKTexture *)texture;
- (instancetype)initWithImageNamed:(NSString *)name;
- (instancetype)initWithColor:(SKColor *)color size:(CGSize)size;

#pragma clang diagnostic pop

@end
