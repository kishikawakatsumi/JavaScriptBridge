#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVVideoComposition.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMSampleBuffer.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAssetReaderOutput <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSArray *videoTracks;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, copy) AVVideoComposition *videoComposition;
@property (nonatomic) BOOL alwaysCopiesSampleData;
@property (nonatomic, readonly) NSArray *audioTracks;
@property (nonatomic, copy) AVAudioMix *audioMix;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) AVAssetTrack *track;
@property (nonatomic, readonly) NSDictionary *videoSettings;
@property (nonatomic, readonly) id customVideoCompositor;
@property (nonatomic, readonly) NSDictionary *audioSettings;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;

- (id)copyNextSampleBuffer;

#pragma clang diagnostic pop

@end
