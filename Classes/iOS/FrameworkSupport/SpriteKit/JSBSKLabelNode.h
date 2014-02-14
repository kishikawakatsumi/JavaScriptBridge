#import <SpriteKit/SKSpriteNode.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKNode;

@protocol JSBSKLabelNode <JSExport, JSBSKNode>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat fontSize;
@property (retain) SKColor *color;
@property (copy) NSString *fontName;
@property CGFloat colorBlendFactor;
@property (retain) SKColor *fontColor;
@property SKLabelVerticalAlignmentMode verticalAlignmentMode;
@property SKLabelHorizontalAlignmentMode horizontalAlignmentMode;
@property (copy) NSString *text;
@property SKBlendMode blendMode;

+ (instancetype)labelNodeWithFontNamed:(NSString *)fontName;

- (instancetype)initWithFontNamed:(NSString *)fontName;

#pragma clang diagnostic pop

@end
