#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVAsset.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVComposition;

@protocol JSBAVMutableComposition <JSExport, JSBAVComposition>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

+ (AVMutableComposition *)composition;

- (BOOL)insertTimeRange:(CMTimeRange)timeRange ofAsset:(AVAsset *)asset atTime:(CMTime)startTime error:(NSError **)outError;
- (void)insertEmptyTimeRange:(CMTimeRange)timeRange;
- (void)removeTimeRange:(CMTimeRange)timeRange;
- (void)scaleTimeRange:(CMTimeRange)timeRange toDuration:(CMTime)duration;
- (AVMutableCompositionTrack *)addMutableTrackWithMediaType:(NSString *)mediaType preferredTrackID:(CMPersistentTrackID)preferredTrackID;
- (void)removeTrack:(AVCompositionTrack *)track;
- (AVMutableCompositionTrack *)mutableTrackCompatibleWithTrack:(AVAssetTrack *)track;

#pragma clang diagnostic pop

@end
