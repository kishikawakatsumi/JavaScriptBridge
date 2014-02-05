#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAssetTrack.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAssetTrack;

@protocol JSBAVCompositionTrack <JSExport, JSBAVAssetTrack>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma clang diagnostic pop

@end
