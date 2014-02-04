#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <MediaToolbox/MTAudioProcessingTap.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAudioMixInputParameters <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CMPersistentTrackID trackID;
@property (nonatomic, copy, readonly) NSArray *inputParameters;
@property (nonatomic, copy, readonly) NSString *audioTimePitchAlgorithm;
@property (nonatomic, retain, readonly) id audioTapProcessor;

- (BOOL)getVolumeRampForTime:(CMTime)time startVolume:(float *)startVolume endVolume:(float *)endVolume timeRange:(CMTimeRange *)timeRange;

#pragma clang diagnostic pop

@end
