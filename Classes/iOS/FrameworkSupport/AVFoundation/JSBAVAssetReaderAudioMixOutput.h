#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVVideoComposition.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAssetReaderOutput;

@protocol JSBAVAssetReaderAudioMixOutput <JSExport, JSBAVAssetReaderOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (AVAssetReaderAudioMixOutput *)assetReaderAudioMixOutputWithAudioTracks:(NSArray *)audioTracks audioSettings:(NSDictionary *)audioSettings;

- (id)initWithAudioTracks:(NSArray *)audioTracks audioSettings:(NSDictionary *)audioSettings;

#pragma clang diagnostic pop

@end
