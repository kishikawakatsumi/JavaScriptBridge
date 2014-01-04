#import <AVFoundation/AVBase.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSDate.h>
#import <AVFoundation/AVAudioSettings.h>
#import <Availability.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAudioRecorder <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (getter = isMeteringEnabled) BOOL meteringEnabled;
@property (readonly) NSTimeInterval currentTime;
@property (readonly, getter = isRecording) BOOL recording;
@property (nonatomic, copy) NSArray *channelAssignments;
@property (readonly) NSTimeInterval deviceCurrentTime;
@property (assign) id delegate;
@property (readonly) NSDictionary *settings;
@property (readonly) NSURL *url;

- (id)initWithURL:(NSURL *)url settings:(NSDictionary *)settings error:(NSError **)outError;
- (BOOL)prepareToRecord;
- (BOOL)record;
- (BOOL)recordAtTime:(NSTimeInterval)time;
- (BOOL)recordForDuration:(NSTimeInterval)duration;
- (BOOL)recordAtTime:(NSTimeInterval)time forDuration:(NSTimeInterval)duration;
- (void)pause;
- (void)stop;
- (BOOL)deleteRecording;
- (void)updateMeters;
- (float)peakPowerForChannel:(NSUInteger)channelNumber;
- (float)averagePowerForChannel:(NSUInteger)channelNumber;

#pragma clang diagnostic pop

@end
