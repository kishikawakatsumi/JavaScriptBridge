#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAnimation.h>
#import <QuartzCore/CoreAnimation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBCALayer;

@protocol JSBAVPlayerLayer <JSExport, JSBCALayer>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CGRect videoRect;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, readonly, getter = isReadyForDisplay) BOOL readyForDisplay;
@property (copy) NSString *videoGravity;

+ (AVPlayerLayer *)playerLayerWithPlayer:(AVPlayer *)player;

#pragma clang diagnostic pop

@end
