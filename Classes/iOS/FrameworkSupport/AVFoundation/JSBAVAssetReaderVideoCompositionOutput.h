#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVVideoComposition.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAssetReaderOutput;

@protocol JSBAVAssetReaderVideoCompositionOutput <JSExport, JSBAVAssetReaderOutput>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (AVAssetReaderVideoCompositionOutput *)assetReaderVideoCompositionOutputWithVideoTracks:(NSArray *)videoTracks videoSettings:(NSDictionary *)videoSettings;

- (id)initWithVideoTracks:(NSArray *)videoTracks videoSettings:(NSDictionary *)videoSettings;

#pragma clang diagnostic pop

@end
