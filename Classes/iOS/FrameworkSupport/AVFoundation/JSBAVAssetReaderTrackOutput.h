#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVVideoComposition.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAssetReaderOutput;

@protocol JSBAVAssetReaderTrackOutput <JSExport, JSBAVAssetReaderOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (AVAssetReaderTrackOutput *)assetReaderTrackOutputWithTrack:(AVAssetTrack *)track outputSettings:(NSDictionary *)outputSettings;

- (id)initWithTrack:(AVAssetTrack *)track outputSettings:(NSDictionary *)outputSettings;

#pragma clang diagnostic pop

@end
