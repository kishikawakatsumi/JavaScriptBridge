#import <QuartzCore/CALayer.h>

@import QuartzCore;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBCATiledLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property size_t levelsOfDetailBias;
@property size_t levelsOfDetail;
@property CGSize tileSize;

+ (CFTimeInterval)fadeDuration;

#pragma clang diagnostic pop

@end
