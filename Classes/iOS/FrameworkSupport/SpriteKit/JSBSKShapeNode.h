#import <SpriteKit/SKNode.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKNode;

@protocol JSBSKShapeNode <JSExport, JSBSKNode>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (getter = isAntialiased) BOOL antialiased;
@property (retain) SKColor *fillColor;
@property SKBlendMode blendMode;
@property (retain) SKColor *strokeColor;
@property CGPathRef path;
@property CGFloat glowWidth;
@property CGFloat lineWidth;

#pragma clang diagnostic pop

@end
