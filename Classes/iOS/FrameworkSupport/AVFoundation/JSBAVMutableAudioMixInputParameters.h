#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <MediaToolbox/MTAudioProcessingTap.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAudioMixInputParameters;

@protocol JSBAVMutableAudioMixInputParameters <JSExport, JSBAVAudioMixInputParameters>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (AVMutableAudioMixInputParameters *)audioMixInputParametersWithTrack:(AVAssetTrack *)track;
+ (AVMutableAudioMixInputParameters *)audioMixInputParameters;

- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(CMTimeRange)timeRange;
- (void)setVolume:(float)volume atTime:(CMTime)time;

#pragma clang diagnostic pop

@end
