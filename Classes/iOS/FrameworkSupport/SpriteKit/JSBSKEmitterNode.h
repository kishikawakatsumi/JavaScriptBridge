#import <SpriteKit/SKSpriteNode.h>
#import <SpriteKit/SKKeyframeSequence.h>
#import <SpriteKit/SpriteKitBase.h>

@import SpriteKit;
@import JavaScriptCore;

@protocol JSBSKNode;

@protocol JSBSKEmitterNode <JSExport, JSBSKNode>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property CGFloat emissionAngle;
@property CGFloat particleScaleRange;
@property (retain) SKKeyframeSequence *particleColorBlendFactorSequence;
@property CGFloat particleAlphaSpeed;
@property CGFloat particleColorBlendFactor;
@property (weak) SKNode *targetNode;
@property CGFloat particleBirthRate;
@property CGFloat particleZPositionRange;
@property (retain) SKKeyframeSequence *particleColorSequence;
@property CGFloat particleRotation;
@property CGVector particlePositionRange;
@property CGFloat emissionAngleRange;
@property CGFloat particleColorGreenRange;
@property CGFloat particleColorBlueRange;
@property CGFloat particleLifetimeRange;
@property CGFloat particleColorBlueSpeed;
@property CGFloat particleColorRedRange;
@property SKBlendMode particleBlendMode;
@property CGFloat particleColorBlendFactorRange;
@property (retain) SKTexture *particleTexture;
@property (retain) SKKeyframeSequence *particleScaleSequence;
@property CGFloat particleColorGreenSpeed;
@property CGFloat particleColorRedSpeed;
@property CGFloat particleSpeedRange;
@property CGFloat particleAlphaRange;
@property CGFloat yAcceleration;
@property CGFloat particleLifetime;
@property CGFloat particleRotationRange;
@property CGFloat xAcceleration;
@property CGFloat particleScaleSpeed;
@property (retain) SKKeyframeSequence *particleAlphaSequence;
@property (copy) SKAction *particleAction;
@property CGFloat particleRotationSpeed;
@property CGFloat particleColorAlphaRange;
@property CGFloat particleScale;
@property (retain) SKColor *particleColor;
@property CGFloat particleAlpha;
@property CGSize particleSize;
@property CGFloat particleSpeed;
@property CGFloat particleColorBlendFactorSpeed;
@property CGFloat particleColorAlphaSpeed;
@property CGPoint particlePosition;
@property NSUInteger numParticlesToEmit;
@property CGFloat particleZPosition;

- (void)advanceSimulationTime:(NSTimeInterval)sec;
- (void)resetSimulation;

#pragma clang diagnostic pop

@end
