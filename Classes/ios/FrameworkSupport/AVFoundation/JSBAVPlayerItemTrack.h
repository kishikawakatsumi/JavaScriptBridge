#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVPlayerItemTrack <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) AVAssetTrack *assetTrack;
@property (nonatomic, assign, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly) float currentVideoFrameRate;

#pragma clang diagnostic pop

@end
