#import <SpriteKit/SKNode.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKNode;

@protocol JSBSKEffectNode <JSExport, JSBSKNode>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain) CIFilter *filter;
@property BOOL shouldEnableEffects;
@property BOOL shouldCenterFilter;
@property BOOL shouldRasterize;
@property SKBlendMode blendMode;

#pragma clang diagnostic pop

@end
