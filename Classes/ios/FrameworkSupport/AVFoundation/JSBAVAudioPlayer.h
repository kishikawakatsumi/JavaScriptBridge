#import <AVFoundation/AVBase.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSDate.h>
#import <AVFoundation/AVAudioSettings.h>
#import <AudioToolbox/AudioFile.h>
#import <Availability.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVAudioPlayer <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (readonly) NSTimeInterval deviceCurrentTime;
@property float volume;
@property NSInteger numberOfLoops;
@property (nonatomic, copy) NSArray *channelAssignments;
@property float pan;
@property BOOL enableRate;
@property (readonly) NSUInteger numberOfChannels;
@property (readonly) NSURL *url;
@property (readonly) NSDictionary *settings;
@property NSTimeInterval currentTime;
@property (readonly) NSData *data;
@property (assign) id delegate;
@property (readonly) NSTimeInterval duration;
@property float rate;
@property (getter = isMeteringEnabled) BOOL meteringEnabled;
@property (readonly, getter = isPlaying) BOOL playing;

- (id)initWithContentsOfURL:(NSURL *)url error:(NSError **)outError;
- (id)initWithData:(NSData *)data error:(NSError **)outError;
- (id)initWithContentsOfURL:(NSURL *)url fileTypeHint:(NSString *)utiString error:(NSError **)outError;
- (id)initWithData:(NSData *)data fileTypeHint:(NSString *)utiString error:(NSError **)outError;
- (BOOL)prepareToPlay;
- (BOOL)play;
- (BOOL)playAtTime:(NSTimeInterval)time;
- (void)pause;
- (void)stop;
- (void)updateMeters;
- (float)peakPowerForChannel:(NSUInteger)channelNumber;
- (float)averagePowerForChannel:(NSUInteger)channelNumber;

#pragma clang diagnostic pop

@end
