#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAssetTrackSegment;

@protocol JSBAVCompositionTrackSegment <JSExport, JSBAVAssetTrackSegment>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) CMPersistentTrackID sourceTrackID;

+ (AVCompositionTrackSegment *)compositionTrackSegmentWithURL:(NSURL *)URL trackID:(CMPersistentTrackID)trackID sourceTimeRange:(CMTimeRange)sourceTimeRange targetTimeRange:(CMTimeRange)targetTimeRange;
+ (AVCompositionTrackSegment *)compositionTrackSegmentWithTimeRange:(CMTimeRange)timeRange;

- (id)initWithURL:(NSURL *)URL trackID:(CMPersistentTrackID)trackID sourceTimeRange:(CMTimeRange)sourceTimeRange targetTimeRange:(CMTimeRange)targetTimeRange;
- (id)initWithTimeRange:(CMTimeRange)timeRange;

#pragma clang diagnostic pop

@end
