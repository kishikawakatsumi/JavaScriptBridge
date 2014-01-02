#import <AVFoundation/AVBase.h>
#import <QuartzCore/CAAnimation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBAVSynchronizedLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, retain) AVPlayerItem *playerItem;

+ (AVSynchronizedLayer *)synchronizedLayerWithPlayerItem:(AVPlayerItem *)playerItem;

#pragma clang diagnostic pop

@end
